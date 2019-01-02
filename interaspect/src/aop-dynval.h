#ifndef __AOP_DYNVAL_H__
#define __AOP_DYNVAL_H__

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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/* This is a private header.  Do not include it in source files for
   client plug-ins. */

struct aop_joinpoint;
struct aop_type;

enum aop_dvkind {
  ADV_LHS_ADDR,
  ADV_FUN_PARAM,
  ADV_FUN_RETVAL,
  ADV_EXIT_RETVAL,
  ADV_ASSIGN_VAL,
};

struct aop_dynval_in_param {
  int param_index;
};

struct aop_dynval_fun_call {
  int param_index;
};

/* An aop-dynval represents a dynamic value in the target program that
   can be passed to an advice function.  AOP weaving functions (such
   as aop_insert_advice()) use a dynval to create instrumentation that
   extract the dynamic value at run time. */
struct aop_dynval
{
  enum aop_dvkind kind;
  const struct aop_type *type;
  struct aop_joinpoint *jp;
 
  union {
    struct aop_dynval_fun_call dynval_call;
    struct aop_dynval_in_param dynval_in_param;
  };

  /* Ops vector for aop_dynval. */
  /* The get_dynval() op gets called when an advice call gets
     inserted.  It should add whatever gimple statements are necessary
     to create a GCC tree object that can be used as an argument to a
     GIMPLE call and then return that tree. */
  tree (*get_dynval)(struct aop_dynval *);
};

#endif
