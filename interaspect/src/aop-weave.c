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
#include <stdarg.h>

#include <config.h>
#include <system.h>
#include <coretypes.h>
#include <tm.h>
#include <tree.h>
#include <c-common.h>
#include <gimple.h>
#include <tree-flow.h>

#include <toplev.h>

/* Defining GENERATOR_FILE prevents real.h from also including the
   gmp, mpfr and mpc headers, which we do not need. */
#define GENERATOR_FILE
#include <real.h>
#undef GENERATOR_FILE

#include "aop.h"
#include "aop-duplicate.h"
#include "aop-dynval.h"
#include "aop-header.h"
#include "aop-pointcut.h"
#include "aop-type.h"

#define POISON ((void *)-1)

/* This table holds every advice statement that InterAspect inserts so
   that we can avoid matching any of them during a join operation. */
static htab_t advice_stmts_table = POISON;

/* Clear out the advice_stmts table.  It is important to call this
   once for each compiled function (before any other InterAspect
   passes run) because the statements in the advice table are no
   longer meaningful once a function is done compiling. */
void
clear_advice_table ()
{
  advice_stmts_table = NULL;
}

/* Store a gimple statement in the advice table so that we remember it
   is an advice statement! 
   TODO: Also store the statement's birthday so we can send a card. */
static void
remember_advice (gimple stmt)
{
  gimple *slot;

  /* Create the table if it is empty. */
  aop_assert (advice_stmts_table != POISON);
  if (advice_stmts_table == NULL)
    advice_stmts_table =
      htab_create_ggc (10, htab_hash_pointer, htab_eq_pointer, NULL);

  slot = (gimple *)htab_find_slot (advice_stmts_table, stmt, INSERT);
  *slot = stmt;
}

/* True if a GIMPLE statement was inserted by InterAspect as an advice
   function. */
bool
is_stmt_advice (gimple stmt)
{
  gimple *slot;

  /* If the table is empty, then stmt can't possibly be in it! */
  aop_assert (advice_stmts_table != POISON);
  if (advice_stmts_table == NULL)
    return false;

  slot = (gimple *)htab_find_slot (advice_stmts_table, stmt, NO_INSERT);
  aop_assert (slot == NULL || *slot == stmt);

  return (slot != NULL);
}

/* This table holds the decl for every static inline we enocunter.  We
   want to remember these decls in case they get inserted as advice,
   in which case we need the original decl so that GCC can perform the
   inlining. 

   NB: At allocation, we store this on the heap (i.e., not in garbage
   collected memory) because it doesn't get freed then reallocated
   between passes.  */
static htab_t static_inline_decls = NULL;

static hashval_t
hash_decl_by_name (const void *entry)
{
  tree decl = (tree)entry;
  const char *name = IDENTIFIER_POINTER (DECL_NAME (decl));

  return htab_hash_string (name);
}

static int
hash_decl_name_eq (const void *entry1, const void *entry2)
{
  tree decl1 = (tree)entry1;
  tree decl2 = (tree)entry2;

  const char *name1 = IDENTIFIER_POINTER (DECL_NAME (decl1));
  const char *name2 = IDENTIFIER_POINTER (DECL_NAME (decl2));

  return (strcmp (name1, name2) == 0);
}

void
init_static_inline_table ()
{
  static_inline_decls = htab_create (10, hash_decl_by_name, hash_decl_name_eq, NULL);
}

void
free_static_inline_table ()
{
  htab_delete (static_inline_decls);
}

void
remember_function_decl(tree fndecl)
{
  /* Check if this is a static inline function. */
  if (DECL_DECLARED_INLINE_P(fndecl) && !TREE_PUBLIC(fndecl))
    {
      tree *slot;

      slot = (tree *)htab_find_slot (static_inline_decls, fndecl, INSERT);
      *slot = fndecl;
    }
}

/* Throw a fatal error if a dynval is not allowed in a before-advice
   call. */
static void
verify_legal_in_before_advice (struct aop_dynval *dv)
{
  switch (dv->kind)
    {
    case ADV_FUN_RETVAL:
      fatal_error("(InterAspect) Attempt to capture return value in before"
		  " advice (see aop_capture_call_return_value()"
		  " documentation).");
    default:
      break;  /* Permitted. */
    }
}

static tree
build_string_ptr (const char *string)
{
  size_t string_len;
  tree string_tree;

  tree string_ref;
  tree ret;

  string_len = strlen (string) + 1;

  string_tree = build_string (string_len, string);
  TREE_TYPE (string_tree) =
    build_array_type (char_type_node, build_index_type (size_int (string_len)));

  string_ref = build4(ARRAY_REF,
		      char_type_node,
		      string_tree,
		      build_int_cst (TYPE_DOMAIN (TREE_TYPE (string_tree)), 0),
		      NULL,
		      NULL);

  ret = build1(ADDR_EXPR,
	       build_pointer_type (TREE_TYPE (string_ref)),
	       string_ref);

  return ret;
}

/* Create a temporary variable and assign the given value to that
   variable with a cast.  Insert the assignment before the join point
   and return the temporary value. */
static tree
insert_cast (tree val, tree cast_type, VEC(gimple, heap) *pre_stmts)
{
  tree tmp;
  tree cast;
  gimple cast_assign;

  tmp = create_tmp_var (cast_type, "ia_cast");
  cast = build1 (CONVERT_EXPR, cast_type, val);

  cast_assign = gimple_build_assign (tmp, cast);
  VEC_safe_push (gimple, heap, pre_stmts, cast_assign);

  return tmp;
}

/* Whenver InterAspect matches an "all signed" or "all unsigned"
   value, it needs to cast it up to a long long before passing it. */
static tree
cast_to_all_integer (tree val, VEC(gimple, heap) *pre_stmts)
{
  tree gcc_type;
  HOST_WIDE_INT size;

  gcc_type = TREE_TYPE (val);
  aop_assert (TREE_CODE (gcc_type) == INTEGER_TYPE);

  size = int_size_in_bytes (gcc_type);
  aop_assert (size > 0 && size <= 8);

  if (size != 8)
    {
      tree cast_type = TYPE_UNSIGNED (gcc_type) ? long_long_unsigned_type_node
	: long_long_integer_type_node;

      return insert_cast (val, cast_type, pre_stmts);
    }
  else
    {
      /* No cast necessary. */
      return val;
    }
}

/* Similar to cast_to_all_integer, above. */
static tree
cast_to_all_fp (tree val, VEC(gimple, heap) *pre_stmts)
{
  tree gcc_type;
  HOST_WIDE_INT size;

  gcc_type = TREE_TYPE (val);
  aop_assert (TREE_CODE (gcc_type) == REAL_TYPE);

  size = int_size_in_bytes (gcc_type);
  aop_assert (size > 0 && size <= 8);

  if (size != 8)
    {
      return insert_cast (val, double_type_node, pre_stmts);
    }
  else
    {
      /* No cast necessary. */
      return val;
    }
}

/* Building a dynval creates a tree node but may also generate GIMPLE
   statements that are necessary setup for the tree node.  Those
   statements are output to the pre_stmts list. */
static tree
build_dynval (struct aop_dynval *dv, VEC(gimple, heap) *pre_stmts)
{
  tree val;

  val = dv->get_dynval (dv);

  if (is_all_integer_type (dv->type))
    val = cast_to_all_integer (val, pre_stmts);
  else if (is_all_fp_type (dv->type))
    val = cast_to_all_fp (val, pre_stmts);

  return val;
}

/* Weaving functions all take varags parameters that represent the
   arguments to pass to the new advice function.  This function
   iterates through those arguments and creates GIMPLE tree nodes for
   each of them. 

   The new nodes get stored in arglist.  GIMPLE statements that must
   be inserted before the call are put in the pre_stmts list. */
static gimple
build_gcc_call (const char *func_name, tree return_type, tree block,
		enum aop_insert_location location, VEC(gimple, heap) *pre_stmts,
		va_list argp)
{
  enum aop_argkind kind;
  VEC(tree, heap) *arg_list;
  tree argtype_list;

  tree func_type;
  tree func_decl;
  tree inline_decl;
  gimple func_call;

  arg_list = VEC_alloc (tree, heap, 2);
  argtype_list = NULL_TREE;

  while ((kind = va_arg (argp, enum aop_argkind)) != AOP_TERM_ARG)
    {
      tree new_arg;
      const char *str_cst;
      int int_cst;
      double float_cst;
      char float_buf[25];
      REAL_VALUE_TYPE r;
      void *ptr_cst;
      struct aop_dynval *dv;

      switch (kind)
	{
	case ATA_STR_CST:
	  str_cst = va_arg (argp, const char *);
	  new_arg = build_string_ptr (str_cst);
	  VEC_safe_push (tree, heap, arg_list, new_arg);
	  break;
	case ATA_INT_CST:
	  int_cst = va_arg (argp, int);
	  /* TODO: This assumes that int is 32-bit on all systems.
	     There are some systems where this isn't true (16-bit
	     machines, perhaps?), but I'm not sure how to get an
	     explicit 32-bit integer type node. */
	  new_arg = build_int_cst (integer_type_node, int_cst);
	  VEC_safe_push (tree, heap, arg_list, new_arg);
	  break;
	case ATA_DOUBLE_CST:
	  float_cst = va_arg (argp, double);
	  snprintf (float_buf, sizeof (float_buf), "%A", float_cst);
	  real_from_string (&r, (const char *)float_buf);
	  new_arg = build_real (double_type_node, r);
	  VEC_safe_push (tree, heap, arg_list, new_arg);
	  break;
	case ATA_VOIDP_CST:
	  ptr_cst = va_arg (argp, void *);
	  new_arg = build_int_cst (build_pointer_type (void_type_node),
				   (HOST_WIDE_INT)ptr_cst);
	  VEC_safe_push (tree, heap, arg_list, new_arg);
	  break;
	case ATA_DYNVAL:
	  dv = va_arg (argp, struct aop_dynval *);

	  /* Some dynvals aren't permitted in before advice. */
	  if (location == AOP_INSERT_BEFORE)
	    verify_legal_in_before_advice (dv);

	  new_arg = build_dynval (dv, pre_stmts);
	  VEC_safe_push (tree, heap, arg_list, new_arg);
	  break;
	default:
	  aop_assert (0);
	}

      argtype_list = tree_cons (NULL_TREE, TREE_TYPE (new_arg), argtype_list);
    }

  /* Using tree_cons builds the list backwards!  Un-backwards it. */
  argtype_list = nreverse (argtype_list);

  /* The last element of an argument list should always be
     void_list_node, to signify that it is not a varargs argument
     list. */
  argtype_list = chainon (argtype_list, void_list_node);

  func_type = build_function_type (return_type, argtype_list);
  func_decl = build_fn_decl (func_name, func_type);

  /* Wait, have we encountered a static inline decl with this same
     name? */
  inline_decl = htab_find(static_inline_decls, func_decl);
  if (inline_decl != NULL)
    func_decl = inline_decl;

  func_call = gimple_build_call_vec (func_decl, arg_list);

  /* GCC caveat, if there's a chance this call will be inlined, make
     sure it has a block. */
  if (func_decl == inline_decl)
    gimple_set_block(func_call, block);

  VEC_free (tree, heap, arg_list);

  remember_advice (func_call);

  return func_call;
}

/* This is the default insert_before() operation for aop_pointcut
   objects.  It just inserts a gimple statement before the iterator in
   the aop_joinpoint object.  This function holds to the requirement
   that inserting multiple gimple statements at the joinpoint will
   result in those statements appearing in the order they were
   added. */
void
op_default_insert_before (struct aop_joinpoint *jp, gimple stmt)
{
  gsi_insert_before (jp->gsi, stmt, GSI_SAME_STMT);
}

/* This is the default insert_after() operation for aop_pointcut
   objects.  It just inserts a gimple statement before the iterator in
   the aop_joinpoint object.  This function holds to the requirement
   that inserting multiple gimple statements at the joinpoint will
   result in those statements appearing in the order they were
   added. */
void
op_default_insert_after (struct aop_joinpoint *jp, gimple stmt)
{
  gsi_insert_after (jp->gsi, stmt, GSI_SAME_STMT);
}

/* This is the default prepare_for_weave() operation for aop_pointcut
   objects.  It does nothing. */
void
op_default_prepare_for_weave (struct aop_joinpoint *jp)
{
  /* This space intentionally left blank. */
}

/**
 * Insert a call to an advice function at a join point with any number
 * of arguments.  Any arguments following location are arguments to be
 * passed to the advice function.  Because C does not know the types
 * of vararg arguments, a type macro (such as #AOP_STR_CST or
 * #AOP_DYNVAL) is necessary for each advice argument.  #AOP_TERM_ARG
 * must be the last argument to aop_insert_advice(), even when not
 * specifying any arguments for the advice function.
 *
 * \param jp The join point to instrument with advice.
 * \param func_name The name of the advice function.
 * \param location Where to insert advice with respect to the join
 * point.  See the documenation for enum #aop_insert_location for more
 * detail.
 * \param ... A list of arguments to pass to the advice function,
 * terminated by #AOP_TERM_ARG.
 * \ingroup advice_insert
 */
void
aop_insert_advice (struct aop_joinpoint *jp, const char *func_name, 
		   enum aop_insert_location location, ...)
{
  va_list argp;
  gimple func_call;
  struct aop_pointcut *pc;
  tree block = NULL;
  VEC(gimple, heap) *pre_stmts;

  pc = jp->pc;

  /* Make sure this joinpoint is prepared for advice. */
  if (!jp->is_prepared)
    {
      pc->prepare_for_weave (jp);
      jp->is_prepared = true;
    }

  if (jp->stmt != NULL)
    block = gimple_block(jp->stmt);

  pre_stmts = VEC_alloc (gimple, heap, 2);

  va_start (argp, location);
  func_call = build_gcc_call (func_name, void_type_node, block, location,
			      pre_stmts, argp);
  va_end (argp);

  va_start (argp, location);
  insert_prototype (false /* void return type */, func_name,
		    gimple_call_num_args (func_call), argp);
  va_end (argp);

  if(location == AOP_INSERT_BEFORE)
    {
      int i;
      gimple stmt;

      for (i = 0; VEC_iterate (gimple, pre_stmts, i, stmt); i++)
	pc->insert_before (jp, stmt);
      pc->insert_before (jp, func_call);
    }
  else if(location == AOP_INSERT_AFTER)
    {
      /* insert_after() adds statements backwards, so we have to work
	 in reverse. */
      pc->insert_after (jp, func_call);
      while (!VEC_empty (gimple, pre_stmts))
	{
	  gimple stmt;
	  stmt = VEC_pop (gimple, pre_stmts);
	  aop_assert (stmt != NULL);

	  pc->insert_after (jp, stmt);
	}
    }

  VEC_free(gimple, heap, pre_stmts);
}

/* Take a list of statements and insert them at the current function's
   main entry point. */
static void
insert_stmts_at_entry (VEC(gimple, heap) *stmt_list)
{
  int i;
  edge in_edge;
  gimple stmt;
  gimple entry_stmt;

  entry_stmt = first_stmt (ENTRY_BLOCK_PTR_FOR_FUNCTION (cfun)->next_bb);

  /* Get the edge for the main entry point. */  
  in_edge = single_succ_edge (ENTRY_BLOCK_PTR_FOR_FUNCTION (cfun));

  for (i = 0; VEC_iterate (gimple, stmt_list, i, stmt); i++)
    {
      /* This is so entry pointcut functions can still tell what the
	 line number/filename is for this function's entry. */
      if (first_stmt != NULL)
	gimple_set_location (stmt, gimple_location (entry_stmt));

      gsi_insert_on_edge_immediate (in_edge, stmt);
    }
}

/**
 * Duplicate the current function's body so that there are two copies
 * available for instrumentation.  A function entry join point is
 * required because the duplication process inserts an advice call at
 * function entry which serves as a <i>distributor</i>.
 *
 * The distributor advice decides which copy to execute.  A
 * distributor advice function returns an int (unlike regular advice,
 * which has void return type): a zero value will execute the original
 * copy and a non-zero value will execute the new copy.
 *
 * Any arguments following func_name are arguments to be passed to the
 * distributor advice function.  (See the documentation for
 * aop_insert_advice() for an explanation of passing arguments to
 * advice.)  #AOP_TERM_ARG must be the last argument to
 * aop_duplicate(), even when not specifying any arguments for the
 * advice function.
 *
 * See the \ref duplicate.c "duplicate.c" sample plug-in for a simple
 * example of function duplication.
 *
 * \param jp The function entry join point for the current join point.
 * The distributor advice will be inserted here.  Function entry join
 * points are obtained by joining on an aop_match_function_entry()
 * pointcut.
 * \param func_name The name of the distributor advice function.
 * \param ... A list of arguments to pass to the advice function,
 * terminated by #AOP_TERM_ARG.
 * \ingroup advice_insert
 */
void
aop_duplicate (struct aop_joinpoint *jp, const char *func_name, ...)
{
  va_list argp;
  gimple func_call;
  tree block = NULL;
  struct aop_pointcut *pc;
  VEC(gimple, heap) *pre_stmts;

  pc = jp->pc;

  if (pc->kind != ATP_ENTRY)
    fatal_error ("(InterAspect) Function duplication must be done on a"
		 " function entry join point.");
  else if (jp->is_prepared)
    fatal_error ("(InterAspect) Illegal to duplicate using a join point that"
		 " has already been used to insert advice.");
  else if (is_current_func_duplicated())
    fatal_error ("(InterAspect) Cannot duplicate a function more than once.");

  if (jp->stmt != NULL)
    block = gimple_block(jp->stmt);

  pre_stmts = VEC_alloc (gimple, heap, 2);

  va_start (argp, func_name);
  func_call = build_gcc_call (func_name, integer_type_node, block,
			      AOP_INSERT_BEFORE, pre_stmts, argp);
  va_end (argp);

  va_start (argp, func_name);
  insert_prototype (true /* int return type */, func_name,
		    gimple_call_num_args (func_call), argp);

  duplicate_function_body ("ia_body_index", func_call);

  /* Insert all of the pre_stmts at the function entry so they will be
     before func_call. */
  insert_stmts_at_entry (pre_stmts);

  VEC_free(gimple, heap, pre_stmts);
}
