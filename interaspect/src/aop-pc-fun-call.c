/* Copyright (c) 2010 Justin Seyster
   Copyright (c) 2010 Ketan Dixit
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

/* Whether we want them or not (we don't), Autoconf _insists_ on
   defining these.  Since GCC's config.h (which we must include) also
   defines them, we have to undef them here. */
#undef PACKAGE_BUGREPORT
#undef PACKAGE_NAME
#undef PACKAGE_STRING
#undef PACKAGE_TARNAME
#undef PACKAGE_VERSION

#include <locale.h>
#include <config.h>
#include <system.h>
#include <coretypes.h>
#include <tm.h>
#include <tree.h>
#include <ggc.h>
#include <basic-block.h>
#include <gimple.h>
#include <toplev.h>
#include <diagnostic.h>
#include <string.h>

#include "aop.h"
#include "aop-duplicate.h"
#include "aop-dynval.h"
#include "aop-pointcut.h"
#include "aop-type.h"
#include "aop-weave.h"

/**
 * \defgroup call_pc Function Call Pointcut Functions
 * \{
 */

/* Given a GIMPLE_CALL statement, return the name of the called
   function, or NULL if the function is not named. */
static const char *
get_function_name (gimple call_stmt)
{
  tree func;

  aop_assert (gimple_code (call_stmt) == GIMPLE_CALL);

  func = gimple_call_fn (call_stmt);

  if (TREE_CODE (func) == ADDR_EXPR)
    {
      tree func_decl;
      const char *func_name;

      func_decl = TREE_OPERAND (func, 0);
      func_name = IDENTIFIER_POINTER (DECL_NAME (func_decl));

      return func_name;
    }
  else
    {
      /* This is a call to a function pointer, so it has no name. */
      return NULL;
    }
}

/* Given a GIMPLE_CALL statement, return the FUNCTION_TYPE tree node
   that represents the function prototype. */
static tree
get_function_prototype (gimple call_stmt)
{
  tree func;
  tree func_type_pointer;
  tree func_type;

  aop_assert (gimple_code (call_stmt) == GIMPLE_CALL);

  func = gimple_call_fn (call_stmt);

  /* Get the function type.  The func tree should have a pointer type,
     pointing to the actual function type. */
  func_type_pointer = TREE_TYPE (func);
  aop_assert (TREE_CODE (func_type_pointer) == POINTER_TYPE);
  func_type = TREE_TYPE (func_type_pointer);
  aop_assert (TREE_CODE (func_type) == FUNCTION_TYPE);

  return func_type;
}

/* Unfortunately, the type for a parameter is encoded in two different
   places: the _formal_ parameter and the _actual_ parameter.  These
   two types should always be the same, but in some edge cases they
   are not.  In general, we give priority to the formal parameter type
   when possible.

   The formal parameter type is the type that the function expects to
   be passed as encoded in the function declaration.

   The actual parameter type is the type of the value passed at the
   call site as encoded in the GIMPLE_CALL statement.

   In particular, when passing a literal integer constant to a
   function that expects a uint8 or uint16, GCC sometimes incorrectly
   allows the actual parameter to have a signed type (whereas the
   formal parameter has an unsigned type).

   C vararg functions are not type safe, so there is no formal
   parameter for any varargs argument.  In the case of a vararg
   argument, we must resort to the actual parameter type. */
static tree
get_formal_param_type (gimple call_stmt, int n)
{
  int i;
  tree func_type;
  tree type_list_node;
  tree formal_type = NULL;

  func_type = get_function_prototype (call_stmt);
  type_list_node = TYPE_ARG_TYPES (func_type);
  i = 0;
  while (type_list_node != void_list_node && type_list_node != NULL)
    {
      if (i == n)
	{
	  formal_type = TREE_VALUE (type_list_node);
	  break;
	}

      type_list_node = TREE_CHAIN (type_list_node);
      i++;
    }

  return formal_type;
}

/* See comment for get_formal_param_type(). */
static tree
get_actual_param_type (gimple call_stmt, int n)
{
  if (n < gimple_call_num_args (call_stmt))
    return TREE_TYPE (gimple_call_arg (call_stmt, n));
  else
    return NULL;
}

/* Given a GIMPLE_CALL statement, return the type of the nth parameter
   passed if there is an nth parameter or NULL if there is no nth
   parameter. */
static tree
get_param_type (gimple call_stmt, int n)
{
  tree param_type;

  aop_assert (gimple_code (call_stmt) == GIMPLE_CALL);

  param_type = get_formal_param_type (call_stmt, n);
  if (param_type == NULL)
    param_type = get_actual_param_type (call_stmt, n);

  return param_type;
}

/* Return true if a call statement matches the pointcut's criteria for
   name, return type, and argument types. */
static bool
call_matches (struct aop_pointcut *pc, gimple call_stmt)
{
  tree return_type;
  struct aop_param_desc *param;

  aop_assert (pc->kind == ATP_CALL);
  aop_assert (gimple_code (call_stmt) == GIMPLE_CALL);

  /* We never want to match a call that is actually one we
     inserted! */
  if (is_stmt_advice (call_stmt))
    return false;

  /* Check function name only if the user filtered by name. */
  if (pc->pc_call.function_name != NULL)
    {
      const char *func_name;

      /* Note that get_function_name returns NULL if the call is to a
	 function pointer.  We consider function pointer calls to
	 never match a name. */
      if ((func_name = get_function_name (call_stmt)) == NULL
	  || strcmp (pc->pc_call.function_name, func_name) != 0)
	return false;
    }

  /* Check parameter types. */
  for (param = pc->pc_call.param_list_head ; param != NULL ; param = param->next)
    {
      tree param_type;

      if ((param_type = get_param_type (call_stmt, param->param_index)) == NULL
	  || !does_type_match (param_type, param->type))
	return false;
    }

  /* Check return type (if the user filtered by return type). */
  return_type = gimple_call_return_type (call_stmt);
  if (pc->pc_call.return_type != NULL
      && !does_type_match (return_type, pc->pc_call.return_type))
    return false;

  /* All checks were OK. */
  return true;
}

static void
join_on_bb_function_call (basic_block bb, struct aop_pointcut *pc,
			  join_callback cb, void *callback_param)
{
  gimple_stmt_iterator gsi;
  expanded_location xloc;

  for (gsi = gsi_start_bb (bb); !gsi_end_p (gsi); gsi_next (&gsi)) 
    {
      gimple stmt = gsi_stmt (gsi);

      /* At this stage, there should be no GIMPLE statements with
	 sub-statements. */
      gcc_assert(!gimple_has_substatements (stmt));

      if (gimple_code (stmt) == GIMPLE_CALL)
	{
	  if (call_matches (pc, stmt))
	    {			
	      struct aop_joinpoint jp;
	      xloc = expand_location (gimple_location (stmt));
	      init_joinpoint (&jp, &gsi, pc, stmt, xloc.line, xloc.file);
	      cb (&jp, callback_param);		
	    }
	}
    }
}

static void
op_join_on_function_call (struct aop_pointcut *pc, join_callback cb,
			  void *callback_param)
{
  basic_block bb;

  aop_assert (pc->kind == ATP_CALL);

  FOR_EACH_BB(bb)
    {
      join_on_bb_function_call (bb, pc, cb, callback_param);
    }
}

static void
op_join_on_copy_function_call (struct aop_pointcut *pc, int copy,
			       join_callback cb, void *callback_param)
{
  unsigned int pair_index;
  bb_pair *pair;

  aop_assert (is_current_func_duplicated ());
  aop_assert (pc->kind == ATP_CALL);

  FOR_EACH_BB_PAIR (bb_pairs, pair_index, pair)
    {
      basic_block bb = (copy == 0) ? pair->old : pair->new;

      join_on_bb_function_call (bb, pc, cb, callback_param);
    }
}

/**
 * Return a pointcut that matches all function calls.  Use filter
 * functions on the resulting pointcut to produce a pointcut that
 * matches calls to a narrower set of functions (or a single
 * function).
 * \return The resulting pointcut.
 */
struct aop_pointcut *
aop_match_function_call ()
{
  struct aop_pointcut *pc;

  pc = create_pointcut (ATP_CALL);

  pc->join_on = op_join_on_function_call;
  pc->join_on_copy = op_join_on_copy_function_call;

  pc->pc_call.function_name = NULL;
  pc->pc_call.return_type = NULL;
  pc->pc_call.param_list_head = NULL;

  return pc;
}

/**
 * Filter a function call pointcut to only include calls to functions
 * with a specified name.
 * \param pc The function call pointcut to filter.  Function call
 * pointcuts are created with aop_match_function_call().
 * \param name The name to filter by.
 */
void
aop_filter_call_pc_by_name (struct aop_pointcut *pc, const char *name)
{
  pc->pc_call.function_name = name;
}

/**
 * Filter a function call pointcut to only include calls with a
 * parameter that matches a specified type.  This filter removes join
 * points when parameter n does not match type or when there is no
 * parameter n.
 *
 * Filters on the same parameter do not stack on top of each other.
 * If multiple parameter filters with the same n are applied a
 * pointcut, only the last one will have any effect.
 *
 * Note that you must filter a parameter by its type in order to
 * capture it with aop_capture_call_param().
 * \param pc The function call pointcut to filter.  Function call
 * pointcuts are created with aop_match_function_call().
 * \param n The index of the parameter to filter on.  Parameters are
 * indexed from zero.
 * \param type The parameter type to filter by.
 */
void
aop_filter_call_pc_by_param (struct aop_pointcut *pc, int n,
			     const struct aop_type *type)
{
  struct aop_param_desc *param = NULL;
  struct aop_param_desc *iter;

  /* Is there already a filter for this parameter? */
  for (iter = pc->pc_call.param_list_head ; iter != NULL ; iter = iter->next)
    {
      if (iter->param_index == n)
	{
	  param = iter;
	  break;
	}
    }

  /* No? Then create one and add it to the list. */
  if (param == NULL)
    {
      param = ggc_alloc (sizeof (struct aop_param_desc));

      param->next = pc->pc_call.param_list_head;
      pc->pc_call.param_list_head = param;
    }

  param->param_index = n;
  param->type = type;
}

static tree
op_get_return_value (struct aop_dynval *dv)
{
  gimple stmt;
  tree return_value;

  struct aop_joinpoint *jp = dv->jp;
  stmt = gsi_stmt (*(jp->gsi));

  /* If this function isn't on the right side of an assignment, we
     need to _put it_ on the right hand side of an assignment so
     we can grab its return value. */
  if (gimple_call_lhs(stmt) == NULL)
    {
      tree new_lhs = create_tmp_var (gimple_call_return_type(stmt),
				     "aop_return");
      gimple_call_set_lhs (stmt, new_lhs);
      update_stmt (stmt);
    }

  return_value = stabilize_reference (gimple_call_lhs (stmt));
  return return_value;
}

/**
 * Filter a function call pointcut to only include calls to functions
 * with a specified return type.  Note that you must filter a pointcut
 * by return type in order to call aop_capture_call_return_value() on
 * any of its join points.
 * \param pc The function call pointcut to filter.  Function call
 * pointcuts are created with aop_match_function_call().
 * \param type The return type to filter by.
 */
void
aop_filter_call_pc_by_return_type (struct aop_pointcut *pc,
				   const struct aop_type *type)
{
  if (pc->kind != ATP_CALL)
    fatal_error ("(InterAspect) Attempt to filter by return type on"
		 " unsupported join point.");

  pc->pc_call.return_type = type;
}

/**
 * Get the name of the function called in a function call join point.
 * Calls to function pointers do not have a name, so
 * aop_capture_called_function_name() will return NULL instead.
 * \param jp A function call join point.  Function call join points
 * are obtained by joining on an aop_match_function_call() pointcut.
 * \return Name of the called function or NULL if the call is to a
 * function pointer.
 */
const char *
aop_capture_called_function_name(struct aop_joinpoint *jp)
{
  struct aop_pointcut *pc;

  pc = jp->pc;
  if (pc->kind != ATP_CALL)
    fatal_error ("(InterAspect) Attempt to capture called function name from"
		 " unsupported join point.");

  return get_function_name (jp->stmt);
}

/**
 * Get a dynval representing a function call's return value.  Note
 * that you must filter with aop_filter_call_pc_by_return_type() in
 * order to capture the return value using
 * aop_capture_call_return_value().
 *
 * Note that it is illegal to pass the resulting aop_dynval to
 * aop_insert_advice() with #AOP_INSERT_BEFORE, as that would require
 * the function's return value to be known before it exectues.
 * \param jp A function call join point.  Function call join points
 * are obtained by joining on an aop_match_function_call() pointcut.
 * \return A dynval with its type determined by
 * aop_filter_call_pc_by_return_type().
 */
struct aop_dynval *
aop_capture_call_return_value (struct aop_joinpoint *jp)
{
  struct aop_pointcut *pc;
  struct aop_dynval *dv;

  pc = jp->pc;
  if (pc->kind != ATP_CALL)
    fatal_error ("(InterAspect) Attempt to capture return value from an"
		 " unsupported join point.");

  if (pc->pc_call.return_type == NULL)
    fatal_error ("(InterAspect) Attempt to capture return value without"
		 " specifying type.");

  dv = ggc_alloc (sizeof (struct aop_dynval));
  dv->kind = ADV_FUN_RETVAL;
  dv->type = pc->pc_call.return_type;
  dv->jp = jp;
  dv->get_dynval = op_get_return_value;
  return dv;
}

/**
 * Get a dynval representing a function call's return value if the
 * return value matches the specified type.  This function makes it
 * possible to capture the return value of a function even if you have
 * not filtered with aop_filter_call_pc_by_return_type().  However, it
 * returns NULL if the return value does not match the specified type.
 * \param jp A function call join point.  Function call join points
 * are obtained by joining on an aop_match_function_call() pointcut.
 * \param type This function verifies that the return value's type
 * matches this specified type.
 * \return A dynval with its type determined by the specified type or
 * NULL if the return value does not match the specified type.
 */
struct aop_dynval *
aop_capture_call_return_value_by_type (struct aop_joinpoint *jp,
				       const struct aop_type *type)
{
  struct aop_pointcut *pc;
  struct aop_dynval *dv;
  tree return_type;

  pc = jp->pc;
  if (pc->kind != ATP_CALL)
    fatal_error ("(InterAspect) Attempt to capture return value from an"
		 " unsupported join point.");

  /* Does this join point match the specified type? */
  return_type = gimple_call_return_type (jp->stmt);
  if (!does_type_match (return_type, type))
    return NULL;

  dv = ggc_alloc (sizeof (struct aop_dynval));
  dv->kind = ADV_FUN_RETVAL;
  dv->type = type;
  dv->jp = jp;
  dv->get_dynval = op_get_return_value;
  return dv;
}

static tree
op_get_param (struct aop_dynval *dv)
{
  gimple stmt;
  tree param;
  struct aop_joinpoint *jp = dv->jp;

  aop_assert (dv->kind == ADV_FUN_PARAM);
  aop_assert (jp->pc->kind == ATP_CALL);

  stmt = jp->stmt;
  aop_assert (gimple_code (stmt) == GIMPLE_CALL);

  param = gimple_call_arg (stmt, dv->dynval_call.param_index);
  param = stabilize_reference (param);
  return param;
}

/**
 * Get a dynval representing parameter n passed to a function call.
 * Note that you must use aop_filter_call_pc_by_param() to filter a
 * pointcut by parameter type for any parameter you wish to capture
 * with this function.
 * \param jp A function call join point.  Function call join points
 * are obtained by joining on an aop_match_function_call() pointcut.
 * \param n The index of the parameter to capture.  Parameters are
 * indexed from zero.
 * \return A dynval with its type determined by
 * aop_filter_call_pc_by_param().
 */
struct aop_dynval *
aop_capture_call_param (struct aop_joinpoint *jp, int n)
{
  struct aop_pointcut *pc;
  struct aop_dynval *dv;
  struct aop_param_desc *param;

  pc = jp->pc;
  if (pc->kind != ATP_CALL)
    fatal_error ("(InterAspect) Attempt to capture parameter from an"
		 " unsupported join point.");

  /* Search for an aop_param_desc for this parameter, so that we know
     its type. */
  for (param = pc->pc_call.param_list_head; param != NULL; param = param->next)
    if (param->param_index == n)
      break;  /* Found it. */

  /* If we don't find the appropriate aop_param_desc, param will be NULL. */
  if (param == NULL)
    fatal_error ("(InterAspect) Attempt to capture parameter without specifying"
		 " type.");

  dv = ggc_alloc (sizeof (struct aop_dynval));
  dv->kind = ADV_FUN_PARAM;
  dv->type = param->type;
  dv->jp = jp;
  dv->get_dynval = op_get_param;
  dv->dynval_call.param_index = n;
  return dv;
}

/**
 * Get a dynval representing parameter n passed to a function call if
 * there is a parameter n and it matches the specified type.  This
 * function makes it possible to capture a parameter even if yuo have
 * not filtered on its type with aop_filter_call_pc_by_param().
 * However, it returns NULL if there is no parameter n or if parameter
 * n does not match the specified type.
 * \param jp A function call join point.  Function call join points
 * are obtained by joining on an aop_match_function_call() pointcut.
 * \param n The index of the parameter to capture.  Parameters are
 * indexed from zero.
 * \param type This function verifies that the captured parameter
 * matches the specified type.
 * \return A dynval with its type determined by the specified type or
 * NULL if there is no matching parameter n.
 */
struct aop_dynval *
aop_capture_call_param_by_type (struct aop_joinpoint *jp, int n,
				const struct aop_type *type)
{
  struct aop_pointcut *pc;
  struct aop_dynval *dv;
  tree param_type;

  pc = jp->pc;
  if (pc->kind != ATP_CALL)
    fatal_error ("(InterAspect) Attempt to capture parameter from an"
		 " unsupported join point.");

  /* Check that there is a nth parameter and that it matches the
     type. */
  if ((param_type = get_param_type (jp->stmt, n)) == NULL
      || !does_type_match (param_type, type))
    return NULL;

  dv = ggc_alloc (sizeof (struct aop_dynval));
  dv->kind = ADV_FUN_PARAM;
  dv->type = type;
  dv->jp = jp;
  dv->get_dynval = op_get_param;
  dv->dynval_call.param_index = n;
  return dv;
}

/* Close Doxygen defgroup block. */
/**
 * \}
 */
