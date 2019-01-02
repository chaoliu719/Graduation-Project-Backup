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

/* aop-main.c: Basic setup functions. */

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
#include <toplev.h>
#include <tree.h>
#include <input.h>
#include <varray.h>
#include <hashtab.h>
#include <pointer-set.h>
#include <splay-tree.h>
#include <langhooks.h>
#include <cgraph.h>
#include <intl.h>
#include <function.h>
#include <output.h>
#include <diagnostic.h>
#include <timevar.h>
#include <tree-iterator.h>
#include <tree-flow.h>
#include <tree-pass.h>
#include <plugin.h>
#include <gimple.h>
#include <c-common.h>

#include "aop.h"
#include "aop-duplicate.h"
#include "aop-header.h"
#include "aop-pointcut.h"
#include "aop-type.h"
#include "aop-weave.h"

//#define PAUSE_ON_START

#define NOINSTR_ATTR "noinstrument"

static const char *aop_plugin_name;

static const struct plugin_argument *plugin_argv;
static int plugin_argc;

/* This code regimplifies the current function. Regimplification
   fixes broken GIMPLE invariants. */
static void
regimplify ()
{
  basic_block bb;
  FOR_EACH_BB(bb)
    {
      gimple_stmt_iterator gsi;

      for (gsi = gsi_start_bb (bb) ; !gsi_end_p (gsi) ; gsi_next (&gsi))
	{
	  gimple stmt = gsi_stmt (gsi);
	  gimple_regimplify_operands(stmt, &gsi);
	}
    }
}

/**
 * Iterate over the join points in a pointcut.  The join calls the
 * supplied callback once for each join point, passing the join point
 * itself and the callback_param value.
 *
 * The callback can use capture functions to get information about the
 * join point and aop_insert_advice() to actually instrument the join
 * point.
 *
 * Join points are only valid for the lifetime of the callback.  When
 * the callback finishes, the join point is deallocated and any
 * attempt to access it is an error.
 *
 * \param pc The pointcut to iterate over.
 * \param callback The callback to call for each join point.  The
 * callback function should have a prototype that matches
 * #join_callback.
 * \param callback_param Any data you wish to pass to the callback.
 * \ingroup join
 */
void
aop_join_on (struct aop_pointcut *pc, join_callback callback, 
	     void *callback_param)
{
  aop_assert (pc != NULL && pc->join_on != NULL);

  /* Filtering on in_params is universal across a function.  Either
     every join point in the function match or none do.*/
  if (!check_in_params (pc))
    return;

  pc->join_on (pc, callback, callback_param);

  /* Call regimplification only if the pointcut needs it */
  if (pc->need_regimplification) {
    regimplify();
    pc->need_regimplification = false;
  }
}

/**
 * Iterate over the join points in a pointcut for a single copy of a
 * duplicated function.  Calling aop_join_on() without duplicating the
 * function first will result in an error.  Functions are duplicated
 * with aop_duplicate().
 *
 * This kind of join works just like aop_join_on(), but all join
 * points are within one copy of the function body.  It is guaranteed
 * that advice inserted in one copy of a function body will only
 * execute if that copy is chosen by the distributor, even for
 * function entry and function exit join points.
 *
 * \param pc The pointcut to iterate over.
 * \param copy The copy to iterate over: zero for the original copy,
 * non-zero for the new copy.
 * \param callback The callback to call for each join point.  The
 * callback function should have a prototype that matches
 * #join_callback.
 * \param callback_param Any data you wish to pass to the callback.
 * \ingroup join
 */
void
aop_join_on_copy (struct aop_pointcut *pc, int copy, join_callback callback,
		  void *callback_param)
{
  aop_assert (pc != NULL && pc->join_on != NULL);

  if (!is_current_func_duplicated ())
    fatal_error ("(InterAspect) Attempt to use aop_join_on_copy() to join on a"
		 " function that was not duplicated.");

  /* Filtering on in_params is universal across a function.  Either
     every join point in the function match or none do.*/
  if (!check_in_params (pc))
    return;

  pc->join_on_copy (pc, copy, callback, callback_param);

  /* Call regimplification only if the pointcut needs it */
  if (pc->need_regimplification) {
    regimplify();
    pc->need_regimplification = false;
  }
}

/* This is the "gate" function for all client plug-in passes that gets
   to decide whether the pass will execute or not.*/
static bool
noinstrument_gate ()
{
  /* Execute the pass iff the current function is not annotated with
     the noinstrument attribute. */
  return (lookup_attribute (NOINSTR_ATTR, DECL_ATTRIBUTES (cfun->decl))
	  == NULL);
}

/* Register an attribute only if it has not yet been registered.  If
   the user loads multiple InterAspect plug-ins, they will all try to
   register the noinstrument attribute.  We have to make sure we don't
   attempt to call GCC's register_attribute multiple times, or it will
   throw an assertion failure! */
static void
register_attribute_once(const struct attribute_spec *attr)
{
  if (lookup_attribute_spec (get_identifier (attr->name)) == NULL)
    register_attribute (attr);
}

static tree
null_attrib_handler(tree *node, tree name, tree args, int flags, bool *no_add_attrs)
{
  return NULL_TREE;
}

static struct attribute_spec noinstr_attr = {
  .name = NOINSTR_ATTR,
  .min_length = 0,
  .max_length = 0,
  .decl_required = false,
  .type_required = false,
  .function_type_required = false,
  .handler = null_attrib_handler,
};

static void
register_plugin_attributes(void *event_data, void *data)
{
  register_attribute_once(&noinstr_attr);
}

static void
remember_function_decl_pass(void *event_data, void *data)
{
  tree fndecl = (tree)event_data;
  remember_function_decl(fndecl);
}

/* This pass gets called before any passes that the client plug-in
   registers.  It's here for any administrative details that need to
   take place before the instrumentation passes can execute. */
static unsigned int
execute_pass_init ()
{
  clear_advice_table ();

  return 0;
}

static struct opt_pass pass_init = {
  .type = GIMPLE_PASS,
  .name = "interaspect-init",
  .gate = NULL,
  .execute = execute_pass_init,
  .sub = NULL,
  .next = NULL,
  .static_pass_number = 0,
  .tv_id = 0,
  .properties_required = 0,
  .properties_provided = 0,
  .properties_destroyed = 0,
  .todo_flags_start = 0,
  .todo_flags_finish = 0,
};

/* Register pass_init as the first InterAspect pass. */
void
register_pass_init ()
{
  struct register_pass_info pass_info;

  pass_info.pass = &pass_init;
  pass_info.reference_pass_name = "cfg";
  pass_info.ref_pass_instance_number = 0;
  pass_info.pos_op = PASS_POS_INSERT_BEFORE;

  register_callback (aop_plugin_name, PLUGIN_PASS_MANAGER_SETUP, NULL,
		     &pass_info);
}

/* Provided for overriding in the client plug-in.  See aop.h. */
__attribute__((visibility("default"))) __attribute__((weak))
__attribute__((noinline)) void
aop_finish ()
{
  /* This function exists only to be overridden. */

  /* Weird bug: if this function is empty, GCC inlines the call to it
     in aop_cleanup() making it impossible to override (even if we
     explicitly specify noinline).  We can trick GCC into emitting the
     calls with this empty assembly block. */
  __asm__ volatile ("");
}

/**
 * Find the value for a command-line argument passed to the plug-in.
 * You can pass a key/value argument to your plug-in on the GCC
 * command line like this:
 *
 * <code>-fplugin-arg-${BASENAME}-${KEY}=${VALUE}</code>
 *
 * where ${BASENAME} is the base name of your plug-in, which GCC
 * determines from the plug-in's file name.  If your plug-in is named
 * <code>libfoo.so</code>, its basename will be <code>libfoo</code>.
 *
 * If you want to be able to pass arguments to your plug-in, the
 * plug-in's file name must not have any hyphens.  This is a
 * restriction of GCC.
 *
 * \param key The argument key.
 * \return If the user passed an argument with the specified key to
 * this plug-in, aop_get_arg_value() returns the associated value.
 * Otherwise, it returns NULL.  If the user passed multiple arguments
 * with the specified key, aop_get_arg_value() returns the value that
 * was <i>last</i> on the command line.
 * \ingroup setting_up
 */
const char *
aop_get_arg_value (const char *key)
{
  int i;
  const char *value = NULL;

  for (i = 0; i < plugin_argc; i++)
    if (strcmp(key, plugin_argv[i].key) == 0)
      value = plugin_argv[i].value;

  return value;
}

/* Store a list of all struct opt_pass objects we create so that we
   can free them at cleanup time. */
typedef struct opt_pass *aop_pass;
DEF_VEC_P (aop_pass);
DEF_VEC_ALLOC_P (aop_pass, heap);
static VEC (aop_pass, heap) *aop_pass_list;

static struct opt_pass template_pass = {
  .type = GIMPLE_PASS,
  .name = NULL,
  .gate = NULL,
  .execute = NULL,
  .sub = NULL,
  .next = NULL,
  .static_pass_number = 0,
  .tv_id = 0,
  .properties_required = 0,
  .properties_provided = 0,
  .properties_destroyed = 0,
  .todo_flags_start = 0,
  .todo_flags_finish = TODO_update_ssa,
};

/**
 * Register an instrumentation pass with GCC.  Most InterAspect-based
 * plug-ins will call this function once (from aop_main()) to register
 * the a pass that will do all the instrumentation work.
 *
 * In GCC, a pass is a function that gets called once for each
 * compiled function in the target program.  Each time the pass
 * function executes, it directly modifies the current function.
 *
 * Passes added with aop_register_pass() will be executed in the order
 * they are added.
 *
 * \param pass_name A name for the pass.
 * \param callback The pass function to register.
 * \ingroup setting_up
 */
void
aop_register_pass (const char *pass_name, pass_callback callback)
{
  struct opt_pass *pass_aop;
  struct register_pass_info pass_info;

  pass_aop = xmalloc (sizeof (struct opt_pass));
  memcpy (pass_aop, &template_pass, sizeof (struct opt_pass));

  pass_aop->name = xstrdup (pass_name);
  pass_aop->execute = callback;
  pass_aop->gate = noinstrument_gate;

  pass_info.pass = pass_aop;
  pass_info.reference_pass_name = "veclower";
  pass_info.ref_pass_instance_number = 0;
  pass_info.pos_op = PASS_POS_INSERT_BEFORE;

  /* Safe the pointer to this object so we can free it later. */
  VEC_safe_push(aop_pass, heap, aop_pass_list, pass_aop);

  register_callback (aop_plugin_name, PLUGIN_PASS_MANAGER_SETUP, NULL,
		     &pass_info);
}

/* Free memory taken up by struct opt_pass objects saved in the
   aop_pass_list vector as well as the vector itself. */
static void
cleanup_passes ()
{
  int i;
  struct opt_pass *pass;

  for (i = 0 ; VEC_iterate (aop_pass, aop_pass_list, i, pass) ; i++)
    {
      free ((char *)pass->name);
      free (pass);
    }
  VEC_free(aop_pass, heap, aop_pass_list);
  aop_pass_list = NULL;
}

/* This is the last plug-in function called before GCC exits.  Clean
   up all the memory we allocated. */
static void
aop_cleanup (void *event_date, void *data)
{
  aop_finish ();

  free_type_table ();
  free_prototype_table ();
  cleanup_passes ();
}

/* GCC calls this to initialize a plug-in.  Once InterAspect
   initializes, it calls down into its client plug-in's
   initialization.

   By design, this function should be the _only_ exported (externally
   visible) function in the compbined InterAspect/client package.

   Note that the compiler is set to automatically mark function
   definitions with "hidden" visibility.  We override that behavior
   here. */
__attribute__((visibility("default"))) int
plugin_init (struct plugin_name_args *plugin_info,
	     struct plugin_gcc_version *version)
{
#ifdef PAUSE_ON_START
  fprintf(stderr, "cc has PID %d.  Attach debugger now.\n", getpid());
  fprintf(stderr, "[Enter to continue.]\n");
  scanf("%*c");
#endif

  aop_plugin_name = plugin_info->base_name;

  /* GCC will destroy the plugin_info object when this init function
     finishes but will not destroy the arguments vector.  This
     behavior is documented, so we can rely on it. */
  plugin_argc = plugin_info->argc;
  plugin_argv = plugin_info->argv;

  /* Initialization for aop-type.c, aop-header.c, and aop-weave.c. */
  init_type_table ();
  init_prototype_table ();
  init_static_inline_table ();

  /* Register attributes. */
  register_callback(aop_plugin_name, PLUGIN_ATTRIBUTES, register_plugin_attributes, NULL);

  /* Register ctree pass. */
  register_callback(aop_plugin_name, PLUGIN_PRE_GENERICIZE, remember_function_decl_pass, NULL);

  /* Register our cleanup function. */
  register_callback (aop_plugin_name, PLUGIN_FINISH, aop_cleanup, NULL);

  register_pass_init ();

  /* Give the client plug-in its chance to register a pass. */
  aop_main ();

  return 0;
}

void
aop_abort (const char *filename, int lineno, const char *function)
{
  fprintf (stderr, "Assertion failure within InterAspect plug-in:\n");
  fancy_abort(filename, lineno, function);
}

/**
 * Get the name of the current function.  You can call this directly
 * from a pass function or from any join point iterator function.
 * \return The name of the current function.
 * \ingroup all_pc
 */
const char *
aop_get_function_name (void)
{
  return IDENTIFIER_POINTER (DECL_NAME (current_function_decl));
}
