#ifndef __AOP_DUPLICATE_H__
#define __AOP_DUPLICATE_H__

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

/* This is a private header.  Do not include it in source files for
   client plug-ins. */

typedef struct bb_pair {
  basic_block old;
  basic_block new;
} bb_pair;

DEF_VEC_O(bb_pair);
DEF_VEC_ALLOC_O(bb_pair, gc);

#define FOR_EACH_BB_PAIR(pairs, index, pair)	\
  for ((index) = 0; VEC_iterate (bb_pair, pairs, index, pair); (index)++)

extern basic_block distributor_bb;
extern VEC(bb_pair, gc) *bb_pairs;

extern bool is_current_func_duplicated ();
extern void duplicate_function_body (const char *tmpvar_name, gimple call);

#endif
