#ifndef __AOP_TRACECUT_H__
#define __AOP_TRACECUT_H__

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

/**
 * \file tracecut.h
 * \brief The public interface for InterAspect tracecuts, an extension
 * to the InterAspect framework.
 *
 * A tracecut can track sequences of events on a program object (or a
 * set of program objects) using regular expressions.
 *
 * Though included in the InterAspect distribution, the tracecut
 * extension only uses InterAspect's external API, making it a good
 * example of how to use the API.
 *
 * All tracecut functions have a <code>tc_</code> prefix.
 */

struct aop_joinpoint;
struct aop_type;
struct tc_tracecut;

/**
 * Maximum size for a symbol and param names.
 */
#define TC_MAX_ID_SIZE 255

/**
 * Possible error return values for tracecut functions.
 */
enum tc_error {
  /**
   * No error: the function succeeded.
   */
  TC_SUCCESS,

  /**
   * Function was called from an inappropriate context.  Most tracecut
   * functions should be called from your aop_main() function.
   */
  TC_BAD_CONTEXT,

  /**
   * An input to the function was invalid.
   */
  TC_INVAL,

  /**
   * Attempt to create a duplicate name.
   */
  TC_DUPLICATE,

  /**
   * Attempt to name a symbol of param with a bad identifier.
   * (Identifiers must only contain letters, numbers and the
   * underscore character, with no spaces.  Identifiers are case
   * sensitive.)
   */
  TC_BAD_ID,

  /**
   * Attempt to bind the return value of a call symbol that has a
   * location of #AOP_INSERT_BEFORE.
   */
  TC_BAD_RETURN_BINDING,

  /**
   * Attempt to reference a name that does not exist.
   */
  TC_NOENT,

  /**
   * Function could not allocate enough memory.
   */
  TC_NOMEM,
};

extern enum tc_error tc_error_code (struct tc_tracecut *tc);
extern void tc_reset_error (struct tc_tracecut *tc);

extern enum tc_error tc_add_param (struct tc_tracecut *tc, const char *name,
				   const struct aop_type *type);

extern enum tc_error tc_add_call_symbol (struct tc_tracecut *tc,
					 const char *name,
					 const char *func_name,
					 enum aop_insert_location location);

extern enum tc_error tc_bind_to_call_param (struct tc_tracecut *tc,
					    const char *param_name,
					    const char *symbol_name,
					    int call_param_index);
extern enum tc_error tc_bind_to_return_value (struct tc_tracecut *tc,
					      const char *param_name,
					      const char *symbol_name);

enum tc_error tc_declare_call_symbol (struct tc_tracecut *tc, const char *name,
				      const char *declaration,
				      enum aop_insert_location location);

extern enum tc_error tc_add_rule (struct tc_tracecut *tc,
				  const char *specification);

extern struct tc_tracecut *tc_create_tracecut (void);
extern void tc_free_tracecut (struct tc_tracecut *tc);

extern void tc_insert_tracecut_init_advice (struct aop_joinpoint *jp);

extern void tc_set_main_function (const char *func_name);
extern void tc_register_tracecut_pass (void);

#endif
