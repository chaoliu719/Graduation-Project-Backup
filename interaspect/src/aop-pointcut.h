#ifndef __AOP_POINTCUT_H__
#define __AOP_POINTCUT_H__

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

/* This is a private header.  Do not include it in source file for
   client plug-ins. */

#include "aop-callback.h"

struct aop_joinpoint;
struct aop_type;

enum aop_pckind {
  ATP_ASSIGN,
  ATP_ENTRY,
  ATP_EXIT,
  ATP_CALL
};

/* An aop_param_desc describes a single function parameter, including
   its type. */
struct aop_param_desc {
  int param_index;
  const struct aop_type *type;

  struct aop_param_desc *next;
};

/* Information specific to assignment pointcuts. */
struct aop_pc_assign {
  const struct aop_type *type;

  /* If true, include assignments to temporary variables in the
     pointcut.  This is false by default. */
  bool include_temp_vars;
};

struct aop_pc_entry {
  const char *function_name;
};

struct aop_pc_exit {
  const struct aop_type *return_type;
};

struct aop_pc_fun_call {
  const char *function_name;
  const struct aop_type *return_type;
  struct aop_param_desc *param_list_head;
};

/* An AOP pointcut represents the a set of joinponts: locations in the
   source code that are available for inserting instrumentation.

   In practice, we do not directly store the set of joinpoints.
   Instead, we store a description of the set that a join function can
   use to find matching joinpoints. */
struct aop_pointcut {
  enum aop_pckind kind;

  void (*join_on) (struct aop_pointcut *, join_callback, void *);
  void (*join_on_copy) (struct aop_pointcut *, int copy, join_callback, void *);
  insert_callback insert_before;
  insert_callback insert_after;

  /* prepare_for_weave() gets called once for each joinpoint before
     any advice gets inserted at that joinpoint.  */
  void (*prepare_for_weave) (struct aop_joinpoint *);

  struct aop_param_desc *in_param_list_head;

  union {
    struct aop_pc_assign pc_assign;
    struct aop_pc_entry pc_entry;
    struct aop_pc_exit pc_exit;
    struct aop_pc_fun_call pc_call;
  };

  /* True if the pointcut needs regimplification after join_on */
  bool need_regimplification;
};

/* An AOP joinpoint represents a specific location in the code where
   it is possible to insert instrumentation.  Because joinpoints are
   passed to do_weave functions, they must have all the information
   necessary to directly add a hook function. */
struct aop_joinpoint {
  /* The pointcut that this joinpoint is a member of. */
  struct aop_pointcut *pc;

  /* A GCC iterator for where weave functions can insert their
     instrumentation.*/
  gimple_stmt_iterator *gsi;

  /* The GIMPLE statement being instrumented (where relevant). */
  gimple stmt;

  /* The control-flow graph edge representing function entry (used
     only for the function entry pointcut). */
  edge in_edge;

  /* True if prepare_for_weave() has been called for this
     joinpoint. */
  bool is_prepared;
  /* The line number corresponding to the joinpoint */
  int line;
  /* The file name corresponding to the joinpoint */
  const char *file;
};

struct aop_pointcut *create_pointcut (enum aop_pckind kind);

void init_joinpoint (struct aop_joinpoint *jp, gimple_stmt_iterator *gsi,
		     struct aop_pointcut *pc, gimple stmt, int line, 
		     const char *file);

void op_default_prepare_for_weave (struct aop_joinpoint *jp);
void op_default_insert_before (struct aop_joinpoint *jp, gimple stmt);
void op_default_insert_after (struct aop_joinpoint *jp, gimple stmt);

bool check_in_params (struct aop_pointcut *pc);
#endif
