/* Copyright (c) 2011 Justin Seyster
   Copyright (c) 2011 Erez Zadok
   Copyright (c) 2011 Stony Brook University
   Copyright (c) 2011 The Research Foundation of SUNY

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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "nfa.h"
#include "tracecut-advice.h"

/* Advice functions should be externally visible. */
#define ADVICE_FUNC __attribute__((visibility("default")))

static int num_tracecuts = -1;

struct tuple;

struct tracecut {
  int num_params;
  int num_symbols;
  int num_rules;

  const char **symbol_names;
  const char **param_names;
  struct NFA **rules;

  struct tuple *tuple_list;
};

static struct tracecut *tracecut_array = NULL;

struct event {
  int symbol_index;

  int tc_index;
  struct tracecut *tracecut;

  struct param_val param_vals[];
};

static struct event *current_event = NULL;

/* Each tracecut object has a list of tuples, with each tuple
   representing one state machine that the tracecut is tracking.  When
   an event occurs, the tracecut will update the state machine for
   every state machine whose params match the non-vacant params in the
   event. */
struct tuple {
  /* For now, tuples are stored in a doubly-linked list. */
  struct tuple *next;
  struct tuple *prev;

  struct param_val *param_vals;

  /* The state this tuple is in for each of the tracecut's regexp
     rules. */
  struct NState **states;
};

static void
fatal_tracecut_error(const char *error)
{
  /* Setting num_tracecuts to -1 will stop completely disable the
     tracecut runtime. */
  num_tracecuts = -1;

  fprintf (stderr, "Fatal tracecut error: %s\n", error);
}

static struct tracecut *
get_tracecut (int tc_index)
{
  if (num_tracecuts < 0)
    {
      /* The tracecut library hasn't been initialized yet, so tracecut
	 functions should silently do nothing. */
      return NULL;
    }
  else if (tc_index >= 0 && tc_index < num_tracecuts)
    {
      /* The normal case. */
      return &tracecut_array[tc_index];
    }
  else
    {
      /* Some error occured in initialization.  Abort. */
      fatal_tracecut_error ("Attempt to initialize bad tracecut");
      return NULL;
    }
}

__attribute__((weak)) __attribute__((noinline)) void
tc_report_match (const char *symbol, const struct matched_param *param_array,
		 int num_params)
{
  fprintf (stderr, "(Tracecut) Match triggered by symbol: %s.", symbol);

  if (num_params > 0)
    {
      int i;

      fprintf (stderr, "  Param values follow:\n");
      for (i = 0; i < num_params; i++)
	{
	  const char *name = param_array[i].name;
	  const struct param_val *value = param_array[i].value;

	  fprintf (stderr, "  Param %s: ", name);

	  switch (value->kind)
	    {
	    case PV_POINTER:
	      fprintf (stderr, " %p\n", (void *)value->ptr_value);
	      break;
	    default:
	      fprintf (stderr, " Bad value\n");
	    }
	}
    }
  else
    {
      /* No params to print. */
      fprintf (stderr, "\n");
    }
}

static void
report_match (struct tracecut *tc, struct tuple *tuple, int symbol_index)
{
  int i;
  struct matched_param *param_array;

  param_array = alloca (tc->num_params * sizeof (struct matched_param));
  for (i = 0; i < tc->num_params; i++)
    {
      param_array[i].name = tc->param_names[i];
      param_array[i].value = &tuple->param_vals[i];
    }

  tc_report_match (tc->symbol_names[symbol_index], param_array, tc->num_params);
}

static void
insert_tuple (struct tracecut *tc, struct tuple *tuple)
{
  tuple->prev = NULL;
  tuple->next = tc->tuple_list;

  if (tc->tuple_list != NULL)
    tc->tuple_list->prev = tuple;

  tc->tuple_list = tuple;
}


static void
remove_tuple (struct tracecut *tc, struct tuple *tuple)
{
  if (tc->tuple_list == tuple)
    tc->tuple_list = tuple->next;

  if (tuple->next != NULL)
    tuple->next->prev = tuple->prev;

  if (tuple->prev != NULL)
    tuple->prev->next = tuple->next;

  tuple->next = tuple->prev = NULL;
}

static void
destroy_tuple (struct tuple *tuple, int num_rules)
{
  if (tuple != NULL)
    {
      int i;
      for (i = 0; i < num_rules; i++)
	freenstate (tuple->states[i]);

      free (tuple->states);
      free (tuple->param_vals);
      free (tuple);
    }
}

static void
advance_state_machine (struct tracecut *tc, struct tuple *tuple, int symbol_index)
{
  int i;
  int num_trivial = 0;
  for (i = 0; i < tc->num_rules; i++)
    {
      step (tuple->states[i], symbol_index);
      if (ismatch (tuple->states[i]))
	report_match (tc, tuple, symbol_index);

      if (isatstart (tuple->states[i]))
	num_trivial++;
    }

  /* If every state machine is in a "trivial" state, then we don't
     need to keep this tuple around any more.  We say a state is
     trivial when it looks exactly as it did when it was
     initialized. */
  if (num_trivial == tc->num_rules)
    {
      remove_tuple (tc, tuple);
      destroy_tuple (tuple, tc->num_rules);
    }
}

static int
event_matches_tuple (struct event *event, struct tuple *tuple)
{
  int i;
  struct tracecut *tc = event->tracecut;

  for (i = 0; i < tc->num_params; i++)
    {
      switch (event->param_vals[i].kind)
	{
	case PV_VACANT:
	  continue;  /* Vacant values always match. */
	case PV_POINTER:
	  if (tuple->param_vals[i].kind != PV_POINTER
	      || event->param_vals[i].ptr_value != tuple->param_vals[i].ptr_value)
	    return 0;  /* Mismatch. */
	  else
	    ;  /* This param matches; keep looking. */
	  break;
	case PV_SIGNED_INT:
	  if (tuple->param_vals[i].kind != PV_SIGNED_INT
	      || event->param_vals[i].int_value != tuple->param_vals[i].int_value)
	    return 0;  /* Mismatch. */
	  else
	    ;  /* This param matches; keep looking. */
	  break;
	case PV_UNSIGNED_INT:
	  if (tuple->param_vals[i].kind != PV_UNSIGNED_INT
	      || event->param_vals[i].uint_value != tuple->param_vals[i].uint_value)
	    return 0;  /* Mismatch. */
	  else
	    ;  /* This param matches; keep looking. */
	  break;
	case PV_FP:
	  if (tuple->param_vals[i].kind != PV_FP
	      || event->param_vals[i].fp_value != tuple->param_vals[i].fp_value)
	    return 0;  /* Mismatch. */
	  else
	    ;  /* This param matches; keep looking. */
	  break;
	}
    }

  /* All param matched! */
  return 1;
}

static int
update_matching_tuples (struct event *event)
{
  struct tracecut *tc = event->tracecut;
  struct tuple *tuple;
  int tuples_updated = 0;

  tuple = tc->tuple_list;
  while (tuple != NULL)
    {
      /* This tuple might get destroyed by advance_state_machine, so
	 save it's next value now. */
      struct tuple *next = tuple->next;

      if (event_matches_tuple (event, tuple))
	{
	  advance_state_machine (event->tracecut, tuple, event->symbol_index);
	  tuples_updated++;
	}

      tuple = next;
    }

  return tuples_updated;
}

static struct tuple *
add_tuple_for_event (struct event *event)
{
  int i;
  struct tracecut *tc = event->tracecut;
  struct tuple *tuple;
  size_t tuple_size;

  tuple_size = sizeof (struct tuple)
    + tc->num_params * sizeof (struct param_val);
  tuple = malloc (tuple_size);
  if (tuple == NULL)
    {
      fatal_tracecut_error ("Out of memory");
      return NULL;
    }

  tuple->next = tuple->prev = NULL;
  tuple->param_vals = calloc (tc->num_params, sizeof (struct param_val));
  tuple->states = calloc (tc->num_rules, sizeof (struct DState *));
  if (tuple->param_vals == NULL || tuple->states == NULL)
    goto nomem;

  /* Initialize the param_vals array. */
  memcpy (tuple->param_vals, event->param_vals,
	  tc->num_params * sizeof (struct param_val));

  /* Set each rule to its initial state. */
  for (i = 0; i < tc->num_rules; i++)
    {
      tuple->states[i] = getstartstate (tc->rules[i]);
      if (tuple->states[i] == NULL)
	goto nomem;
    }

  insert_tuple (tc, tuple);

  return tuple;

 nomem:
  if (tuple != NULL)
    {
      if (tuple->states != NULL)
	{
	  for (i = 0; i < tc->num_rules; i++)
	    if (tuple->states[i] != NULL)
	      freenstate (tuple->states[i]);
	  free (tuple->states);
	}

      free (tuple->param_vals);
      free (tuple);
    }
  return NULL;
}

/* An event is "complete" iff only if all its params are specified
   (i.e., none are vacant). */
static int
is_event_complete (struct event *event)
{
  int i;
  struct tracecut *tc = event->tracecut;

  for (i = 0; i < tc->num_params; i++)
    if (event->param_vals[i].kind == PV_VACANT)
      return 0;

  return 1;
}

static void
do_transition (struct event *event)
{
  int tuples_updated;

  tuples_updated = update_matching_tuples (event);

  if (tuples_updated == 0 && is_event_complete (event))
    {
      struct tuple *tuple;

      tuple = add_tuple_for_event (event);
      if (tuple != NULL)
	advance_state_machine (event->tracecut, tuple, event->symbol_index);
    }
}

ADVICE_FUNC void
_tc_init (int _num_tracecuts)
{
  num_tracecuts = _num_tracecuts;
  tracecut_array = calloc (num_tracecuts, sizeof (struct tracecut));
  if (tracecut_array == NULL)
    fatal_tracecut_error ("Out of memory");
}

ADVICE_FUNC void
_tc_new_tracecut (int tc_index, int num_params, int num_symbols, int num_rules)
{
  struct tracecut *tc;

  tc = get_tracecut (tc_index);
  if (tc == NULL)
    return;

  tc->num_symbols = num_symbols;
  tc->num_params = num_params;
  tc->num_rules = num_rules;

  if (num_symbols > 0)
    {
      tc->symbol_names = calloc (num_symbols, sizeof (const char *));
      if (tc->symbol_names == NULL)
	{
	  fatal_tracecut_error ("Out of memory");
	  return;
	}
    }

  if (num_params > 0)
    {
      tc->param_names = calloc (num_params, sizeof (const char *));
      if (tc->param_names == NULL)
	{
	  fatal_tracecut_error ("Out of memory");
	  return;
	}
    }

  if (num_rules > 0)
    {
      tc->rules = calloc (num_rules, sizeof (struct State *));
      if (tc->rules == NULL)
	{
	  fatal_tracecut_error ("Out of memory");
	  return;
	}
    }
}

ADVICE_FUNC void
_tc_name_symbol (int tc_index, int symbol_index, const char *symbol_name)
{
  struct tracecut *tc;

  tc = get_tracecut (tc_index);
  if (tc == NULL)
    return;

  if (symbol_index < 0 || symbol_index >= tc->num_symbols)
    {
      fatal_tracecut_error ("Bad symbol index at initialization.");
      return;
    }

  tc->symbol_names[symbol_index] = symbol_name;
}

ADVICE_FUNC void
_tc_name_param (int tc_index, int param_index, const char *param_name)
{
  struct tracecut *tc;

  tc = get_tracecut (tc_index);
  if (tc == NULL)
    return;

  if (param_index < 0 || param_index >= tc->num_params)
    {
      fatal_tracecut_error ("Bad symbol index at initialization.");
      return;
    }

  tc->param_names[param_index] = param_name;
}

ADVICE_FUNC void
_tc_compile_rule (int tc_index, int rule_index, const char *specification)
{
  struct tracecut *tc;

  tc = get_tracecut (tc_index);
  if (tc == NULL)
    {
      return;
    }
  else if (rule_index < 0 || rule_index >= tc->num_rules)
    {
      fatal_tracecut_error ("Bad rule index at initialization.");
    }

  tc->rules[rule_index] = compile_re (specification, tc->symbol_names,
				      tc->num_symbols);
  if (tc->rules[rule_index] == NULL)
    {
      fatal_tracecut_error ("Failed to compile rule.");
    }
}

ADVICE_FUNC void
_tc_event_begin (int tc_index)
{
  struct tracecut *tc;
  size_t event_size;

  tc = get_tracecut (tc_index);
  if (tc == NULL)
    return;

  /* We're going to start seeing calls to _tc_capture_*_param()
     functions.  We need to create a new event object, so that we
     store those params with the event. */
  event_size = sizeof (struct event)
    + tc->num_params * sizeof (struct param_val);
  current_event = malloc (event_size);
  if (current_event != NULL)
    {
      memset (current_event, 0, event_size);
      current_event->tc_index = tc_index;
      current_event->tracecut = tc;
    }
  else
    {
      fatal_tracecut_error ("Out of memory");
    }
}

ADVICE_FUNC void
_tc_capture_pointer_param (int tc_index, int symbol_index, int param_index,
			   void *param_val)
{
  if (current_event == NULL)
    {
      return;
    }
  else if (current_event->tc_index != tc_index)
    {
      fatal_tracecut_error ("Misplaced param value.");
      return;
    }
  else if (param_index < 0
	   || param_index >= current_event->tracecut->num_params)
    {
      fatal_tracecut_error ("Out-of-bounds param value.");
    }

  current_event->param_vals[param_index].kind = PV_POINTER;
  current_event->param_vals[param_index].ptr_value = (uintptr_t)param_val;
}

ADVICE_FUNC void
_tc_capture_signed_int_param (int tc_index, int symbol_index, int param_index,
			      int64_t param_val)
{
  if (current_event == NULL)
    {
      return;
    }
  else if (current_event->tc_index != tc_index)
    {
      fatal_tracecut_error ("Misplaced param value.");
      return;
    }
  else if (param_index < 0
	   || param_index >= current_event->tracecut->num_params)
    {
      fatal_tracecut_error ("Out-of-bounds param value.");
    }

  current_event->param_vals[param_index].kind = PV_SIGNED_INT;
  current_event->param_vals[param_index].int_value = param_val;
}
   
ADVICE_FUNC void
_tc_capture_unsigned_int_param (int tc_index, int symbol_index, int param_index,
			        uint64_t param_val)
{
  if (current_event == NULL)
    {
      return;
    }
  else if (current_event->tc_index != tc_index)
    {
      fatal_tracecut_error ("Misplaced param value.");
      return;
    }
  else if (param_index < 0
	   || param_index >= current_event->tracecut->num_params)
    {
      fatal_tracecut_error ("Out-of-bounds param value.");
    }

  current_event->param_vals[param_index].kind = PV_UNSIGNED_INT;
  current_event->param_vals[param_index].uint_value = param_val;
}

ADVICE_FUNC void
_tc_capture_float_param (int tc_index, int symbol_index, int param_index,
			 double param_val)
{
  if (current_event == NULL)
    {
      return;
    }
  else if (current_event->tc_index != tc_index)
    {
      fatal_tracecut_error ("Misplaced param value.");
      return;
    }
  else if (param_index < 0
	   || param_index >= current_event->tracecut->num_params)
    {
      fatal_tracecut_error ("Out-of-bounds param value.");
    }

  current_event->param_vals[param_index].kind = PV_FP;
  current_event->param_vals[param_index].fp_value = param_val;
}


ADVICE_FUNC void
_tc_event_transition (int tc_index, int symbol_index)
{
  if (current_event == NULL)
    {
      return;
    }
  else if (current_event->tc_index != tc_index)
    {
      fatal_tracecut_error ("Misplaced event transition.");
      return;
    }

  current_event->symbol_index = symbol_index;
  do_transition (current_event);
}
