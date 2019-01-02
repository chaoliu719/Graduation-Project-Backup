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

#error This file serves only as documentation.  Do not compile it.

/** \mainpage The InterAspect Framework
 *
 * \section intro Introduction
 * InterAspect provides a simple framework for writing GCC plug-ins
 * that provide instrumentation.  Instrumentation consists of
 * <i>advice</i> function calls that can be inserted at various
 * program points.  For example, it is possible to insert an advice
 * call at every call to <code>malloc</code>, passing the allocated
 * size and the address of the allocated region to the advice
 * function.
 *
 * Though plug-ins built with the InterAspect framework run in GCC,
 * they depend only on InterAspect files.  An InterAspect-based
 * plug-in just needs to include the main InterAspect header file,
 * aop.h, and link with the InterAspect static library.
 *
 * All InterAspect functions begin with the <code>aop_</code> prefix.
 *
 * \section pc Pointcuts
 * An InterAspect-based plug-in finds program points in the target
 * program by constructing a <i>pointcut</i>, which is a set of points
 * in the program available for instrumentation.  These program points
 * are called <i>join points</i>.
 *
 * There are four types of pointcuts available in InterAspect, which
 * can each be constructed using a match function.  Match functions
 * have the prefix <code>aop_match_</code>.
 *
 * - \ref entry_pc "Function entry" pointcuts.
 * - \ref exit_pc "Function exit" pointcuts.
 * - \ref call_pc "Function call" pointcuts.
 * - \ref assign_pc "Assignment" pointcuts.
 *
 * After constructing a pointcut, it is possible to refine the set
 * using filter functions, which have the prefix
 * <code>aop_filter_</code>.  For example, it is possible to define a
 * pointcut that only matches calls to <code>malloc</code> using
 * aop_filter_call_pc_by_name().
 *
 * \section join_on Join operations
 * Plug-ins iterate over the join points in a pointcut using a \ref
 * join "join operation".  The plug-in provides a callback to the join
 * which gets called once for each join point.
 *
 * The callback can use capture functions (with an
 * <code>aop_capture_</code> prefix) to get information about the join
 * point.  Some capture functions return an aop_dynval, which
 * represents a value that will not be known until the join point
 * executes.
 *
 * The callback can also insert an advice call using
 * aop_insert_advice().  It is possible to pass arbitrary parameters
 * to an advice function, including dynval values.
 *
 * \section setup Setting it up
 * Creating and joining on pointcuts are operations that occur within
 * a <i>pass</i>.  In GCC, a pass is a function that executes once for
 * each compiled function, transforming the compiled function in some
 * way.  InterAspect passes transform compiled functions by adding
 * instrumentation.
 *
 * A plug-in adds one or more passes by calling aop_register_pass()
 * from its main function, which must be named <code>aop_main</code>.
 *
 * See the \ref hello.c "Hello World" sample plug-in for a simple
 * example of setting up a pass.
 *
 * \section advicetype Advice function type safety
 *
 * When inserting a call to an advice function, InterAspect cannot
 * directly check that the arguments passed to the advice match the
 * actual advice function's prototype.  To avoid type mismatches, it
 * is possible to use aop_write_c_header() to generate a header file
 * that specifies the prototypes that InterAspect expects for each
 * advice function.  You can include this header file in the file that
 * implements your advice functions to ensure that the types match.
 *
 * See the \ref advice_header.c "advice_header" sample plug-in for an
 * example of automatically generating an advice header.
 *
 * \section memory Memory management
 *
 * InterAspect functions return various data structures that are
 * dynamically allocated, but you are not responsible for managing or
 * freeing any of them.  InterAspect uses GCC's internal garbage
 * collector to free all of its data.
 *
 * Beware, however, that once a data structure's lifetime is over,
 * that structure may be deallocated while your plug-in still holds a
 * pointer to it.  Attempting to use one of these pointers will have
 * undefined results.  Make sure not to hold a reference to an object
 * past its lifetime.  The lifetime for each struct is listed in its
 * documentation.
 *
 * - struct aop_pointcut
 * - struct aop_joinpoint
 * - struct aop_dynval
 * - struct aop_type
 *
 * \section noinstrument Noinstrument
 *
 * InterAspect adds a <code>noinstrument</code> attribute that you can
 * use to disable instrumentation for a specific function in the
 * target program.  Any pass that you register with
 * aop_register_pass() will skip over functions marked
 * <code>noinstrument</code>.
 *
 * You can mark a function with this attribute using GCC's attribute
 * syntax:
 * \code
 * __attribute__((noinstrument)) void foo() {
 * \endcode
 *
 * The <code>noinstrument</code> attribute is especially useful for
 * ensuring that advice functions and the functions they call do not
 * themselves get instrumented (which can cause unbounded recursion
 * and other problems).
 *
 * \section ia_tracecut Tracecut Extension
 *
 * New to InterAspect 1.1 is the InterAspect Tracecut extension.
 * Tracecuts let you specify program monitors as regular expressions
 * over program events.  See the \ref tracecut function documentation
 * and the \ref fclose_tracecut.c "fclose_tracecut" sample plug-in.
 */

/**
 * \struct aop_pointcut
 * \brief A set of \ref aop_joinpoint "join points" in the current
 * function that are available for instrumentation.
 *
 * Create a pointcut using one of the <code>aop_match</code>
 * functions.  Some types of pointcuts can be further refined using
 * <code>aop_filter</code> functions.  Iterate through the individual
 * join points in a pointcut using the aop_join_on() function, which
 * calls an iterator function once for each of the join points in the
 * set.
 *
 * A pointcut stays valid for the duration of the compiler pass it is
 * created in.  You should never store a pointer to an aop_pointcut in
 * any global data structure, in order to avoid any accesses to the
 * join point after it becomes invalid.
 */

/**
 * \struct aop_dynval
 * \brief Representation of a runtime value.
 *
 * An aop_dynval serves as a placeholder during compile time for a
 * value that will not be known until runtime.  An aop_dynval gets
 * returned by a capture function, such as
 * aop_capture_call_return_value(), and can be passed to an advice
 * function inserted with aop_insert_advice().
 *
 * Internally, every aop_dynval has its own type, which is determined
 * by how it was captured.  For example, an aop_dynval created with
 * aop_capture_call_return_value() will have its type set based on how
 * the corresponding pointcut was filtered using
 * aop_filter_call_pc_by_return_type().  (It is an error to capture
 * the return value of a function call when the corresponding pointcut
 * was not filtered by type.  You must use
 * aop_capture_call_return_value_by_type() instead.)
 *
 * At runtime, the advice function itself simply gets the captured
 * value; it will never see the original aop_dynval object.
 *
 * Use the #AOP_DYNVAL macro when passing an aop_dynval to
 * aop_insert_advice().
 *
 * All aop_dynval objects are only valid while the aop_joinpoint used
 * to create them remains valid.  Because an aop_dynval represents a
 * value captured from a join point, all capture functions that return
 * an aop_dynval take an aop_joinpoint as a parameter.  When the
 * aop_joinpoint becomes invalid (when the current callback finishes),
 * these aop_dynval objects also become invalid.  See the
 * aop_joinpoint documentation for more information.
 */

/**
 * \struct aop_joinpoint
 * \brief A single program point that is available for
 * instrumentation.
 *
 * The only way to obtain a join point is by joining on an
 * aop_pointcut using a \ref join "join function".  Each join point
 * will be passed to the specified callback function.
 *
 * A join point is only valid during the callback's execution.  Once
 * the callback finishes, the aop_joinpoint is deallocated.  You
 * should never store a pointer to an aop_joinpoint in any global data
 * structure, in order to avoid any accesses to the join point after
 * it becomes invalid.
 */

/**
 * \struct aop_type
 * \brief A type object used to match types in the instrumented
 * program.
 *
 * Most pointcuts can be refined by type, using functions like
 * aop_match_assignment_by_type() or aop_filter_call_pc_by_param().
 * An aop_type object represents specific criteria for matching a type
 * in the target program.  As a simple example, the type returned by
 * aop_t_all_signed() will match (almost) any signed integer type
 * (int, char, int16_t, et al.).  There are several useful "all"
 * types:
 *
 * - aop_t_all_signed()
 * - aop_t_all_unsigned()
 * - aop_t_all_fp()
 * - aop_t_all_pointer()
 *
 * Additionally, there are aop_type objects for matching very specific
 * target types, such as aop_t_signed32().  See the complete list of
 * \ref type "InterAspect types".
 *
 * Besides providing filtering criteria, aop_type objects are also
 * used to specify how a parameter gets passed to an advice hook at
 * the target language level.  Every aop_dynval has an associated
 * aop_type which controls how it is represented in the hook function
 * prototype.  For example, a dynval with an associated
 * aop_t_all_signed() type will be passed as <code>int64_t</code>
 * because a 64-bit integer can hold any value that fits in one of the
 * types that aop_t_all_signed() can match.
 *
 * All aop_type objects have an indefinite lifetime: you can store
 * pointers to an aop_type anywhere without worrying that the
 * reference will become stale.  Additionally, aop_type objects are
 * stored with <a href="http://en.wikipedia.org/wiki/Hash_consing">
 * hash consing</a>, so recreating identical aop_type objects will not
 * unnecessarily consume memory.  InterAspect cleans up all aop_type
 * objects for you when the compiler exits.
 */

/**
 * \struct tc_tracecut
 * \brief A tracecut object.
 *
 * A tracecut event represents a set of program events parameterized
 * on program objects.  The tracecut runtime can monitor program
 * objects to see when an object performs a sequence of events
 * (specified with a regular expression).
 *
 * Each tracecut must be freed manually with tc_free_tracecut().
 */

/**
 * \example hello.c
 * A "hello world" example that shows the minimum setup necessary to
 * instrument every function entry.
 */

/**
 * \example advice_header.c
 * An example of a plug-in that automatically generates a header file
 * with prototypes for advice functions.
 */

/**
 * \example duplicate.c
 * A plug-in that duplicates functions so that the program can switch
 * between two kinds of instrumentation at runtime.
 */

/**
 * \example fclose_tracecut.c
 * A tracecut that triggers on an attempt to read a file after closing
 * it.
 */
