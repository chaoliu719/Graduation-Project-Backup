/* Copyright (c) 2010 Justin Seyster
   Copyright (c) 2010 Erez Zadok
   Copyright (c) 2010 Stony Brook University
   Copyright (c) 2010 The Research Foundation of SUNY

   This program is free software: you can redistribute it and/or
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

/* The interface exposed to tracecut.c from our modified dfa1.c */

struct NFA;
struct NState;

extern int ismatch (struct NState *ns);
extern int isatstart (struct NState *ns);
extern void step (struct NState *ns, int c);
extern struct NState *getstartstate(struct NFA *nfa);
extern void freenstate (struct NState *ns);
extern struct NFA *compile_re(const char *re, const char **names,
			      int num_names);
