/* This program is free software: you can redistribute it and/or
   modify it under the terms of the GNU General Public License as
   published by the Free Software Foundation, either version 3 of the
   License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   Under Section 7 of GPL version 3, you are granted additional
   permissions described in the GCC Runtime Library Exception, version
   3.1, as published by the Free Software Foundation.

   You should have received a copy of the GNU General Public License
   and a copy of the GCC Runtime Library Exception along with this
   program; see the files COPYING and COPYING.RUNTIME respectively.
   If not, see <http://www.gnu.org/licenses/>. */

/* This file, originally provided under the MIT license, is relicensed
   here under the GPL3 for distribution with InterAspect.  The
   original license is provided at the end of the file but does not
   apply to any changes to this file or to any other part of the
   InterAspect distribution. */

/*
 * Regular expression implementation.
 * Supports only ( | ) * + ?.  No escapes.
 * Compiles to NFA and then simulates NFA
 * using Thompson's algorithm.
 *
 * See also http://swtch.com/~rsc/regexp/ and
 * Thompson, Ken.  Regular Expression Search Algorithm,
 * Communications of the ACM 11(6) (June 1968), pp. 419-422.
 * 
 * Copyright (c) 2007 Russ Cox.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static int
is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c== '\n');
}

static int
is_operator(char c)
{
	return (c == '(' || c == '|' || c==')' || c=='*' || c=='+' || c=='?');
}

/* _0-9a-zA-Z */
static int
is_symbol_char(char c)
{
	return (c == '_' || (c >= '0' && c <='9') || (c >= 'a' && c <='z')
		|| (c >= 'A' && c <='Z'));
}

/* Writing this regexp tokenizer would be a whole lot easier if I
 * could just _use_ regexps to do it.  Sigh.
 *
 * Returns (, |, ), *, +, or ? if the parsed token is one of those
 * operators; ! if the tokenizer encounters an error; '\0' if there is
 * nothing left to parse; and some other value if the token is an
 * indentifier.
 *
 * The parsed token is stored in token and its length in len.
 **/
static char
pop_token(const char** re, const char** token, int* len)
{
	while(**re != '\0' && is_whitespace(**re))
		(*re)++;

	if (**re == '\0'){
		*len = 0;
		return '\0';
	}
	else if(is_operator(**re)){
		*token = *re;
		*len = 1;
		(*re)++;

		return **token;
	}

	if (!is_symbol_char(**re)){
		*len = 0;
		return '!';  /* ! for error. */
	}

	*token = *re;
	for (*len = 0; is_symbol_char(**re); (*re)++, (*len)++)
		;

	return **token;
}

/* Find the index of token (which has length len and need not be
 * null-terminated) in the list of names. */
static int
lookup_name(const char* token, int len, const char** names, int num_names)
{
	int i;

	for(i = 0; i < num_names; i++){
		if(strncmp(token, names[i], len) == 0)
			return i;
	}

	return -1;
}

/*
 * Convert infix regexp re to postfix notation.
 * Insert . as explicit concatenation operator.
 * Cheesy parser, return static buffer.
 */
static char*
re2post(const char* re, const char** names, int num_names)
{
	int nalt, natom;
	char c;
	const char *token;
	int len;
	int sym;
	static char buf[8000];
	char *dst;
	struct {
		int nalt;
		int natom;
	} paren[100], *p;
	
	p = paren;
	dst = buf;
	nalt = 0;
	natom = 0;
	if(strlen(re) >= sizeof buf/2)
		return NULL;
	for(c = pop_token(&re, &token, &len); c; c = pop_token(&re, &token, &len)){
		switch(c){
		case '!':
			return NULL;
		case '(':
			if(natom > 1){
				--natom;
				*dst++ = '.';
			}
			if(p >= paren+100)
				return NULL;
			p->nalt = nalt;
			p->natom = natom;
			p++;
			nalt = 0;
			natom = 0;
			break;
		case '|':
			if(natom == 0)
				return NULL;
			while(--natom > 0)
				*dst++ = '.';
			nalt++;
			break;
		case ')':
			if(p == paren)
				return NULL;
			if(natom == 0)
				return NULL;
			while(--natom > 0)
				*dst++ = '.';
			for(; nalt > 0; nalt--)
				*dst++ = '|';
			--p;
			nalt = p->nalt;
			natom = p->natom;
			natom++;
			break;
		case '*':
		case '+':
		case '?':
			if(natom == 0)
				return NULL;
			*dst++ = c;
			break;
		default:
			if(natom > 1){
				--natom;
				*dst++ = '.';
			}
			sym = lookup_name(token, len, names, num_names);
			if(sym < 0){
				return NULL;
			}
			*dst++ = (char)(sym + 'A');
			natom++;
			break;
		}
	}
	if(p != paren)
		return NULL;
	while(--natom > 0)
		*dst++ = '.';
	for(; nalt > 0; nalt--)
		*dst++ = '|';
	*dst = 0;
	return buf;
}

/*
 * Represents an NFA state plus zero or one or two arrows exiting.
 * if c == Match, no arrows out; matching state.
 * If c == Split, unlabeled arrows to out and out1 (if != NULL).
 * If c < 256, labeled arrow with character c to out.
 */
enum
{
	Match = 256,
	Split = 257
};
typedef struct State State;
struct State
{
	int c;
	State *out;
	State *out1;
};
static State matchstate = { Match };	/* matching state */

typedef struct NFA NFA;
struct NFA
{
	State* start;
	int num_states;
};

/* Allocate and initialize State */
State*
state(int c, State *out, State *out1)
{
	State *s;
	
	s = malloc(sizeof *s);
	s->c = c;
	s->out = out;
	s->out1 = out1;
	return s;
}

/*
 * A partially built NFA without the matching state filled in.
 * Frag.start points at the start state.
 * Frag.out is a list of places that need to be set to the
 * next state for this fragment.
 */
typedef struct Frag Frag;
typedef union Ptrlist Ptrlist;
struct Frag
{
	State *start;
	Ptrlist *out;
};

/* Initialize Frag struct. */
static Frag
frag(State *start, Ptrlist *out)
{
	Frag n = { start, out };
	return n;
}

/*
 * Since the out pointers in the list are always 
 * uninitialized, we use the pointers themselves
 * as storage for the Ptrlists.
 */
union Ptrlist
{
	Ptrlist *next;
	State *s;
};

/* Create singleton list containing just outp. */
static Ptrlist*
list1(State **outp)
{
	Ptrlist *l;
	
	l = (Ptrlist*)outp;
	l->next = NULL;
	return l;
}

/* Patch the list of states at out to point to start. */
static void
patch(Ptrlist *l, State *s)
{
	Ptrlist *next;
	
	for(; l; l=next){
		next = l->next;
		l->s = s;
	}
}

/* Join the two lists l1 and l2, returning the combination. */
static Ptrlist*
append(Ptrlist *l1, Ptrlist *l2)
{
	Ptrlist *oldl1;
	
	oldl1 = l1;
	while(l1->next)
		l1 = l1->next;
	l1->next = l2;
	return oldl1;
}

/*
 * Convert postfix regular expression to NFA.
 */
static NFA*
post2nfa(char *postfix)
{
	char *p;
	Frag stack[1000], *stackp, e1, e2, e;
	State *s;
	NFA *nfa;
	
	// fprintf(stderr, "postfix: %s\n", postfix);

	if(postfix == NULL)
		return NULL;

	nfa = malloc(sizeof(NFA));
	if (nfa == NULL)
		return NULL;
	nfa->num_states = 1;  /* The final (matching) state. */

	#define push(s) *stackp++ = s
	#define pop() *--stackp

	stackp = stack;
	for(p=postfix; *p; p++){
		switch(*p){
		default:
			s = state(*p, NULL, NULL);
			nfa->num_states++;
			push(frag(s, list1(&s->out)));
			break;
		case '.':	/* catenate */
			e2 = pop();
			e1 = pop();
			patch(e1.out, e2.start);
			push(frag(e1.start, e2.out));
			break;
		case '|':	/* alternate */
			e2 = pop();
			e1 = pop();
			s = state(Split, e1.start, e2.start);
			nfa->num_states++;
			push(frag(s, append(e1.out, e2.out)));
			break;
		case '?':	/* zero or one */
			e = pop();
			s = state(Split, e.start, NULL);
			nfa->num_states++;
			push(frag(s, append(e.out, list1(&s->out1))));
			break;
		case '*':	/* zero or more */
			e = pop();
			s = state(Split, e.start, NULL);
			nfa->num_states++;
			patch(e.out, s);
			push(frag(s, list1(&s->out1)));
			break;
		case '+':	/* one or more */
			e = pop();
			s = state(Split, e.start, NULL);
			nfa->num_states++;
			patch(e.out, s);
			push(frag(e.start, list1(&s->out1)));
			break;
		}
	}

	e = pop();
	if(stackp != stack)
		return NULL;

	patch(e.out, &matchstate);
	nfa->start = e.start;
	return nfa;
#undef pop
#undef push
}

typedef struct List List;
struct List
{
	State **s;
	int n;
};

typedef struct NState NState;
struct NState
{
	struct List l;
	int num_states;
};

static int
inlist(List *l, State *s)
{
	int i;
	for (i = 0; i < l->n; i++)
		if (l->s[i] == s)
			return 1;

	return 0;
}

/* Check whether state list contains a match. */
int
ismatch(NState *ns)
{
	return inlist(&ns->l, &matchstate);
}

/* True if the given state is exactly equivalent to the state of an
   NFA that has received no input. */
int
isatstart(NState *ns)
{
	/* The first state is always the start state.  Also note that
	 * matchstate never goes anywhere, so its presence in the
	 * state list doesn't change anything. */
	if (ns->l.n == 1)
		return 1;
	else if (ns->l.n == 2)
		return (ns->l.s[1] == &matchstate);
	else
		return 0;
}

/* Add s to l, following unlabeled arrows. */
static void
addstate(List *l, State *s)
{
	if(s == NULL || inlist(l, s))
		return;
	if(s->c == Split){
		/* follow unlabeled arrows */
		addstate(l, s->out);
		addstate(l, s->out1);
		return;
	}
	l->s[l->n++] = s;
}

/*
 * Step the NFA from the states in clist
 * past the character c,
 * to create next NFA state set nlist.
 */
void
step(NState *ns, int c)
{
	int i;
	State *s;
	List *srclist;
	List dstlist;

	/* Note that we encode input events as characters starting
	 * from A.  (Yeah, it's kind of a hack.) */
	c += 'A';

	srclist = &ns->l;
	dstlist.n = 0;
	dstlist.s = alloca(ns->num_states * sizeof(State*));

	/* Hack: The first state in the state list is _always_ the
	 * start state.  That way, we match any input that has a
	 * matching suffix. */
	addstate(&dstlist, srclist->s[0]);

	for(i=0; i<srclist->n; i++){
		s = srclist->s[i];
		if(s->c == c)
			addstate(&dstlist, s->out);
	}

	/* Copy dstlist back to srclist. */
	srclist->n = dstlist.n;
	memcpy(srclist->s, dstlist.s, ns->num_states * sizeof(State*));
}

NState*
getstartstate(NFA *nfa)
{
	NState *start = malloc(sizeof(List));
	State **s = malloc(nfa->num_states * sizeof(State*));
	if (start == NULL || s == NULL){
		free(start);
		free(s);
		return NULL;
	}
        start->l.n = 0;
	start->l.s = s;
	start->num_states = nfa->num_states;
	addstate(&start->l, nfa->start);
	return start;
}

void
freenstate(NState *ns)
{
	if (ns != NULL){
		free(ns->l.s);
		free(ns);
	}
}

NFA*
compile_re(const char* re, const char** names, int num_names)
{
	char *post;
	NFA *nfa;

	post = re2post(re, names, num_names);
	if (post == NULL){
		return NULL;
	}

	nfa = post2nfa(post);
	if (nfa == NULL)
		return NULL;

	return nfa;
}

/* The original license for this file is provided here but does not
   apply to any changes to the file or to any other part of the
   InterAspect distribution. */

/*
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated
 * documentation files (the "Software"), to deal in the
 * Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute,
 * sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall
 * be included in all copies or substantial portions of the
 * Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY
 * KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
 * PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE AUTHORS
 * OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
