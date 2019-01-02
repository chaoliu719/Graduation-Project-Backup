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

/* Whether we want them or not (we don't), Autoconf _insists_ on
   defining these.  Since GCC's config.h (which we must include) also
   defines them, we have to undef them here. */
#undef PACKAGE_BUGREPORT
#undef PACKAGE_NAME
#undef PACKAGE_STRING
#undef PACKAGE_TARNAME
#undef PACKAGE_VERSION

#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "aop.h"
#include "tracecut.h"

/**
 * \cond HIDDEN_SYMBOLS
 */
struct tc_param {
  const char *name;
  int index;

  const struct aop_type *type;

  struct tc_param *next;
};

struct tc_call_binding {
  /* The index of the call_param we should bind to.  A value of -1
     means bind to the return value instead of a call_param. */
  int call_param_index;

  struct tc_param *param;

  struct tc_call_binding *next;
};

struct tc_call_symbol {
  const char *name;
  int index;

  const char *func_name;
  enum aop_insert_location location;

  struct tc_call_binding *binding_list;

  struct tc_call_symbol *next;
};

struct tc_rule {
  const char *specification;
  struct tc_rule *next;
};

struct tc_tracecut {
  int index;

  struct tc_param *param_list;
  struct tc_call_symbol *symbol_list;
  struct tc_rule *rule_list;

  /* Each param gets a unique index. */
  int next_param_index;

  /* Each symbol gets a unique index. */
  int next_symbol_index;

  /* The first tracecut operation that fails stores its error code
     here. */
  enum tc_error tc_error;

  struct tc_tracecut *next;
};
/**
 * \endcond
 */

/**
 * \defgroup tracecut Tracecut Functions
 *
 * In InterAspect, a tracecut specifies a program property as a
 * regular expression.  At runtime, there is a tracecut monitor, which
 * is modeled as a finite-state machine, that detects whenever the
 * tracecut regular expression matches some sequence of program events.
 *
 * It is possible to independently monitor the same property on
 * multiple program objects by parameterizing the tracecut.  The
 * tracecut engine spawns a new monitor instance for each distinct set
 * of parameters.  For example, you could design a tracecut that
 * creates a monitor instance for each FILE object, as is done in the
 * \ref fclose_tracecut.c "fclose_tracecut" sample tracecut plug-in.
 *
 * The easiest way to define a tracecut is by first defining all the
 * parameters, and then adding call symbols with
 * tc_declare_call_symbol().  Each symbol represents a particular
 * program event (a call to a specified function) that you can
 * reference in a regular expression rule.
 *
 * When you compile a target program with a tracecut plug-in, you must
 * also link the target program with the tracecut monitoring engine
 * library, <code>-ltracecut</code>.
 *
 * When a tracecut rule matches, the monitoring engine calls the
 * tracecut advice function, tc_report_match(), which prints a message
 * to <code>stderr</code> by default.  The tc_report_match() function
 * is defined as a weak symbol, so you can override it by defining
 * your own version.
 *
 * Tracecuts are available starting with InterAspect version 1.1.
 * \{
 */

/* It is necessary to keep a master list of all tracecuts so that the
   main tracecut pass has access to them. */
static struct tc_tracecut *tracecut_list = NULL;

/* This is true once actual compilation passes start, making it
   illegal to modify any existing tracecut objects. */
static int tc_in_compilation = 0;

/* The name of the function where the tracecut plug-in will insert its
   initialization. */
static const char *main_func = NULL;

/* Go through the master list of tracecuts and give each a consecutive
   index. */
static void
assign_tracecut_indices ()
{
  int next_tracecut_index = 0;
  struct tc_tracecut *tc;

  for (tc = tracecut_list; tc != NULL; tc = tc->next)
    tc->index = next_tracecut_index++;
}

/* Choose an index for every tracecut object.  After that, tracecut
   objects are frozen because setting tc_in_compilation to true makes
   it illegal to modify them. */
static void
freeze_tracecuts (void)
{
  if (!tc_in_compilation)
    {
      assign_tracecut_indices ();
      tc_in_compilation = 1;
    }

}

static struct tc_param *
lookup_param (struct tc_tracecut *tc, const char *name)
{
  struct tc_param *param;

  for (param = tc->param_list; param != NULL; param = param->next)
    {
      if (strcmp (name, param->name) == 0)
	return param;  /* Found it. */
    }

  /* We did not find a param with the given name. */
  return NULL;
}

/* Here's a cool trick I learned from the DTrace source code.  This
   function sets the error code in a tracecut object and also returns
   that error code, so you can conveniently nestle it in the return
   statement itself. */
static enum tc_error
return_error (struct tc_tracecut *tc, enum tc_error tc_error)
{
  /* The tc_error field holds the _first_ non success error code. */
  if (tc->tc_error == TC_SUCCESS)
    tc->tc_error = tc_error;

  return tc_error;
}

/* Tracecut identifiers must consist entirely of the characters
   [_0-9a-zA-Z] with no spaces. */
static int
is_id_char(char c)
{
  return (c == '_' || ((c >= '0') && (c <= '9')) || ((c >= 'a') && (c <= 'z'))
	  || ((c >= 'A') && (c <= 'Z')));
}

/* Does the input string follow the rules for tracecut identifiers? */
static int
is_valid_identifier(const char *str)
{
  int i;

  for (i = 0; str[i] != '\0'; i++)
    {
      if (!is_id_char (*str))
	return 0;
    }

  if (i > TC_MAX_ID_SIZE)
    return 0;

  return 1;
}

/**
 * The first operation on a tracecut that fails stores its error code
 * in the tracecut.  This function returns that error code, or
 * #TC_SUCCESS if all operations succeeded.  Checking error codes this
 * ways makes it possible to call several tracecut functions in
 * sequence without individually checking their error codes.
 *
 * Use tc_reset_error() to set a tracecut's error code back to
 * #TC_SUCCESS.
 *
 * (Since version 1.1)
 * \param tc The tracecut to check.
 * \return The error code of the first failed operation on this
 * tracecut, or TC_SUCCESS if no operations failed.
 */
enum tc_error
tc_error_code (struct tc_tracecut *tc)
{
  return tc->tc_error;
}

/**
 * Clear the history of any failed operations on this tracecut.  After
 * calling this, tc_error_code() will return #TC_SUCCESS until some
 * later tracecut operation fails.
 *
 * (Since version 1.1)
 * \param tc The tracecut to reset.
 */
void
tc_reset_error (struct tc_tracecut *tc)
{
      tc->tc_error = TC_SUCCESS;
}

static enum tc_error
check_param_type(const struct aop_type *type)
{
    if(aop_is_pointer_type (type) ||
       aop_is_all_signed_subtype (type) ||
       aop_is_all_unsigned_subtype (type) ||
       aop_is_all_fp_subtype (type)) {
	return TC_SUCCESS;
    }

    return TC_INVAL;
}

/**
 * Add a new tracecut parameter.  Each tracecut tracks several
 * objects, so a tracecut event must be <i>parameterized</i> to
 * specify which runtime object it applies to.  Use of of tracecut's
 * <i>bind</i> functions to bind a tracecut param to an actual runtime
 * value captured by InterAspect.
 *
 * All params must have an #aop_type that matches pointer types only
 * (i.e., aop_is_pointer_type() returns true).
 *
 * (Since version 1.1)
 * \param tc The tracecut to add a param to.
 * \param name The name used to reference this param.
 * \param type They type of this param.
 * \return #TC_SUCCESS or
 * - #TC_BAD_CONTEXT, when called after compilation has already
 *      started;
 * - #TC_DUPLICATE, if there already exists a param with the
 *    specified name;
 * - #TC_BAD_ID if name is not an acceptable identifier.  (Identifiers
 *    must only contain letters, numbers and the underscore character,
 *    with no spaces.  Identifiers are case sensitive and should be no
 *    longer than #TC_MAX_ID_SIZE.)
 * - #TC_INVAL, if aop_is_pointer_type() is false for the specified
 *    type;
 * - #TC_NOMEM, if memory runs out.
 */
enum tc_error
tc_add_param (struct tc_tracecut *tc, const char *name,
	      const struct aop_type *type)
{
  struct tc_param *param = NULL;
  enum tc_error    tc_err = TC_SUCCESS;

  if (tc_in_compilation)
    return return_error (tc, TC_BAD_CONTEXT);

  if (!is_valid_identifier (name))
    return return_error (tc, TC_BAD_ID);

  tc_err = check_param_type(type);
  if(tc_err != TC_SUCCESS) 
    return return_error (tc, tc_err);

  if (lookup_param (tc, name) != NULL)
    return return_error (tc, TC_DUPLICATE);

  param = (struct tc_param *)malloc (sizeof (struct tc_param));
  if (param == NULL)
    goto nomem;

  param->name = strdup (name);
  if (param->name == NULL)
    goto nomem;

  param->index = tc->next_param_index++;
  param->type = type;

  /* Insert this new param into the list of params. */
  param->next = tc->param_list;
  tc->param_list = param;

  return return_error (tc, TC_SUCCESS);

 nomem:
  free (param);
  return return_error (tc, TC_NOMEM);
}

static struct tc_call_symbol *
lookup_call_symbol (struct tc_tracecut *tc, const char *name)
{
  struct tc_call_symbol *symbol;

  for (symbol = tc->symbol_list; symbol != NULL; symbol = symbol->next)
    {
      if (strcmp (name, symbol->name) == 0)
	return symbol;  /* Found it. */
    }

  /* We did not find a symbol with the given name. */
  return NULL;
}

/**
 * Add a new tracecut symbol representing a function call event.  The
 * event bound to this new symbol is triggered whenever the specified
 * function is called.
 *
 * All symbols must have unique name: attempting to create a duplicate
 * symbol will fail.  It is possible to create multiple symbols for
 * the same function.
 *
 * (Since version 1.1)
 * \param tc The tracecut to add a symbol to.
 * \param name The name used to reference this symbol.
 * \param func_name The name of the function that should trigger the
 * new symbol's event.
 * \param location Specifies whether the the symbol event should
 * trigger before or after the specified function is called.
 * \return #TC_SUCCESS or
 * - #TC_BAD_CONTEXT, when called after compilation has already
 *      started;
 * - #TC_DUPLICATE, if there already exists a symbol with the
 *    specified name;
 * - #TC_BAD_ID if name is not an acceptable identifier.  (Identifiers
 *    must only contain letters, numbers and the underscore character,
 *    with no spaces.  Identifiers are case sensitive and should be no
 *    longer than #TC_MAX_ID_SIZE.)
 * - #TC_NOMEM, if memory runs out.
 */
enum tc_error
tc_add_call_symbol (struct tc_tracecut *tc, const char *name,
		    const char *func_name, enum aop_insert_location location)
{
  struct tc_call_symbol *symbol = NULL;

  if (tc_in_compilation)
    return return_error (tc, TC_BAD_CONTEXT);

  if (!is_valid_identifier (name))
    return return_error (tc, TC_BAD_ID);

  if (lookup_call_symbol (tc, name) != NULL)
    return return_error (tc, TC_DUPLICATE);

  symbol = (struct tc_call_symbol *)malloc (sizeof (struct tc_call_symbol));
  if (symbol == NULL)
    goto nomem;

  symbol->name = strdup (name);
  symbol->func_name = strdup (func_name);
  if (symbol->name == NULL || symbol->func_name == NULL)
    goto nomem;

  symbol->index = tc->next_symbol_index++;
  symbol->location = location;
  symbol->binding_list = NULL;

  /* Insert this new symbol into the list of call symbols. */
  symbol->next = tc->symbol_list;
  tc->symbol_list = symbol;

  return return_error (tc, TC_SUCCESS);

 nomem:
  if (symbol != NULL)
    {
      free ((char *)symbol->name);
      free ((char *)symbol->func_name);
      free (symbol);
    }
  return return_error (tc, TC_NOMEM);
}

static enum tc_error
add_call_symbol_binding (struct tc_tracecut *tc, const char *param_name,
			 const char *symbol_name, int index)
{
  struct tc_param *param;
  struct tc_call_symbol *symbol;
  struct tc_call_binding *binding;

  param = lookup_param (tc, param_name);
  symbol = lookup_call_symbol (tc, symbol_name);
  if (param == NULL || symbol == NULL)
    return return_error (tc, TC_NOENT);

  /* Can't bind the return value for an AOP_INSERT_BEFORE join
     point! */
  if (index == -1 && symbol->location == AOP_INSERT_BEFORE)
    return return_error (tc, TC_BAD_RETURN_BINDING);

  binding = (struct tc_call_binding *)malloc (sizeof (struct tc_call_binding));
  if (binding == NULL)
    return return_error (tc, TC_NOMEM);

  binding->call_param_index = index;
  binding->param = param;

  /* Add this binding to the list of bindings for this symbol. */
  binding->next = symbol->binding_list;
  symbol->binding_list = binding;

  return return_error (tc, TC_SUCCESS);
}

/**
 * Bind a tracecut param to a call symbol's <code>call_param</code>.
 * Binding to a <code>call_param</code> will capture that parameter at
 * runtime.
 *
 * (Since version 1.1)
 * \param tc The tracecut to add a binding to.
 * \param param_name Name of the tracecut param to bind.
 * \param symbol_name Name of the call symbol to bind to.
 * \param call_param_index Index of the <code>call_param</code> to
 * bind to (starting from 0).
 * \return #TC_SUCCESS or
 * - #TC_BAD_CONTEXT, when called after compilation has already
 *      started;
 * - #TC_INVAL, if call_param_index is negative;
 * - #TC_NOENT, if either the symbol or the binding does not exist;
 * - #TC_NOMEM, if memory runs out.
 */
enum tc_error
tc_bind_to_call_param (struct tc_tracecut *tc, const char *param_name,
		       const char *symbol_name, int call_param_index)
{
  if (tc_in_compilation)
    return return_error (tc, TC_BAD_CONTEXT);

  if (call_param_index < 0)
    return return_error (tc, TC_INVAL);

  return add_call_symbol_binding (tc, param_name, symbol_name,
				  call_param_index);
}

/**
 * Bind a tracecut param to a call symbol's return value.  Binding to
 * return value will capture that return value at runtime.
 *
 * (Since version 1.1)
 * \param tc The tracecut to add a binding to.
 * \param param_name Name of the tracecut param to bind.
 * \param symbol_name Name of the call symbol to bind to.
 * \return #TC_SUCCESS or
 * - #TC_BAD_CONTEXT, when called after compilation has already
 *      started;
 * - #TC_BAD_RETURN_BINDING, if the specified symbol has a location of
 *    #AOP_INSERT_BEFORE;
 * - #TC_NOENT, if either the symbol or the binding does not exist;
 * - #TC_NOMEM, if memory runs out.
 */
enum tc_error
tc_bind_to_return_value (struct tc_tracecut *tc, const char *param_name,
			 const char *symbol_name)
{
  if (tc_in_compilation)
    return return_error (tc, TC_BAD_CONTEXT);

  return add_call_symbol_binding (tc, param_name, symbol_name, -1);
}

/**
 * \cond HIDDEN_SYMBOLS
 */
#define MAX_FUNC_SIZE 255
/**
 * \endcond
 */

/**
 * Create a function call symbol along with its bindings in one
 * statement.  The declaration is a string containing the function
 * name and all the bindings in a special format.  To bind the first
 * and second call parameters, use the format:
 *
 * <code>"func_name(param1, param2)"</code>
 *
 * Use <code>?</code> to skip a call parameter.  To bind only the
 * second call parameter, for example:
 *
 * <code>"func_name(?, param)"</code>
 *
 * To bind the return value:
 *
 * <code>"(param)func_name()"</code>
 *
 * (Since version 1.1)
 * \param tc The tracecut to add the symbol to.
 * \param name The name used to reference this symbol.
 * \param declaration A string declaring the name of the function that
 * should trigger this symbol's event, as well as which param bindings
 * to add.
 * \param location Specifies whether the the symbol event should
 * trigger before or after the specified function is called.
 * \return #TC_SUCCESS or
 * - #TC_BAD_CONTEXT, when called after compilation has already
 *      started;
 * - #TC_INVAL, when the declaration is invalid because of syntax
 *    errors;
 * - #TC_DUPLICATE, if there already exists a symbol with the
 *    specified name;
 * - #TC_BAD_ID if name is not an acceptable identifier.  (Identifiers
 *    must only contain letters, numbers and the underscore character,
 *    with no spaces.  Identifiers are case sensitive and should be no
 *    longer than #TC_MAX_ID_SIZE.)
 * - #TC_BAD_RETURN_BINDING, if the the declaration binds the return
 *    value but the location is #AOP_INSERT_BEFORE;
 * - #TC_NOENT, if one of the parameters in the declaration does not
 *    exist;
 * - #TC_NOMEM, if memory runs out.
 */
enum tc_error
tc_declare_call_symbol (struct tc_tracecut *tc, const char *name,
			const char *declaration,
			enum aop_insert_location location)
{
  int i = 0, pos;
  int param_num;
  enum tc_error tc_err;
  char func_name[MAX_FUNC_SIZE];
  char param_name[TC_MAX_ID_SIZE];

  if (tc_in_compilation)
    return return_error (tc, TC_BAD_CONTEXT);

  strcpy (param_name, "");

  /* Eliminate white spaces */
  while (isspace(declaration[i])) 
    i++;

  /* Check if return parameter is present */
  if (declaration[i] == '(') 
    {
      /* Consume the (. */
      i++;

      /* Remove beginning spaces */
      while (isspace(declaration[i]))
	i++;

      if (declaration[i] == '?')
	{
	  /* Consume the ?. */
	  i++;
	}
      else
	{
	  /* Copy the return param */
	  pos = 0;
	  while (is_id_char(declaration[i]) && pos + 1 < TC_MAX_ID_SIZE)
	    param_name[pos++] = declaration[i++];
	  param_name[pos] = '\0';

	  /* Bad return param. */
	  if (pos == 0)
	    return return_error (tc, TC_INVAL);
	}

      while (isspace(declaration[i]))
	i++;

      /* Unmatched parenthesis. */
      if (declaration[i] != ')')
	return return_error (tc, TC_INVAL);

      i++;  /* Consume the ). */
    }

  /* Ignore the white spaces in between */
  while (declaration[i] == ' ')
    i++;

  /* Copy the function name */
  pos = 0;
  while(is_id_char(declaration[i]) && pos + 1 < MAX_FUNC_SIZE)
    func_name[pos++] = declaration[i++];
  func_name[pos] = '\0';

  while (isspace(declaration[i]))
    i++;

  if (pos == 0 || declaration[i] != '(')
    return return_error (tc, TC_INVAL);

  /* Consume the (. */
  i++;

  /* Add functiona name */
  tc_err = tc_add_call_symbol (tc, name, func_name, location);
  if (tc_err != TC_SUCCESS) 
    return tc_err;

  /* Bind return parameter */
  if (strcmp(param_name, "") != 0)
    { 
      tc_err = tc_bind_to_return_value (tc, param_name, name);

      if (tc_err != TC_SUCCESS) 
	return tc_err;
    }

  /* Parse function parameters and add them. */
  for (param_num = 0; ; param_num++)
    {
      /* Skip spaces */
      while (isspace(declaration[i]))
	i++;

      /* Special case: no paremeters. */
      if (declaration[i] == ')')
	{
	  i++;
	  break;
	}

      if (declaration[i] == '?')
	{
	  /* Consume the ? and ignore this parameter. */
	  i++;
	}
      else
	{
	  pos = 0;
	  while (is_id_char(declaration[i]) && pos + 1 < TC_MAX_ID_SIZE)
	    param_name[pos++] = declaration[i++];
	  param_name[pos] = '\0';

	  if (pos == 0)
	    return return_error (tc, TC_INVAL);

	  /* Param found, insert it */
	  tc_err = tc_bind_to_call_param (tc, param_name, name, param_num);

	  if (tc_err != TC_SUCCESS) 
	    return tc_err;
	}

      /* Skip spaces */
      while (isspace(declaration[i]))
	i++;

      if (declaration[i] == ')')
	{
	  /* Done with parameters. */
	  i++;
	  break;
	}
      else if (declaration[i] == ',')
	{
	  /* Consume the comma. */
	  i++;
	}
      else
	{
	  return return_error (tc, TC_INVAL);
	}
    }

  /* Make sure there's no junk hanging off the end of the
     declaration. */
  while (isspace(declaration[i]))
    i++;
  if (declaration[i] != '\0')
    return return_error (tc, TC_INVAL);

  return return_error (tc, TC_SUCCESS);
}

/**
 * Add a rule to a tracecut, specified as a regular expression.  A
 * tracecut regular expression can include any of the tracecut's
 * symbols (expressed with <code>symbol_name</code> strings) combined
 * with the standard <code>|</code>, <code>*</code>, <code>+</code>,
 * and <code>?</code> operators and parenthesis for grouping.
 *
 * (Since version 1.1)
 * \param tc The tracecut to add the rule to.
 * \param specification A regular expression over the alphabet of the
 * tracecut's symbols.
 * \return #TC_SUCCESS or
 * - #TC_BAD_CONTEXT, when called after compilation has already
 *      started;
 * - #TC_NOMEM, if memory runs out.
 */
enum tc_error
tc_add_rule (struct tc_tracecut *tc, const char *specification)
{
  struct tc_rule *rule;

  if (tc_in_compilation)
    return return_error (tc, TC_BAD_CONTEXT);

  rule = (struct tc_rule *)malloc (sizeof (struct tc_rule));
  if (rule == NULL)
    return return_error (tc, TC_NOMEM);

  /* TODO: Check syntax*/
  rule->specification = strdup (specification);
  if (rule->specification == NULL)
    {
      free (rule);
      return return_error (tc, TC_NOMEM);
    }

  /* Add this to the tracecut's list of rules. */
  rule->next = tc->rule_list;
  tc->rule_list = rule;

  return return_error (tc, TC_SUCCESS);
}

/**
 * Create an empty tc_tracecut object.  The caller is responsible for
 * freeing the object using tc_free_tracecut().  (Do not use the
 * standard free function.)
 *
 * (Since version 1.1)
 * \return A new tc_tracecut that must be freed with
 * tc_free_tracecut().  The return value will be NULL if allocation
 * fails or if compilation has already started..
 */
struct tc_tracecut *
tc_create_tracecut (void)
{
  struct tc_tracecut *tc;

  /* Illegal to create a tracecut once compilation has begun. */
  if (tc_in_compilation)
    return NULL;

  tc = (struct tc_tracecut *)malloc (sizeof (struct tc_tracecut));
  if (tc == NULL)
    return NULL;

  tc->index = -1;
  tc->next_param_index = 0;
  tc->next_symbol_index = 0;
  tc->param_list = NULL;
  tc->symbol_list = NULL;
  tc->tc_error = TC_SUCCESS;
  tc->rule_list = NULL;

  /* Insert this tracecut into the master list. */
  tc->next = tracecut_list;
  tracecut_list = tc;

  return tc;
}

/* Find a tracecut object in the master list and remove it (if
   found). */
static void
remove_tracecut_from_list (struct tc_tracecut *tc)
{
  struct tc_tracecut **iterator;

  for (iterator = &tracecut_list; *iterator != NULL;
       iterator = &((*iterator)->next))
    {
      if (*iterator == tc)
	{
	  *iterator = (*iterator)->next;
	  return;  /* Done. */
	}
    }
}

static void
free_param_list (struct tc_tracecut *tc)
{
  struct tc_param *param = tc->param_list;
  tc->param_list = NULL;

  while (param != NULL)
    {
      struct tc_param *next = param->next;

      free ((char *)param->name);
      param->next = NULL;
      free (param);

      param = next;
    }
}

static void
free_binding_list (struct tc_call_symbol *symbol)
{
  struct tc_call_binding *binding = symbol->binding_list;
  symbol->binding_list = NULL;

  while (binding != NULL)
    {
      struct tc_call_binding *next = binding->next;
      free (binding);

      binding = next;
    }
}

static void
free_symbol_list (struct tc_tracecut *tc)
{
  struct tc_call_symbol *symbol = tc->symbol_list;
  tc->symbol_list = NULL;

  while (symbol != NULL)
    {
      struct tc_call_symbol *next = symbol->next;

      free ((char *)symbol->name);
      free ((char *)symbol->func_name);
      free_binding_list (symbol);
      symbol->next = NULL;
      free (symbol);

      symbol = next;
    }
}

static void
free_rule_list (struct tc_tracecut *tc)
{
  struct tc_rule *rule;
  tc->rule_list = NULL;

  while (rule != NULL)
    {
      struct tc_rule *next = rule->next;

      free ((char *)rule->specification);
      rule->next = NULL;
      free (rule);

      rule = next;
    }
}

/**
 * Free all the memory used by a tc_tracecut object.  Every call to
 * tc_create_tracecut() should have a matching call to
 * tc_free_tracecut().
 *
 * (Since version 1.1)
 * \param tc The tracecut object to free.
 */
void
tc_free_tracecut (struct tc_tracecut *tc)
{
  remove_tracecut_from_list (tc);

  free_param_list (tc);
  free_symbol_list (tc);
  free_rule_list (tc);

  free(tc);
}

/* Add an advice call to the tracecut runtime notifying it that an
   event occurred and that _tc_capture_*_param() calls will follow
   to specify the event's params. */
static void
insert_begin_event_advice (struct aop_joinpoint *jp, int tc_index,
			   struct tc_call_symbol *symbol)
{
  aop_insert_advice (jp, "_tc_event_begin", symbol->location,
		     AOP_INT_CST (tc_index), AOP_TERM_ARG);
}

/* Add an advice call to _tc_capture_param for each call binding. */
static void
capture_call_bindings (struct aop_joinpoint *jp, int tc_index,
		       struct tc_call_symbol *symbol)
{
  struct tc_call_binding *binding;

  for (binding = symbol->binding_list; binding != NULL; binding = binding->next)
    {
      struct aop_dynval *param_val;
      const struct aop_type *param_type;

      if (binding->call_param_index >= 0)
	param_val = aop_capture_call_param (jp, binding->call_param_index);
      else
	param_val = aop_capture_call_return_value (jp);

      param_type = aop_get_dynval_type (param_val);

      if (aop_is_pointer_type (param_type))
	{
	  aop_cast_to_all_pointer (param_val);
	  aop_insert_advice (jp, "_tc_capture_pointer_param", symbol->location,
			     AOP_INT_CST (tc_index),
			     AOP_INT_CST (symbol->index),
			     AOP_INT_CST (binding->param->index),
			     AOP_DYNVAL (param_val), AOP_TERM_ARG);
	}
      else if (aop_is_all_signed_subtype (param_type))
        {
	  aop_cast_to_all_signed (param_val);
	  aop_insert_advice (jp, "_tc_capture_signed_int_param", symbol->location,
			     AOP_INT_CST (tc_index),
			     AOP_INT_CST (symbol->index),
			     AOP_INT_CST (binding->param->index),
			     AOP_DYNVAL (param_val), AOP_TERM_ARG);
        }
      else if (aop_is_all_unsigned_subtype (param_type))
        {
	  aop_cast_to_all_unsigned (param_val);
	  aop_insert_advice (jp, "_tc_capture_unsigned_int_param", symbol->location,
			     AOP_INT_CST (tc_index),
			     AOP_INT_CST (symbol->index),
			     AOP_INT_CST (binding->param->index),
			     AOP_DYNVAL (param_val), AOP_TERM_ARG);
        }
      else if (aop_is_all_fp_subtype (param_type))
        {
	  aop_cast_to_all_fp (param_val);
	  aop_insert_advice (jp, "_tc_capture_float_param", symbol->location,
			     AOP_INT_CST (tc_index),
			     AOP_INT_CST (symbol->index),
			     AOP_INT_CST (binding->param->index),
			     AOP_DYNVAL (param_val), AOP_TERM_ARG);
        }
      else
	{
	  /* TODO: Provide support for more kinds of data. */
	  aop_assert (0);
	}
    }  
}

/* Add an advice call to the tracecut runtime, notifying it that it
   has all params and should simulate the event transition. */
static void
insert_transition_event_advice (struct aop_joinpoint *jp, int tc_index,
				struct tc_call_symbol *symbol)
{
  aop_insert_advice (jp, "_tc_event_transition", symbol->location,
		     AOP_INT_CST (tc_index), AOP_INT_CST (symbol->index),
		     AOP_TERM_ARG);
}

/**
 * \cond HIDDEN_SYMBOLS
 */
struct join_on_call_arg {
  struct tc_tracecut *tc;
  struct tc_call_symbol *symbol;
};
/**
 * \endcond
 */

static void
join_on_call (struct aop_joinpoint *jp, void *callback_arg)
{
  struct join_on_call_arg *arg = callback_arg;
  struct tc_tracecut *tc = arg->tc;
  struct tc_call_symbol *symbol = arg->symbol;

  int tc_index = tc->index;

  /* Unfortunately, the choice of AOP_INSERT_BEFORE or
     AOP_INSERT_AFTER affects the order that inserted advice functions
     will execute. */
  if (symbol->location == AOP_INSERT_BEFORE)
    {
      /* For AOP_INSERT_BEFORE, we insert in the normal order. */
      insert_begin_event_advice (jp, tc_index, symbol);
      capture_call_bindings (jp, tc_index, symbol);
      insert_transition_event_advice (jp, tc_index, symbol);
    }
  else
    {
      /* For AOP_INSERT_AFTER, we insert in the reverse order. */
      insert_transition_event_advice (jp, tc_index, symbol);
      capture_call_bindings (jp, tc_index, symbol);
      insert_begin_event_advice (jp, tc_index, symbol);
    }
}

static void
filter_call_pointcut_by_bindings (struct aop_pointcut *pc,
				  struct tc_call_symbol *symbol)
{
  struct tc_call_binding *binding;

  for (binding = symbol->binding_list; binding != NULL; binding = binding->next)
    {
      if (binding->call_param_index >= 0)
	aop_filter_call_pc_by_param (pc, binding->call_param_index,
				     binding->param->type);
      else
	aop_filter_call_pc_by_return_type (pc, binding->param->type);
    }
}

static void
add_instrumentation_for_tracecut (struct tc_tracecut *tc)
{
  struct tc_call_symbol *symbol;

  for (symbol = tc->symbol_list; symbol != NULL; symbol = symbol->next)
    {
      struct join_on_call_arg arg;
      struct aop_pointcut *pc;

      pc = aop_match_function_call ();
      aop_filter_call_pc_by_name (pc, symbol->func_name);
      filter_call_pointcut_by_bindings (pc, symbol);

      arg.tc = tc;
      arg.symbol = symbol;
      aop_join_on (pc, join_on_call, &arg);
    }
}

/* Return the number of tracecuts in the master tracecut list. */
static int
get_num_tracecuts ()
{
  struct tc_tracecut *tc;
  int num_tracecuts = 0;

  for (tc = tracecut_list; tc != NULL; tc = tc->next)
    num_tracecuts++;

  return num_tracecuts;
}

/* Return the number of rules in a tracecut. */
static int
get_num_rules (struct tc_tracecut *tc)
{
  int num_rules = 0;
  struct tc_rule *rule;

  for (rule = tc->rule_list; rule != NULL; rule = rule->next)
    num_rules++;

  return num_rules;
}

/**
 * Adds advice calls that initialize the tracecut runtime.  You will
 * always almost want to use tc_set_main_function(), which
 * automatically adds the tracecut initialization advice, instead of
 * this function.
 *
 * If you do want to manually add tracecut initialization, you must
 * create your own InterAspect pass that finds a join point where
 * initialization should go.  This join point should execute only
 * once, right when you want tracecut monitoring to start.
 *
 * (Since version 1.1)
 * \param jp The join point to insert initialization at.
 */
void
tc_insert_tracecut_init_advice (struct aop_joinpoint *jp)
{
  int num_tracecuts;
  struct tc_tracecut *tc;

  freeze_tracecuts ();

  /* If there are no tracecuts, there's nothing to initialize! */
  num_tracecuts = get_num_tracecuts();
  if (num_tracecuts == 0)
    return;

  /* _tc_init(num_tracecuts); */
  aop_insert_advice (jp, "_tc_init", AOP_INSERT_BEFORE,
		     AOP_INT_CST (num_tracecuts), AOP_TERM_ARG);

  for (tc = tracecut_list; tc != NULL; tc = tc->next)
    {
      int i;
      struct tc_call_symbol *symbol;
      struct tc_param *param;
      struct tc_rule *rule;
      int num_params, num_symbols, num_rules;

      /* _tc_new_tracecut(tc_index, num_params, num_symbols, num_rules); */
      num_params = tc->next_param_index;
      num_symbols = tc->next_symbol_index;
      num_rules = get_num_rules (tc);
      aop_insert_advice (jp, "_tc_new_tracecut", AOP_INSERT_BEFORE,
			 AOP_INT_CST (tc->index), AOP_INT_CST (num_params),
			 AOP_INT_CST (num_symbols), AOP_INT_CST(num_rules),
			 AOP_TERM_ARG);

      for (symbol = tc->symbol_list; symbol != NULL; symbol = symbol->next)
	{
	  /* _tc_name_symbol(tc_index, symbol_index, symbol_name); */
	  aop_insert_advice (jp, "_tc_name_symbol", AOP_INSERT_BEFORE,
			     AOP_INT_CST (tc->index),
			     AOP_INT_CST (symbol->index),
			     AOP_STR_CST (symbol->name), AOP_TERM_ARG);
	}

      for (param = tc->param_list; param != NULL; param = param->next)
	{
	  /* _tc_name_param(tc_index, param_index, param_name); */
	  aop_insert_advice (jp, "_tc_name_param", AOP_INSERT_BEFORE,
			     AOP_INT_CST (tc->index),
			     AOP_INT_CST (param->index),
			     AOP_STR_CST (param->name), AOP_TERM_ARG);
	}

      for (rule = tc->rule_list, i = 0; rule != NULL; rule = rule->next, i++)
	{
	  /* _tc_compile_rule(tc_index, rule_index, specification) */
	  aop_insert_advice (jp, "_tc_compile_rule", AOP_INSERT_BEFORE,
			     AOP_INT_CST (tc->index), AOP_INT_CST(i),
			     AOP_STR_CST(rule->specification), AOP_TERM_ARG);
	}
    }
}

static void
join_on_main (struct aop_joinpoint *jp, void *data)
{
  tc_insert_tracecut_init_advice(jp);
}

static void
add_init_instrumentation ()
{
  struct aop_pointcut *pc;

  aop_assert (main_func != NULL);

  pc = aop_match_function_entry ();
  aop_filter_entry_by_name (pc, main_func);
  aop_join_on (pc, join_on_main, NULL);
}

static unsigned int
tracecut_pass (void)
{
  struct tc_tracecut *tc;

  freeze_tracecuts ();

  for (tc = tracecut_list; tc != NULL; tc = tc->next)
    add_instrumentation_for_tracecut (tc);

  if (main_func != NULL)
    add_init_instrumentation ();

  return 0;
}

/**
 * Specifies the name of the target program's <i>main</i> function.
 * The main function should be a function that executes exactly once
 * at the beginning of program execution.  Usually, <code>main</code>
 * is the obvious main function.
 *
 * The tracecut plug-in will insert tracecut runtime initialization
 * code at the entry to the main function.  For tracecut monitoring to
 * work, you must either set a main function or manually add this
 * initiliazation code using tc_insert_tracecut_init_advice().
 *
 * (Since version 1.1)
 * \param func_name The name of the main function.
 */
void
tc_set_main_function (const char *func_name)
{
  free ((char *)main_func);
  main_func = strdup (func_name);
  aop_assert (func_name != NULL);  /* This is virtually impossible! */
}

/**
 * Call this from your aop_main() function to register a pass that
 * will add tracecut instrumentation.  A tracecut plug-in will not do
 * anything without this call!
 *
 * (Since version 1.1)
 */
void
tc_register_tracecut_pass (void)
{
  aop_register_pass ("tracecut", tracecut_pass);
}

/* Close Doxygen defgroup block. */
/**
 * \}
 */
