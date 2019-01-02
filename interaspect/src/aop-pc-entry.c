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
#include <string.h>
#include <tree-flow.h>
#include <toplev.h>

#include "aop.h"
#include "aop-duplicate.h"
#include "aop-dynval.h"
#include "aop-pointcut.h"
#include "aop-type.h"

/**
 * \defgroup entry_pc Function Entry Pointcut Functions
 * \{
 */

static expanded_location
get_function_entry_xloc()
{
  basic_block bb;
  expanded_location xloc;
  gimple stmt;

  /* TODO: How do we figure out the line number and file number when
     their is no first_stmt? */
  bb = ENTRY_BLOCK_PTR_FOR_FUNCTION (cfun);
  stmt = first_stmt (bb->next_bb);
  if (stmt != NULL)
    {
      xloc = expand_location (gimple_location (stmt));
    }
  else
    {
      xloc.line = 0;
      xloc.file = NULL;
    }

  return xloc;
}

/* Function have only one entry.  Return true if that entry matches
   the pointcut's filtering criteria. */
static bool
is_function_entry_matching (struct aop_pointcut *pc)
{
  /* Filter by name. */
  if(pc->pc_entry.function_name == NULL)
    {
      /* No name filter in place. */
      return true;
    }
  else
    {
      const char *func_name =
	IDENTIFIER_POINTER (DECL_NAME (current_function_decl));
      return (strcmp (func_name, pc->pc_entry.function_name) == 0);
    }
}

/* We represent the function's entry as a control-flow graph edge.
   That edge is the only thing necessary to join on the pointcut's one
   join point. */
static void
join_on_entry_edge (struct aop_pointcut *pc, edge in_edge, join_callback cb,
		    void *callback_param)
{
  struct aop_joinpoint jp;
  gimple_stmt_iterator gsi;
  expanded_location xloc;

  /* Note that the gimple iterator gets initialized by
     op_prepare_entry when it is time to insert advice.  (We poison it
     just to make sure that initialization is getting called.)*/
  memset (&gsi, 0xfa, sizeof (gimple_stmt_iterator));

  xloc = get_function_entry_xloc ();
  init_joinpoint (&jp, &gsi, pc, NULL, xloc.line, xloc.file);
  jp.in_edge = in_edge;
  cb (&jp, callback_param);
}

static void
op_join_on_function_entry (struct aop_pointcut *pc, join_callback cb,
			   void *callback_param)
{
  edge in_edge;

  aop_assert (pc->kind == ATP_ENTRY);

  if (!is_function_entry_matching (pc))
    return;

  /* Get the function's actual entry point: the edge coming out of the
     entry block. */  
  in_edge = single_succ_edge (ENTRY_BLOCK_PTR_FOR_FUNCTION (cfun));
  join_on_entry_edge (pc, in_edge, cb, callback_param);
}

static void 
op_join_on_copy_function_entry (struct aop_pointcut *pc, int copy,
				join_callback cb, void *callback_param)
{
  int last_copy;
  edge in_edge;

  aop_assert (pc->kind == ATP_ENTRY);
  aop_assert (is_current_func_duplicated ());

  if (!is_function_entry_matching (pc))
    return;

  /* We wish to join on the entry to the duplicated function body.
     This will be one of the edges coming out of the distributor
     block. */
  last_copy = EDGE_COUNT (distributor_bb->succs) - 1;
  copy = (copy <= last_copy) ? copy : last_copy;
  in_edge = EDGE_SUCC (distributor_bb, copy);

  join_on_entry_edge (pc, in_edge, cb, callback_param);
}

/* There is no GIMPLE statement that is suitable as an anchor point
   for inserting advice at the beginning of a function.

   The first GIMPLE statement in the function is no good because it
   may be a label statement at the beginning of a basic block.
   Inserting a statement before a label would cause a label in the
   middle of a basic block, which is a no-no.

   We use the gsi_insert_on_edge_immediate() function to add a NOP
   statement that is definitely legal.  It serves as an anchor point
   for inserting before and after advice! */
static void
op_prepare_entry (struct aop_joinpoint *jp)
{
  gimple nop;
  basic_block bb;

  aop_assert (jp->pc->kind = ATP_ENTRY);
  aop_assert (jp->in_edge != NULL);

  nop = gimple_build_nop ();
  gsi_insert_on_edge_immediate (jp->in_edge, nop);

  /* Find an iterator pointing to the nop. */
  FOR_EACH_BB (bb)
    {
      for (*jp->gsi = gsi_start_bb (bb);
	   !gsi_end_p (*jp->gsi);
	   gsi_next (jp->gsi))
	{
	  if (gsi_stmt (*jp->gsi) == nop)
	    return;  /* Found! */
	}
    }

  /* We failed to find the statement we just inserted! */
  aop_assert (0);
}

/**
 * Get a pointcut with the entry to the current function.  Generally a
 * pointcut is a set of join points, but because a given function has
 * only one entry point, the pointcut returned by this function will
 * have exactly one join point.
 * \return The resulting pointcut.
 */
struct aop_pointcut *
aop_match_function_entry ()
{
  struct aop_pointcut *pc;
  pc = create_pointcut (ATP_ENTRY);

  pc->join_on = op_join_on_function_entry;
  pc->join_on_copy = op_join_on_copy_function_entry;
  pc->prepare_for_weave = op_prepare_entry;

  pc->pc_entry.function_name = NULL;
  pc->in_param_list_head = NULL;
  return pc;
}

/**
 * Filter a function entry pointcut so it will contain the current
 * function's entry join point only if the current function's name
 * matches the specified name.  This filter is a convenient way to
 * target the entry point of a specific function for instrumentation.
 * \param pc The function entry pointcut to filter.  Function entry
 * pointcuts are created with aop_match_function_entry().
 * \param name The name to filter by.
 */
void aop_filter_entry_by_name(struct aop_pointcut *pc, const char *name)
{
  pc->pc_entry.function_name = name;
}


/* Close Doxygen defgroup block. */
/**
 * \}
 */
