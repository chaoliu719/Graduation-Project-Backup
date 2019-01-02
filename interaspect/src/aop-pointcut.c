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
#include <toplev.h>
#include <tm.h>
#include <ggc.h>
#include <gimple.h>

#include "aop.h"
#include "aop-dynval.h"
#include "aop-pointcut.h"
#include "aop-type.h"

/* Allocates a pointcut and initializes it with default values. */
struct aop_pointcut *
create_pointcut (enum aop_pckind kind)
{
  struct aop_pointcut *pc;

  pc = ggc_alloc (sizeof (struct aop_pointcut));

  pc->need_regimplification = false;
  pc->kind = kind;

  pc->insert_before = op_default_insert_before;
  pc->insert_after = op_default_insert_after;
  pc->prepare_for_weave = op_default_prepare_for_weave;

  return pc;
}

/* Initializes a joinpoint with default values. */
void
init_joinpoint (struct aop_joinpoint *jp, gimple_stmt_iterator *gsi,
		struct aop_pointcut *pc, gimple stmt, int line,
		const char *file)
{
  jp->pc = pc;
  jp->gsi = gsi;
  jp->stmt = stmt;
  jp->line = line;
  jp->file = file;
  jp->in_edge = NULL;
  jp->is_prepared = false;
}

/* Sometimes we want to capture a parameter some place that is not at
   the beginning of the function.  The parameter may change during the
   function, so we save its value at function start to preserve it
   until we need it.

   Returns the temporary variable holding the preserved parameter
   value.  */
static tree
save_param(tree param)
{
  edge in_edge;
  tree tmp_val;
  gimple new_assign;

  aop_assert (TREE_CODE (param) == PARM_DECL);

  tmp_val = create_tmp_var (TREE_TYPE (param), "ia_preserved_param");
  new_assign = gimple_build_assign (tmp_val, stabilize_reference (param));

  /* Insert the assignment at the very beginning of the function. */
  in_edge = single_succ_edge (ENTRY_BLOCK_PTR_FOR_FUNCTION (cfun));
  gsi_insert_on_edge_immediate (in_edge, new_assign);

  return tmp_val;
}

static tree
op_get_in_param (struct aop_dynval *dv)
{
  gimple stmt;
  tree param = NULL;
  tree param_iter;
  struct aop_joinpoint *jp = dv->jp;
  int index = 0;

  aop_assert (dv->kind == ADV_FUN_PARAM);

  stmt = jp->stmt;
  
  for (param_iter = DECL_ARGUMENTS (current_function_decl);
       param_iter; param_iter = TREE_CHAIN (param_iter))
    {
      if (index == dv->dynval_in_param.param_index)
	{
	  param = param_iter;
	  break;
	}
      index++;       
    }	

  aop_assert (param != NULL);

  /* HACK: It's not necessary to save the parameter if this is an
     entry join point (there won't be any time for the variable to
     change).  That's good because save_param() doesn't work right if
     we're in the process of an aop_duplicate(). */
  if (jp->pc->kind != ATP_ENTRY)
    param = save_param (param);

  return param;
}

bool
check_in_param (int param_index, const struct aop_type *type)
{
  tree param_decl;
  tree param_type;
  int index = 0;
  bool index_found = false;
  for (param_decl = DECL_ARGUMENTS (current_function_decl);
       param_decl; param_decl = TREE_CHAIN (param_decl))
    {
      if (index == param_index)
	{
	  /* Index found check the type */
	  if ((param_type = TREE_TYPE (param_decl)) == NULL
	      || !does_type_match (param_type, type))
	    index_found = false;
	  else
	    index_found = true;
	  
	  break;
	}
      index++;
    }
  return index_found;
}

bool
check_in_params (struct aop_pointcut *pc)
{
  struct aop_param_desc *param_desc;

  /* Check parameter types. */
  for (param_desc = pc->in_param_list_head ; param_desc != NULL ;
       param_desc = param_desc->next)
    {     
      if(!check_in_param (param_desc->param_index, param_desc->type))
	return false;
    }

  return true;
}

/**
 * \defgroup all_pc Functions for All Pointcuts
 * \{
 */

/**
 * Get a dynval representing the nth parameter passed to the current
 * fuction.  Be careful not to capture the <code>in_param</code> of
 * the current function when you actually intend to capture the
 * <code>call_param</code> being passed to a function call join point.
 * (For the latter, use aop_capture_call_param() instead).
 *
 * Note that you must use aop_filter_by_in_param() to filter a
 * pointcut by parameter type for any parameter you wish to capture
 * with this function.
 * \param jp Any kind of join point.  Join points are obtained by
 * joining on a pointcut.
 * \param n The index of the parameter to capture.  Parameters are
 * indexed from zero.
 * \return A dynval with its type determined by
 * aop_filter_by_in_param().
 */
struct aop_dynval *
aop_capture_in_param (struct aop_joinpoint *jp, int n)
{
  struct aop_pointcut *pc;
  struct aop_dynval *dv;
  struct aop_param_desc *param;

  pc = jp->pc;

  /* Search for an aop_param_desc for this parameter, so that we know
     its type. */
  for (param = pc->in_param_list_head; param != NULL; param = param->next)
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
  dv->get_dynval = op_get_in_param;
  dv->dynval_in_param.param_index = n;
  return dv;
}

/**
 * Filter a pointcut (of any type) to only include join points within
 * functions that take an nth parameter matching the specified type.
 * Be careful not to use this function when you actually intend to
 * filter a function call pointcut by the parameters that the function
 * call takes.  (For the latter, use aop_filter_call_pc_by_param()).
 *
 * Because pointcuts are created per function, this kind of filtering
 * is actually all-or-nothing.  It will either empty the pointcut or
 * leave it as is.
 *
 * Filters on the same parameter do not stack on top of each other.
 * If multiple parameter filters with the same n are applied a
 * pointcut, only the last one will have any effect.
 *
 * Note that you must filter a parameter by its type in order to
 * capture it with aop_capture_in_param().
 * \param pc The pointcut to filter.
 * \param n The index of the parameter to filter on.  Parameters are
 * indexed from zero.
 * \param type The parameter type to filter by.
 */
void
aop_filter_by_in_param (struct aop_pointcut *pc, int n,
			const struct aop_type *type)
{
  struct aop_param_desc *param = NULL;
  struct aop_param_desc *iter;
 
  /* Is there already a filter for this parameter? */
  for (iter = pc->in_param_list_head ; iter != NULL ; iter = iter->next)
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

      param->next = pc->in_param_list_head;
      pc->in_param_list_head = param;
    }

  param->param_index = n;
  param->type = type;
}

/**
 * Get a dynval representing the nth parameter passed to the current
 * function if there is a parameter n and it matches the specified
 * type.  This function makes it possible to capture a parameter even
 * if you have not filtered on its type with
 * aop_filter_call_pc_by_param().  However, it returns NULL if there
 * is no parameter n or if parameter n does not match the specified
 * type.
 * \param jp A function call join point.  Function call join points
 * are obtained by joining on an aop_match_function_call() pointcut.
 * \param n The index of the parameter to capture.  Parameters are
 * indexed from zero.
 * \param type This function verifies that the captured parameter
 * matches the specified type.
 * \return dynval with its type determined by the specified type or
 * NULL if there is no matching parameter n.
 */
struct aop_dynval *
aop_capture_in_param_by_type (struct aop_joinpoint *jp, int n,
			   const struct aop_type *type)
{
  struct aop_pointcut *pc;
  struct aop_dynval *dv;

  pc = jp->pc;

  /* Check that there is a nth parameter and that it matches the
     type. */
  
  if (!check_in_param (n, type))
    return NULL;
  
  dv = ggc_alloc (sizeof (struct aop_dynval));
  dv->kind = ADV_FUN_PARAM;
  dv->type = type;
  dv->jp = jp;
  dv->get_dynval = op_get_in_param;
  dv->dynval_call.param_index = n;
  return dv;
}

/**
 * Get the line number of join point.  You usually want to call this
 * with aop_capture_file_name() to fully identify the line of code the
 * join point is from.
 * \param jp Any join point.
 */
int
aop_capture_lineno (struct aop_joinpoint *jp)
{
  return jp->line;
}

/**
 * Get the name of the file this join point is in.  This function will
 * usually return the name of the file that is currently being
 * compiled, but compiler macros make it possible for their to be join
 * points from other files.
 * \param jp Any join point.
 */
const char *
aop_capture_file_name (struct aop_joinpoint *jp)
{
  return jp->file;
}

/**
 * \}
 */
