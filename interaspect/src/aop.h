#ifndef __AOP_H__
#define __AOP_H__

/* Copyright (c) 2010 Justin Seyster
   Copyright (c) 2010 Ketan Dixit
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

/* The InterAspect package for GCC is a framework for building GCC plug-ins
   that perform instrumentation.  InterAspect has two goals:
     1: to serve as the interposition backend for a GCC
        Aspect-Oriented Programming (AOP) utility;
     2: to make it simple to write stand-alone plug-ins that implement
        custom instrumentation.

   For both of these goals, InterAspect provides functions to
   interpose on a variety of program events.  The framework can insert
   calls to "advice" functions at the points in the program where
   these events occur (known as "join points").  Furthermore, inserted
   calls can pass values from the running program to the advice
   function. */

/**
 * \file aop.h
 * \brief The entire InterAspect public interface.
 *
 * Include aop.h for all functions and data types necessary for an
 * InterAspect plug-in.  It is not generally necessary to include any
 * other InterAspect header files or any GCC header files.
 */

/**
 * \brief Client plug-in <i>must</i> use this macro to indicate that
 * it is GPLv3 compatible.
 *
 * GCC will refuse to execute plug-ins that do not declare themselves
 * as GPL compatible.  Call this macro at the top level of any one
 * source file in a plug-in to declare the plug-in as GPL compatible.
 *
 * By using this macro, you state that, if you distribute your
 * plug-in, you will not distribute it under any terms that are
 * incompatible with the GPL.  This is a requirement of the GCC
 * license.  Contact the Free Software Foundation for more
 * information.  (The InterAspect team is not affiliated with the Free
 * Software Foundation.)
 * \ingroup setting_up
 */
#define AOP_I_AM_GPL_COMPATIBLE()					\
  __attribute__((visibility("default"))) int plugin_is_GPL_compatible;

/**
 * \brief A macro for easily declaring a plug-in's main function.
 *
 * Define aop_main using the AOP_MAIN_PROTO macro to ensure that its
 * linker visibility is set correctly.  Absolutely do not just declare
 * it as a void function! 
 *
 * For example:
 * \code
 * AOP_PROTO_MAIN aop_main(void)
 * \endcode
 * \ingroup setting_up
*/
#define AOP_MAIN_PROTO __attribute__((visibility("hidden"))) void

/* This assertion routine is mostly copied from gcc/system.h */
#ifndef AOP_NO_ASSERT_CHECK

/**
 * \brief A convenient interface to GCC's assertion facility.
 *
 * If EXPR evaluates to false, GCC will abort compilation and show an
 * error with the file and line number of the failed assertion.
 * \ingroup setting_up
 */
#define aop_assert(EXPR)						\
  ((void)(!(EXPR) ? aop_abort (__FILE__, __LINE__, __FUNCTION__), 0 : 0))
#else /* AOP_NO_ASSERT_CHECK */
/* Include EXPR, so that unused variable warnings do not occur.  */
#define aop_assert(EXPR) ((void)(0 && (EXPR)))
#endif

struct aop_dynval;
struct aop_joinpoint;
struct aop_pointcut;
struct aop_type;

/**
 * \brief Type for plug-in pass functions.
 *
 * The function type for pass functions to be registered with
 * aop_register_pass().
 * \ingroup setting_up
 */
typedef unsigned int (*pass_callback) ();

/**
 * \defgroup join Join Functions
 */

/**
 * \brief Type for aop_join_on() callbacks.
 *
 * The function type for callback functions to be used for iterating
 * over a pointcut with aop_join_on().
 * \ingroup join
 */
typedef void (*join_callback) (struct aop_joinpoint *, void *callback_param);

extern void aop_filter_include_temps (struct aop_pointcut *pc);
extern void aop_filter_exclude_temps (struct aop_pointcut *pc);

/**
 * \brief Advice locations for aop_insert_advice().
 *
 * Specifying AOP_INSERT_BEFORE or AOP_INSERT_AFTER will place the
 * call before or after the join point (when possible) and will
 * guarantee certain properties about ordering of advice calls.  Using
 * AOP_INSERT_BEFORE to insert multiple advice calls at the same join
 * point will place advice calls in the order they are inserted.  With
 * AOP_INSERT_AFTER, however, advice calls will be placed in _reverse_
 * order.  No matter what order calls are inserted in, all
 * AOP_INSERT_BEFORE calls will be placed before all AOP_INSERT_AFTER
 * calls.
 *
 * It is legal to use AOP_INSERT_BEFORE and AOP_INSERT_AFTER to
 * enforce ordering among advice calls even when inserting before or
 * after a join point does not make sense.  For example, it does not
 * make sense to insert an advice call before a function entry join
 * point.  Using AOP_INSERT_BEFORE will still insert the advice after
 * function entry, but it will place the advice before any
 * AOP_INSERT_AFTER advice.
 * \ingroup advice_insert
 */
enum aop_insert_location {
  /**
   * \brief Insert advice before a join point when possible.
   *
   * Even when it does not make sense to insert advice before a join
   * point, all #AOP_INSERT_BEFORE advice will be ordered before all
   * #AOP_INSERT_AFTER advice.
   *
   * If multiple advice calls are inserted with #AOP_INSERT_BEFORE,
   * they will be placed in the order they were inserted.
   */
  AOP_INSERT_BEFORE,

  /**
   * \brief Insert advice after a join point when possible.
   *
   * Even when it does not make sense to insert advice before a join
   * point, all #AOP_INSERT_BEFORE advice will be ordered before all
   * #AOP_INSERT_AFTER advice.
   *
   * If multiple advice calls are inserted with #AOP_INSERT_AFTER,
   * they will be placed in the <i>reverse</i> of the order they were
   * inserted in.
   */
  AOP_INSERT_AFTER,
};

extern void aop_insert_advice (struct aop_joinpoint *jp, const char *name,
			       enum aop_insert_location location, ...);
extern void aop_duplicate (struct aop_joinpoint *jp, const char *name, ...);

extern const struct aop_type *aop_t_all_signed ();
extern const struct aop_type *aop_t_all_unsigned ();
extern const struct aop_type *aop_t_all_fp ();
extern const struct aop_type *aop_t_all_pointer ();

extern const struct aop_type *aop_t_signed8 ();
extern const struct aop_type *aop_t_signed16 ();
extern const struct aop_type *aop_t_signed32 ();
extern const struct aop_type *aop_t_signed64 ();
extern const struct aop_type *aop_t_signed128 ();
extern const struct aop_type *aop_t_unsigned8 ();
extern const struct aop_type *aop_t_unsigned16 ();
extern const struct aop_type *aop_t_unsigned32 ();
extern const struct aop_type *aop_t_unsigned64 ();
extern const struct aop_type *aop_t_unsigned128 ();
extern const struct aop_type *aop_t_float32 ();
extern const struct aop_type *aop_t_float64 ();
extern const struct aop_type *aop_t_long_double ();
extern const struct aop_type *aop_t_cstring ();
extern const struct aop_type *aop_t_struct (const char *tag);
extern const struct aop_type *aop_t_struct_ptr (const char *tag);
extern const struct aop_type *aop_t_union (const char *tag);
extern const struct aop_type *aop_t_union_ptr (const char *tag);
extern const struct aop_type *aop_t_enum (const char *tag);
extern const struct aop_type *aop_t_pointer_to (const struct aop_type *type);

extern int aop_is_pointer_type (const struct aop_type *type);
extern int aop_is_all_signed_subtype(const struct aop_type *type);
extern int aop_is_all_unsigned_subtype(const struct aop_type *type);
extern void aop_cast_to_all_pointer (struct aop_dynval *dv);
extern void aop_cast_to_all_signed(struct aop_dynval *dv);
extern void aop_cast_to_all_unsigned(struct aop_dynval *dv);
extern int aop_is_all_fp_subtype (const struct aop_type *type);
extern void aop_cast_to_all_fp(struct aop_dynval *dv);
extern const struct aop_type *aop_get_dynval_type (struct aop_dynval *dv);

extern void aop_register_pass (const char *pass_name, pass_callback callback);
extern void aop_join_on (struct aop_pointcut *pc, join_callback callback,
			 void *callback_param);
extern void aop_join_on_copy (struct aop_pointcut *pc, int copy,
			      join_callback callback, void *callback_param);

/**
 * \defgroup setting_up Setting Up
 * \{
 */

/**
 * The aop_main() function is the only function that a client plug-in
 * <i>must</i> define in order to link with InterAspect.  InterAspect
 * will call aop_main() right at the beginning of compilation, giving
 * it the opportunity to register a pass using aop_register_pass().
 *
 * Make sure to define your aop_main() using the AOP_MAIN_PROTO()
 * macro.
 */
extern void aop_main ();

/**
 * InterAspect calls this function after all compilation is finished
 * and before GCC and InterAspect data structures are destroyed.  It
 * is provided so that InterAspect plug-ins can override it (by
 * providing their own version), giving them a last chance to clean up
 * data structures or free up other resources.
 *
 * The best place to output an automatic header (using
 * aop_write_c_header()) is in aop_finish().
 */
extern void aop_finish ();

/**
 * \}
 */

/**
 * \cond HIDDEN_SYMBOLS
 */
extern void aop_abort (const char *filename, int lineno, const char *function)
  __attribute__((noreturn));
/**
 * \endcond
 */

/* Fancy macro magic used for the varargs component of insert_advice
   functions. */

enum aop_argkind {
  ATA_STR_CST,
  ATA_INT_CST,
  ATA_DOUBLE_CST,
  ATA_VOIDP_CST,
  ATA_DYNVAL,
  AOP_TERM_ARG,
};

/**
 * \defgroup advice_insert Advice Insertion Functions
 * \{
 */

/**
 * \brief Mark an advice argument as a string constant
 * (const char *).
 *
 * Use this macro when passing a string constant (const char *)
 * argument to aop_insert_advice().
 */
#define AOP_STR_CST(VAL) ATA_STR_CST, VAL

/**
 * \brief Mark an advice argument as an integer constant (int).
 *
 * Use this macro when passing an integer constant (int) argument to
 * aop_insert_advice().  Make sure the argument actually has type int,
 * and not a different-sized type (like long on a 64-bit system).  The
 * preprocessor cannot type check this input, and an input with the
 * wrong type can cause a memory error.
 */
#define AOP_INT_CST(VAL) ATA_INT_CST, VAL

/**
 * \brief Mark an advice argument as a floating-point constant
 * (double).
 *
 * Use this macro when passing a floating-point constant (double)
 * argument to aop_insert_advice().  Make sure the argument actually
 * has type double.  The preprocessor cannot type check this input,
 * and an input with the wrong type (such as float) can cause a memory
 * error.
 */
#define AOP_DOUBLE_CST(VAL) ATA_DOUBLE_CST, VAL

/**
 * \brief Mark an advice argument as an void pointer constant (void *).
 *
 * Use this macro when passing an void pointer constant (void *)
 * argument to aop_insert_advice().
 */
#define AOP_VOIDP_CST(VAL) ATA_VOIDP_CST, VAL

/**
 * \brief Mark an advice argument as an runtime value
 * (struct aop_dynval *).
 *
 * Use this macro when passing a runtime value
 * (struct aop_dynval *) argument to aop_insert_advice().
 */
#define AOP_DYNVAL(VAL) ATA_DYNVAL, VAL

/* This is an unfortunate hack so that we can have doxygen
   documentation for AOP_TERM_ARG. */
#ifdef DOXY_ONLY
#error Do not define the DOXY_ONLY preprocessor variable.

/**
 * \brief End a list of advice arguments.
 *
 * This value must <i>always</i> be the last thing passed to
 * aop_insert_advice() and aop_duplicate(), even if you are not
 * passing any advice arguments.
 */
#define AOP_TERM_ARG
#endif

/**
 * \}
 */

extern const char *aop_get_function_name (void);

extern struct aop_pointcut *aop_match_function_entry ();
extern void aop_filter_by_in_param (struct aop_pointcut *pc, int n,
				    const struct aop_type *type);
extern struct aop_dynval *aop_capture_in_param (struct aop_joinpoint *jp,
					     int param_index);

extern void aop_filter_entry_by_name(struct aop_pointcut *pc, const char *name);

extern struct aop_pointcut *aop_match_function_exit ();
extern void aop_filter_exit_by_return_type (struct aop_pointcut *pc,
					    const struct aop_type *type);
extern struct aop_dynval *aop_capture_exit_return_value (
  struct aop_joinpoint *jp);
extern struct aop_dynval *aop_capture_exit_return_value_by_type (
  struct aop_joinpoint *jp, const struct aop_type *type);

extern struct aop_pointcut *aop_match_function_call ();

extern void aop_filter_call_pc_by_name (struct aop_pointcut *pc,
					const char *advice_function_call);
extern void aop_filter_call_pc_by_param (struct aop_pointcut *pc, int n,
					 const struct aop_type *type);
extern void aop_filter_call_pc_by_return_type (struct aop_pointcut *pc,
					       const struct aop_type *type);

extern const char *aop_capture_called_function_name(struct aop_joinpoint *jp);
extern struct aop_dynval *aop_capture_call_return_value (
  struct aop_joinpoint *jp);
extern struct aop_dynval *aop_capture_call_return_value_by_type (
  struct aop_joinpoint *jp, const struct aop_type *type);
extern struct aop_dynval *aop_capture_call_param (struct aop_joinpoint *jp,
						  int param_index);
extern struct aop_dynval *aop_capture_call_param_by_type (
  struct aop_joinpoint *jp, int n, const struct aop_type *type);

extern struct aop_pointcut *aop_match_assignment_by_type (
  const struct aop_type *type);

extern struct aop_dynval *aop_capture_lhs_addr (struct aop_joinpoint *jp);
extern const char *aop_capture_lhs_name (struct aop_joinpoint *jp);
extern struct aop_dynval *aop_capture_assigned_value (struct aop_joinpoint *jp);

extern int aop_write_c_header (const char *filename, const char *guard,
			       const char *license, const char *preamble);

extern const char *aop_get_arg_value (const char *key);

/**
 * \defgroup scope_val aop_capture_lhs_var_scope() Return Values
 *
 * The aop_capture_lhs_var_scope() returns one of these values when
 * the variable assigned to does not have function local scope (or
 * when the assignment does not assign directly to a variable).
 * \{
 */
/**
 * The variable is accessible by name from anywhere in the program.
 */
#define AOP_GLOBAL_SCOPE -1

/**
 * The variable is only accessible by name from the current file.
 */
#define AOP_FILE_SCOPE -2

/**
 * Used for an assignment that does not assign to a variable.  For
 * example, the assignment may be to a field in a struct or a
 * dereferenced pointer.
 */
#define AOP_MEMORY_SCOPE -3

/**
 * Use this macro to check if a variable has function-local scope.
 */
#define AOP_LOCAL_SCOPE(SCOPE) (SCOPE >= 0)

/* Close Doxygen defgroup block. */
/**
 * \}
 */

extern int aop_capture_lhs_var_scope (struct aop_joinpoint *jp);

extern int aop_capture_lineno (struct aop_joinpoint *jp);

extern const char *aop_capture_file_name (struct aop_joinpoint *jp);

extern struct aop_dynval *
aop_capture_in_param_by_type (struct aop_joinpoint *jp, int n,
			      const struct aop_type *type);

#endif
