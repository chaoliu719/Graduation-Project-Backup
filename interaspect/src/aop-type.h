#ifndef __AOP_TYPE_H__
#define __AOP_TYPE_H__

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

enum aop_tykind {
  ATK_SIGNED_INT,
  ATK_UNSIGNED_INT,
  ATK_FP,
  ATK_ALL_POINTER,

  ATK_STRUCT,
  ATK_UNION,
  ATK_ENUM,
};

/* NB: Do not update this struct without updating the correspodning
   equality (eq_type_table()) and hash (hash_type_table()) functions
   in aop-type.c. */
struct aop_type {
  enum aop_tykind kind;

  int pointer_levels;
  const char *tag;

  int size;
};

extern void init_type_table ();
extern void free_type_table ();

extern bool is_all_integer_type (const struct aop_type *type);
extern bool is_all_fp_type (const struct aop_type *type);
extern bool does_type_match (tree gcc_type, const struct aop_type *aop_type);

extern bool are_types_equal (const struct aop_type *a,
			     const struct aop_type *b);
extern int format_c_type (const struct aop_type *type, int n, char *output);

#endif
