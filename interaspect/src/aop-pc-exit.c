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
#include <toplev.h>
#include <diagnostic.h>
#include <gimple.h>

#include "aop.h"
#include "aop-duplicate.h"
#include "aop-dynval.h"
#include "aop-pointcut.h"
#include "aop-type.h"

/**
 * \defgroup exit_pc Function Exit Pointcut Functions
 * \{
 */

static void
join_on_bb_function_exit (basic_block bb, struct aop_pointcut *pc,
			  join_callback cb, void *callback_param)
{
  gimple_stmt_iterator gsi;
  expanded_location xloc;

  for (gsi = gsi_start_bb (bb) ; !gsi_end_p (gsi) ; gsi_next (&gsi)) 
    {
      gimple stmt = gsi_stmt (gsi);

      if (gimple_code (stmt) == GIMPLE_RETURN)
	{
	  struct aop_joinpoint jp;
	  xloc = expand_location (gimple_location (stmt)); 
	  init_joinpoint (&jp, &gsi, pc, stmt, xloc.line, xloc.file);
	  cb (&jp, callback_param);

	  /* It's possible that gsi is no longer a valid iterator if
	     the callback inserted advice.  Anyway, that's fine
	     because there shouldn't be any statements in the basic
	     block after the return!  On to the next basic block. */
	  break;
	}
    }
}

/* Return true if the current function's return type matches the
   specified type. */
static bool
return_type_matches (const struct aop_type *type)
{
  tree cfun_type;
  tree cfun_return_type;

  cfun_type = TREE_TYPE (current_function_decl);

  aop_assert (cfun_type != NULL && TREE_CODE (cfun_type) == FUNCTION_TYPE);
  cfun_return_type = TREE_TYPE (cfun_type);

  return does_type_match (cfun_return_type, type);
}

static void
op_join_on_function_exit (struct aop_pointcut *pc, join_callback cb, 
			  void *callback_param)
{
  basic_block bb;
  const struct aop_type *return_type_filter;

  aop_assert (pc->kind == ATP_EXIT);

  /* Filter by return type? */
  return_type_filter = pc->pc_exit.return_type;
  if (return_type_filter != NULL && !return_type_matches(return_type_filter))
    return;  /* Treat as an empty pointcut. */
  
  FOR_EACH_BB(bb)
    {
      join_on_bb_function_exit (bb, pc, cb, callback_param);
    } 
}

static void
op_join_on_copy_function_exit (struct aop_pointcut *pc, int copy,
			       join_callback cb, void *callback_param)
{
  unsigned int pair_index;
  bb_pair *pair;
  const struct aop_type *return_type_filter;

  aop_assert (pc->kind == ATP_EXIT);
  aop_assert (is_current_func_duplicated ());
  
  /* Filter by return type? */
  return_type_filter = pc->pc_exit.return_type;
  if (return_type_filter != NULL && !return_type_matches(return_type_filter))
    return;  /* Treat as an empty pointcut. */
  
  FOR_EACH_BB_PAIR (bb_pairs, pair_index, pair)
    {
      basic_block bb = (copy == 0) ? pair->old : pair->new;

      join_on_bb_function_exit (bb, pc, cb, callback_param);
    } 
}

/* Prepare for an insert at a function entry join point.

   Attempting to insert an advice call _after_ a return statement
   doesn't make any sense and will fail.  GIMPLE does not allow any
   statements in a basic block after a return statement (sensibly).

   We create a NOP statement before the return statement that serves
   as an anchor for inserting advice.  Any advice calls inserted with
   AOP_INSERT_AFTER will still execute before the return but will
   execute after any calls inserted with AOP_INSERT_BEFORE (no matter
   the order in which they were inserted). */
static void
op_prepare_exit (struct aop_joinpoint *jp)
{
  gimple nop;

  aop_assert (jp->pc->kind == ATP_EXIT);

  nop = gimple_build_nop ();
  gsi_insert_before (jp->gsi, nop, GSI_NEW_STMT);
}

/**
 * Get a pointcut matching exit points in the current function, which
 * include explicit return statements and the implicit exit at the end
 * of the function.
 * \return The resulting pointcut.
 */
struct aop_pointcut *
aop_match_function_exit ()
{
  struct aop_pointcut *pc;  
  pc = create_pointcut (ATP_EXIT);

  pc->join_on = op_join_on_function_exit;
  pc->join_on_copy = op_join_on_copy_function_exit;
  pc->prepare_for_weave = op_prepare_exit;

  pc->pc_exit.return_type = NULL;

  return pc;
}

/**
 * Filter a function exit pointcut by the function's return type.
 * This is an all-or-nothing filter: because all the function's return
 * statements will have the same type, either all of the exit join
 * points will be filtered out or none will.
 * 
 * Note that you must filter a pointcut by return type in order to
 * call aop_capture_exit_return_value() on any of its join points.
 *
 * \param pc The function exit pointcut to filter.  Function exit
 * pointcuts are created with aop_match_function_exit().
 * \param type The return type to filter by.
 */
void
aop_filter_exit_by_return_type (struct aop_pointcut *pc,
				const struct aop_type *type)
{
  if (pc->kind != ATP_EXIT)
    fatal_error ("(InterAspect) Attempt to filter by return type on"
		 " unsupported join point.");

  pc->pc_exit.return_type = type;
}

static tree
op_get_exit_return_value (struct aop_dynval *dv)
{
  gimple stmt;
  tree return_value;

  struct aop_joinpoint *jp = dv->jp;
  stmt = jp->stmt;

  aop_assert (gimple_code (stmt) == GIMPLE_RETURN);

  if (gimple_return_retval (stmt) == NULL)
    fatal_error ("(InterAspect) Attempt to capture return value from function"
		 " that does not always return a value.");

  return_value = stabilize_reference (gimple_return_retval (stmt));
  return return_value;
}

/**
 * Get a dynval representing the value returned at a function exit
 * join point.  Note that you must filter with
 * aop_filter_exit_by_return_type() in order to capture the return
 * value using aop_capture_exit_return_value().
 * \param jp A function exit join point.  Function exit join points
 * are obtained by joining on an aop_match_function_exit() pointcut.
 * \return A dynval with its type determined by
 * aop_filter_exit_by_return_type().
 */
struct aop_dynval *
aop_capture_exit_return_value (struct aop_joinpoint *jp)
{
  struct aop_pointcut *pc;
  struct aop_dynval *dv;

  pc = jp->pc;
  if (pc->kind != ATP_EXIT)
    fatal_error ("(InterAspect) Attempt to capture return value from an"
		 " unsupported join point.");

  if (pc->pc_exit.return_type == NULL)
    fatal_error ("(InterAspect) Attempt to capture return value without"
		 " specifying type.");

  dv = ggc_alloc (sizeof (struct aop_dynval));
  dv->kind = ADV_EXIT_RETVAL;
  dv->type = pc->pc_exit.return_type;
  dv->jp = jp;
  dv->get_dynval = op_get_exit_return_value;
  return dv;
}

/**
 * Get a dynval representing the value returned at a function exit
 * join point if the function's return value matches the specified
 * type.  This function makes it possible to capture the return value
 * from an exit join point even if you have not filtered it with
 * aop_filter_exit_by_return_type().  However, it returns NULL if the
 * return value does not match the specified type.
 * \param jp A function exit join point.  Function exit join points
 * are obtained by joining on an aop_match_function_exit() pointcut.
 * \param type This function verifies that the return value's type
 * matches the specified type.
 * \return A dynval with its type determined by the specified type or
 * NULL if the return value does not match the specified type.
 */
struct aop_dynval *
aop_capture_exit_return_value_by_type (struct aop_joinpoint *jp,
				       const struct aop_type *type)
{
  struct aop_pointcut *pc;
  struct aop_dynval *dv;

  pc = jp->pc;
  if (pc->kind != ATP_EXIT)
    fatal_error ("(InterAspect) Attempt to capture return value from an"
		 " unsupported join point.");

  /* Does this join points match the specified type? */
  if (!return_type_matches (type))
    return NULL;

  dv = ggc_alloc (sizeof (struct aop_dynval));
  dv->kind = ADV_EXIT_RETVAL;
  dv->type = type;
  dv->jp = jp;
  dv->get_dynval = op_get_exit_return_value;
  return dv;
}

/* Close Doxygen defgroup block. */
/**
 * \}
 */
