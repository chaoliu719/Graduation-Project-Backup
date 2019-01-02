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
#include <tree-flow.h>
#include <gimple.h>

#include "aop.h"
#include "aop-duplicate.h"
#include "aop-dynval.h"
#include "aop-pointcut.h"
#include "aop-type.h"
#include "aop-weave.h"

/**
 * \defgroup assign_pc Assignment Pointcut Functions
 * \{
 */

/* Determine if an assignment join point assigns directly to a
   variable and return that variable.  Return NULL otherwise.  */
static tree
get_lhs_var (struct aop_joinpoint *jp)
{
  gimple stmt;
  tree lhs;

  aop_assert (jp->pc->kind == ATP_ASSIGN);

  stmt = gsi_stmt (*jp->gsi);
  aop_assert (gimple_has_lhs (stmt));
  lhs = gimple_get_lhs (stmt);

  if (TREE_CODE (lhs) == SSA_NAME)
    lhs = SSA_NAME_VAR (lhs);

  if (lhs != NULL)
    return lhs;
  else
    return NULL;
}

/**
 * Get the name of the variable being assigned to in an assignment
 * joinpoint.
 * \param jp An assignment joinpoint.  Assignment joinpoints are
 * obtained by joining on an aop_match_assignment_by_type() pointcut.
 * \return For a direct assignment to a variable, the name of that
 * variable, otherwise NULL.
 */
const char *
aop_capture_lhs_name (struct aop_joinpoint *jp)
{
  tree lhs;

  aop_assert (jp->pc->kind == ATP_ASSIGN);

  lhs = get_lhs_var (jp);
  if (lhs != NULL && DECL_P (lhs))
    {
      tree name = DECL_NAME (lhs);
      if (name != NULL)
	return IDENTIFIER_POINTER (name);
      else
	return NULL;
    }
  else
    {
      return NULL;
    }
}

/* Given an expression from the lhs of an assignment, return true
   unless it is a temporary variable created by the compiler.

   Generally, users will not be interested in instrumenting those temp
   variables that return false here.  */
static bool
lhs_is_real (tree lhs)
{
  if (TREE_CODE (lhs) == SSA_NAME)
    lhs = SSA_NAME_VAR (lhs);

  /* DECL_VAR nodes with DECL_ARTIFICIAL set represent temporary
     variables. */
  if (TREE_CODE (lhs) == VAR_DECL)
    return !DECL_ARTIFICIAL (lhs);
  else
    return true;
}

/* This gets called when weaving an advice function that evaluates an
   aop_capture_lhs_addr() dynval.  It does the actual work of
   inserting statements to get a reference to &lhs and then returns
   that reference. */
static tree
op_get_lhs_addr (struct aop_dynval *dv)
{
  gimple stmt;
  tree lhs;
  tree lhs_pointer;

  struct aop_joinpoint *jp = dv->jp;

  aop_assert (dv->kind == ADV_LHS_ADDR);
  aop_assert (jp->pc->kind == ATP_ASSIGN);

  stmt = jp->stmt;
  aop_assert (gimple_has_lhs (stmt));
  lhs = gimple_get_lhs (stmt);

  aop_assert (lhs_is_real (lhs));

  if (TREE_CODE (lhs) == SSA_NAME)
    lhs = SSA_NAME_VAR (lhs);

  /* GCC only marks a variable as addressable if the program actually
     takes its address (allowing certain optimizations on those
     variables that are not addressable).  In order to take the
     address ourselves, we must make sure that the variable is marked
     addressable. */
  mark_addressable (lhs);
  lhs_pointer = build1 (ADDR_EXPR, build_pointer_type (void_type_node),
			stabilize_reference (lhs));

  /* If mark_addressable() fails to make a variable addressable, it is
     impossible to address that variable. */
  aop_assert (is_gimple_address (lhs_pointer));

  return lhs_pointer;
}

/**
 * Get a dynval representing the address of the variable being
 * assigned to at an assignment joinpoint.
 * Note that this capture function will return NULL if the joinpoint
 * is an assignment to a temporary variable: temporary variables are
 * never addressable.  You only need to worry about non-addressable
 * temporary variables in a pointcut if you filter it with
 * aop_filter_include_temps().
 * \param jp An assignment joinpoint.  Assignment joinpoints are
 * obtained by joining on an aop_match_assignment_by_type() pointcut.
 * \return A dynval with (void *) type or NULL if the assignment
 * target is not addressable.
 */
struct aop_dynval *
aop_capture_lhs_addr (struct aop_joinpoint *jp)
{
  tree lhs;
  struct aop_dynval *dv;

  aop_assert (jp->pc->kind == ATP_ASSIGN);

  /* Is this a temporary? */
  aop_assert (gimple_has_lhs (jp->stmt));
  lhs = gimple_get_lhs (jp->stmt);
  if (!lhs_is_real (lhs))
    {
      /* We should only see temp vars if this is a pointcut that
	 includes them. */
      aop_assert (jp->pc->pc_assign.include_temp_vars);
      return NULL;
    }

  dv = ggc_alloc (sizeof (struct aop_dynval));
  dv->kind = ADV_LHS_ADDR;
  dv->type = aop_t_all_pointer ();
  dv->jp = jp;
  dv->get_dynval = op_get_lhs_addr;

  jp->pc->need_regimplification = true;

  return dv;
}

/* This gets called when weaving a dynval created with
   aop_capture_assigned_value().  It returns a tree that will evaluate
   to the assigned value. */
static tree
op_get_assigned_value (struct aop_dynval *dv)
{
  gimple stmt;

  struct aop_joinpoint *jp = dv->jp;

  aop_assert (dv->kind == ADV_ASSIGN_VAL);
  aop_assert (jp->pc->kind == ATP_ASSIGN);

  stmt = jp->stmt;
  aop_assert (gimple_code (stmt) == GIMPLE_ASSIGN);

  /* op_prepare_assign rekajiggers the assignment so we are guaranteed
     it is a simple a = b style of assignment.  That is, we don't have
     to worry if there is an operation or a function call on the right
     hand side.  The assigned value is a simple variable that we can
     return directly. */
  return gimple_op (stmt, 1);
}

/**
 * Get a dynval for the value being assigned at an assignment join
 * point.  The type of the dynval is determined by the the type
 * originally passed to aop_match_assignment_by_type().
 * \param jp An assignment joinpoint.  Assignment joinpoints are
 * obtained by joining on an aop_match_assignment_by_type() pointcut.
 * \return A dynval with type corresponding the the assignment
 * pointcut's type.
 */
struct aop_dynval *
aop_capture_assigned_value (struct aop_joinpoint *jp)
{
  struct aop_dynval *dv;

  aop_assert (jp->pc->kind == ATP_ASSIGN);

  dv = ggc_alloc (sizeof (struct aop_dynval));
  dv->kind = ADV_ASSIGN_VAL;
  dv->type = jp->pc->pc_assign.type;
  dv->jp = jp;
  dv->get_dynval = op_get_assigned_value;

  return dv;
}

static void
op_prepare_assign (struct aop_joinpoint *jp)
{
  tree real_lhs;
  tree tmp_lhs;
  gimple new_assign;

  aop_assert (jp->pc->kind == ATP_ASSIGN);

  /* We have a statement that something looks like:
     real_lhs = foo(...);

     We want to transform it to:
     tmp_lhs = foo(...);
     real_lhs = tmp_lhs;

     That way, any advice inserted before the assignment will still
     get called after the function call.

     Even when the assignment does not have a function call, splitting
     the assignment like this makes it much easier to capture the
     assigned value.  */
  real_lhs = gimple_get_lhs (jp->stmt);
  tmp_lhs = create_tmp_var (TREE_TYPE (real_lhs), "ia_tmp_lhs");

  /* Substitute tmp_lhs for real_lhs. */
  gimple_set_lhs (jp->stmt, tmp_lhs);

  /* Insert the new assignment. */
  new_assign = gimple_build_assign (real_lhs, tmp_lhs);
  gimple_set_block (new_assign, gimple_block (jp->stmt));

  gsi_insert_after (jp->gsi, new_assign, GSI_NEW_STMT);
  jp->stmt = new_assign;
}

static bool
stmt_matches_pointcut (struct aop_pointcut *pc, gimple stmt)
{
  if (gimple_has_lhs (stmt))
    {
      tree lhs = gimple_get_lhs(stmt);
      tree type = TREE_TYPE (gimple_get_lhs (stmt));

      /* We never want to match a call that is actually one we
	 inserted! */
      if (is_stmt_advice (stmt))
	return false;

      /* Temp variables with matching type only match the pointcut if
	 include_temp_vars is true. */
      return does_type_match (type, pc->pc_assign.type)
	&& (pc->pc_assign.include_temp_vars || lhs_is_real (lhs));
    }
  else
    {
      return false;
    }
}

static void join_on_bb_assign (basic_block bb, struct aop_pointcut *pc,
			       join_callback cb, void *callback_param)
{
  gimple_stmt_iterator gsi;
  expanded_location xloc;

  for (gsi = gsi_start_bb (bb) ; !gsi_end_p (gsi) ; gsi_next (&gsi))
    {
      gimple stmt = gsi_stmt (gsi);

      if (stmt_matches_pointcut (pc, stmt))
	{
	  struct aop_joinpoint jp;
	  xloc = expand_location (gimple_location (stmt));
	  init_joinpoint (&jp, &gsi, pc, stmt, xloc.line, xloc.file);
	  cb (&jp, callback_param);
	}
    }
}

static void
op_join_on_assign (struct aop_pointcut *pc, join_callback cb,
		   void *callback_param)
{
  basic_block bb;

  aop_assert (pc->kind == ATP_ASSIGN);

  FOR_EACH_BB(bb)
    {
      join_on_bb_assign (bb, pc, cb, callback_param);
    }
}

static void
op_join_on_copy_assign (struct aop_pointcut *pc, int copy, join_callback cb,
			void *callback_param)
{
  unsigned int pair_index;
  bb_pair *pair;

  aop_assert (is_current_func_duplicated ());
  aop_assert (pc->kind == ATP_ASSIGN);

  FOR_EACH_BB_PAIR (bb_pairs, pair_index, pair)
    {
      basic_block bb = (copy == 0) ? pair->old : pair->new;

      join_on_bb_assign (bb, pc, cb, callback_param);
    }
}

/**
 * Include compiler-created temporary variables in an assignment
 * pointcut.
 *
 * By default, assignment pointcuts do not include assignments to
 * temporary variables.  These assignments will usually only be useful
 * to users trying to debug the compiler with InterAsepct.
 * \param pc The assignment pointcut to filter.  Assignment pointcuts
 * are created with aop_match_assignment_by_type().
 */
void
aop_filter_include_temps (struct aop_pointcut *pc)
{
  aop_assert (pc->kind == ATP_ASSIGN);
  pc->pc_assign.include_temp_vars = true;
}

/**
 * Exclude compiler-created temporary variables from an assignment
 * pointcut.
 *
 * This function is provided to undo the effect of
 * aop_filter_include_temps(); by default, you do not need to call it.
 * \param pc The assignment pointcut to filter.  Assignment pointcuts
 * are created with aop_match_assignment_by_type().
 */
void
aop_filter_exclude_temps (struct aop_pointcut *pc)
{
  aop_assert (pc->kind == ATP_ASSIGN);
  pc->pc_assign.include_temp_vars = false;
}

/**
 * Return a pointcut that matches all assignments to a variable with
 * the given type.
 * \param type The type to filter assignments by.
 * \return The resulting pointcut.
 */
struct aop_pointcut *
aop_match_assignment_by_type (const struct aop_type *type)
{
  struct aop_pointcut *pc;

  pc = create_pointcut (ATP_ASSIGN);

  pc->join_on = op_join_on_assign;
  pc->join_on_copy = op_join_on_copy_assign;
  pc->prepare_for_weave = op_prepare_assign;

  pc->pc_assign.type = type;
  pc->pc_assign.include_temp_vars = false;

  return pc;
}

static bool
find_lexical_block (tree lhs, tree block, int *indexp)
{
  tree t;
  tree subblock;

  /* Search locally */
  if (BLOCK_VARS (block))
    for (t = BLOCK_VARS (block); t; t = TREE_CHAIN (t))
      if (lhs == t)
	return true;

  if (BLOCK_SUBBLOCKS (block))
    {
      for (subblock = BLOCK_SUBBLOCKS (block); subblock;
	   subblock = BLOCK_CHAIN (block))
	{
	  (*indexp)++;
	  bool found = false;
	  found = find_lexical_block (lhs, subblock, indexp);
	  if (found)
	    return true;
       }
    }

  if (BLOCK_CHAIN (block))
    {
      for (t = BLOCK_CHAIN (block); t; t = BLOCK_CHAIN(block))
	{
	  (*indexp)++;
	  bool found = false;
	  found = find_lexical_block (lhs, t, indexp);
	  if (found)
	    return true;
	}
    }
  return false;
}

/**
 * Return the scope of the variable that an assignment statement
 * assigns to (i.e., the left-hand side), which will be an integer
 * index or one of several \ref scope_val "special values".
 *
 * If the assignment is to a global or file-local variable, the return
 * value will simply be #AOP_GLOBAL_SCOPE or #AOP_FILE_SCOPE,
 * respectively.  The return value for a function-local variable is a
 * non-negative index that corresponds to a lexical block in the
 * function.  A single function may have multiple variables with the
 * same name, but those variables will have a different block index.
 *
 * Note that you can use the AOP_LOCAL_SCOPE() macro to check if a
 * return value indicates function-local scope.
 *
 * If the assignment assigns to something other than a variable, such
 * as a field in a struct or a dereferenced pointer, the return value
 * will be #AOP_MEMORY_SCOPE.
 * \param jp An assignment joinpoint.  Assignment joinpoints are
 * obtained by joining on an aop_match_assignment_by_type() pointcut.
 * \return For a direct assignment to a variable, the scope of that
 * variable (as a non-negative index or a \ref scope_val
 * "special value"), otherwise #AOP_MEMORY_SCOPE.
 */
int
aop_capture_lhs_var_scope (struct aop_joinpoint *jp)
{
  tree lhs;
  tree function_block;
  lhs = get_lhs_var (jp);

  if (lhs != NULL_TREE)
    {
      if (DECL_FILE_SCOPE_P (lhs))
	{
	  if (!TREE_PUBLIC (lhs))
	    {
	      return AOP_FILE_SCOPE;
	    }
	  else
	    {
	      return AOP_GLOBAL_SCOPE;
	    }
	}
      else if (TREE_CODE (DECL_CONTEXT (lhs)) == FUNCTION_DECL)
	{
	  bool retval;
	  int var_index = 0;

	  if (TREE_CODE (lhs) == PARM_DECL)
	    {
	      /* Function parameters get block index 0.*/
	      var_index = 0;
	    }
	  else
	    {
	      function_block = DECL_INITIAL (current_function_decl);
	      retval = find_lexical_block (lhs, function_block, &var_index);
	      aop_assert (retval == true);
	    }

	  return var_index;
	}
      else
	{
	  return AOP_MEMORY_SCOPE;
	}
    }
  else
    {
      return AOP_MEMORY_SCOPE;
    }
}

/* Close Doxygen defgroup block. */
/**
 * \}
 */
