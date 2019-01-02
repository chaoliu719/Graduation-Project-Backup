#ifndef __AOP_TRACECUT_ADVICE_H__
#define __AOP_TRACECUT_ADVICE_H__

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
 * \file tracecut-advice.h
 * \brief Public interface for implementing tracecut advice functions.
 *
 * When the tracecut monitoring engine matches a tracecut rule, it
 * calls the tracecut match function, tc_report_match().  By default,
 * tc_report_match() just prints information about the match to
 * <code>stderr</code>, but it is possible to override
 * tc_report_match() to perform some other action.
 *
 * Note that this include file is not intended for tracecut
 * <i>plug-ins</i>.  Rather, it is intended for tracecut advice, which
 * gets compiled and linked with the target program.
 */

/**
 * \brief Value of a param.
 *
 * Stores the value of a param, along with what kind of param it is.
 * There are four kinds of param, PV_POINTER, PV_SIGNED_INT,
 * PV_UNSIGNED_INT, and PV_FP.  PV_VACANT is used internally; no param
 * with kind PV_VACANT will ever be passed to tc_report_match().
 *
 * The param's value itself is stored in a transparent union.  You
 * should only ever access the vaue using the union member that
 * corresponds to the param's kind.  You can access a transparent
 * union member as if it were a member of the struct.
 */
struct param_val {
  enum {
    PV_VACANT = 0,
    PV_POINTER,
    PV_SIGNED_INT,
    PV_UNSIGNED_INT,
    PV_FP
  } kind;

  union {
    uintptr_t ptr_value;
    int64_t int_value;
    uint64_t uint_value;
    double fp_value;
  };
};

/**
 * \brief The name and value of a param.
 */
struct matched_param
{
  const char *name;
  const struct param_val *value;
};

/**
 * This function gets called at runtime when a tracecut rule matches.
 * Because it is marked as a weak symbol, if the target program (or
 * some other library) implements tc_report_match(), it will override
 * the default implementation.
 *
 * The default implementation prints the symbol that triggered the
 * match and the value of each param to <code>stderr</code>.
 *
 * \param symbol The name of the symbol that triggered the match.
 * \param param_array A list of params associated with the tracecut.
 * Each entry in the array has the param's name, as well as its value.
 * \param num_params The number of elements in the param_array list.
 */
extern void tc_report_match (const char *symbol,
			     const struct matched_param *param_array,
			     int num_params);

#endif
