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
#include <basic-block.h>
#include <gimple.h>
#include <tree.h>
#include <tree-flow.h>
#include <tree-pass.h>
#include <toplev.h>

#include "aop.h"
#include "aop-duplicate.h"

/**
 * \cond HIDDEN_SYMBOLS
 */
typedef struct label_pair {
  tree old;
  tree new;
} label_pair;
/**
 * \endcond
 */

#define INITIAL_PAIRS 10

DEF_VEC_O(label_pair);
DEF_VEC_ALLOC_O(label_pair, heap);

#define FOR_EACH_LABEL_PAIR(pairs, index, pair)	\
  for ((index) = 0; VEC_iterate (label_pair, pairs, index, pair); (index)++)

/* The last function duplicated.  Used to make sure we never try to
   access duplicated basic blocks from an older function. */
static struct function *duplicated_function = NULL;

/* The distributor basic block for the current function (assuming that
   the current function has been duplicated). */
basic_block distributor_bb;

/* The duplicated basic blocks for the current function (assuming that
   the current function has been duplicated). */
VEC(bb_pair, gc) *bb_pairs;

bool
is_current_func_duplicated ()
{
  return (cfun == duplicated_function);
}

static basic_block 
new_bb_for_old(VEC(bb_pair, gc) *bb_pairs, basic_block old)
{
  unsigned int pair_index;
  bb_pair *pair;

  FOR_EACH_BB_PAIR(bb_pairs, pair_index, pair)
    {
      if (pair->old == old)
	return pair->new;
    }

  return NULL;
}

static tree 
label_new_for_old(VEC(label_pair, heap) *label_pairs, tree old)
{
  unsigned int pair_index;
  label_pair *pair;

  FOR_EACH_LABEL_PAIR(label_pairs, pair_index, pair)
    if (pair->old == old)
      return pair->new;

  return NULL;
}

static tree 
fix_labels(tree *label, int *walk_subtrees, void *arg)
{
  struct walk_stmt_info *wi = (struct walk_stmt_info*) arg;
	
  if (TREE_CODE(*label) == LABEL_DECL)
    {
      tree new_label;
      VEC(label_pair, heap) *label_pairs;
	
      label_pairs = (VEC(label_pair, heap) *)(wi->info);
      new_label = label_new_for_old(label_pairs, *label);

      aop_assert (new_label != NULL_TREE);
      *label = new_label;
    }

  return NULL_TREE;
}

/* This function makes another copy of function body (blocks except entry
   and exit along with their topology). This function also adds a distributor
   block to direct to 2 bodies. The distributor block is like the following:

   1  int tmpvar;
   2  tmpvar = call(); 
   3  if (tmpvar != 0) 
   4    goto <NEW_BODY> 
   5  else 
   6    goto <OLD_BODY>;

   If call is NULL, line 2 is replaced by tmpvar = 0. Then it is the user's 
   duty to further populate the distributor block.
 */
void
duplicate_function_body (const char *tmpvar_name, gimple call)
{
  VEC(label_pair, heap) *label_pairs;

  unsigned int pair_index;
  bb_pair *pair_p;
		
  basic_block cur_bb;
  basic_block last_bb;

  source_location orig_loc;

  /* Remember the source location in the original first block. */
    {
      basic_block bb;
      gimple stmt;

      bb = ENTRY_BLOCK_PTR_FOR_FUNCTION (cfun);
      stmt = first_stmt (bb->next_bb);
      if (stmt != NULL)
	orig_loc = gimple_location (first_stmt (bb->next_bb));
      else
	orig_loc = 0;
    }

  bb_pairs = VEC_alloc (bb_pair, gc, INITIAL_PAIRS);
  label_pairs = VEC_alloc (label_pair, heap, INITIAL_PAIRS);

  /* Pass 1 - Collect a list of all the blocks that need duplication. */
  FOR_EACH_BB (cur_bb)
    {
      if (can_duplicate_block_p (cur_bb))
	{
	  bb_pair bbpair;
	  bbpair.old = cur_bb;
	  bbpair.new = NULL;
	  VEC_safe_push (bb_pair, gc, bb_pairs, &bbpair);
	}
      else
	{
	  /* As of writing, only the entry and exit blocks cannot be
	     duplicated. */
	  aop_assert (cur_bb == EXIT_BLOCK_PTR || cur_bb == ENTRY_BLOCK_PTR);
	}
    }

  /* Pass 2 - Duplicate the blocks in the list.  Refer to copy_bbs()
     in cfglayout.c. */
  initialize_original_copy_tables ();
  last_bb = EXIT_BLOCK_PTR->prev_bb;

  FOR_EACH_BB_PAIR (bb_pairs, pair_index, pair_p)
    {
      gimple old_first_stmt;

      pair_p->new = duplicate_block (pair_p->old, NULL, last_bb);
      last_bb = pair_p->new;

      old_first_stmt = first_stmt (pair_p->old);

      /* duplicate_block() does not copy initial labels.  Calling
	 gimple_block_label() on the duplicated block will create the
	 label for us. */
      if (old_first_stmt != NULL
	  && gimple_code (old_first_stmt) == GIMPLE_LABEL)
	{
	  label_pair lblpair;
	  lblpair.old = gimple_block_label (pair_p->old);
	  lblpair.new = gimple_block_label (pair_p->new);
	  DECL_SOURCE_LOCATION (lblpair.new) = DECL_SOURCE_LOCATION (lblpair.old);
	  VEC_safe_push (label_pair, heap, label_pairs, &lblpair);
	}
    }

  /* Pass 3 - Fix all edges in the duplicate blocks and correct label
     references. */
  FOR_EACH_BB_PAIR (bb_pairs, pair_index, pair_p)
    {
      edge_iterator ei;
      edge e;
      gimple_stmt_iterator gsi;
      struct walk_stmt_info wi;

      /* Skip over initial label statements, which we want to leave
	 alone.  */
      gsi = gsi_start_bb (pair_p->new);
      while (!gsi_end_p (gsi) && gimple_code (gsi_stmt (gsi)) == GIMPLE_LABEL)
	{
	  gsi_next (&gsi);
	}

      for (; !gsi_end_p (gsi); gsi_next (&gsi))
	{
	  memset (&wi, 0, sizeof (wi));
	  wi.info = (struct walk_stmt_info *)label_pairs;
	  walk_gimple_stmt (&gsi, NULL, fix_labels, &wi);
	}

      FOR_EACH_EDGE (e, ei, pair_p->new->succs)
	{
	  basic_block succ_bb = e->dest;

	  if (can_duplicate_block_p(succ_bb))
	    {
	      basic_block new_bb;
	      edge redirected_edge;

	      new_bb = new_bb_for_old (bb_pairs, succ_bb);
	      aop_assert (new_bb != NULL);

	      redirected_edge = redirect_edge_and_branch (e, new_bb);
	      aop_assert (redirected_edge != NULL);
	    }
	}
    }

  /* Pass 4 - Create the distributor block and bind it up */
    {	
      edge e;

      basic_block old_first_bb;
      basic_block new_first_bb;

      tree tmpvar;

      gimple cond;
      gimple_stmt_iterator gsi;

      e = single_succ_edge (ENTRY_BLOCK_PTR);

      old_first_bb = e->dest;
      new_first_bb = new_bb_for_old (bb_pairs, old_first_bb);
      aop_assert (new_first_bb != NULL);

      distributor_bb = split_edge(e);

      tmpvar = create_tmp_var(integer_type_node, tmpvar_name);
      /*add_referenced_var(tmpvar);*/
		
      gsi = gsi_start_bb (distributor_bb);
      if (call == NULL)
	{
	  /* insert: tmpvar = 0; */	
	  gimple assign;
	  assign =
	    gimple_build_assign_with_ops (NOP_EXPR, tmpvar,
					  build_int_cst (integer_type_node, 0),
					  NULL_TREE);

	  /* TODO: Do we need this? */
	  if (gimple_in_ssa_p (cfun))
	    {
	      tmpvar = make_ssa_name (tmpvar, assign);
	      gimple_assign_set_lhs (assign, tmpvar);
	    }
	  gsi_insert_before (&gsi, assign, GSI_SAME_STMT);
	}
      else
	{
	  /* insert: tmpvar = distributor_fn(...) */
	  aop_assert (gimple_code (call) == GIMPLE_CALL);

	  /* TODO: Do we need this? */
	  if (gimple_in_ssa_p (cfun))
	    {
	      tmpvar = make_ssa_name (tmpvar, call);
	    }
	  gimple_call_set_lhs (call, tmpvar);
	  gsi_insert_before (&gsi, call, GSI_SAME_STMT);
	}	

      /* insert: if (tmpvar) goto <new_label> else goto <old_label> */
      cond = gimple_build_cond (NE_EXPR, tmpvar, 
				build_int_cst (integer_type_node, 0),
				NULL_TREE, NULL_TREE);
      gsi_insert_before (&gsi, cond, GSI_SAME_STMT);

      remove_edge(single_succ_edge(distributor_bb));
      make_edge(distributor_bb, old_first_bb, EDGE_FALSE_VALUE);
      make_edge(distributor_bb, new_first_bb, EDGE_TRUE_VALUE);
    }

  /* Make the distributor block have the same source location as the
     original entry block.  The function entry pointcut relies on this
     to determine line number/filename for its join point. */
  gimple_set_location (first_stmt (distributor_bb), orig_loc);
	
  free_original_copy_tables();
  VEC_free (label_pair, heap, label_pairs);

  /* Make a note that this function was duplicated. */
  duplicated_function = cfun;
}
