#include <aop.h>
#include <tracecut.h>
#include <stddef.h>

AOP_I_AM_GPL_COMPATIBLE();

static struct tc_tracecut *tc_foo;
static struct tc_tracecut *tc_bar;
static struct tc_tracecut *tc_both;
static struct tc_tracecut *tc_int;
static struct tc_tracecut *tc_uint;
static struct tc_tracecut *tc_fp;

AOP_MAIN_PROTO aop_main()
{
  enum tc_error tcerr;

  /* Tracecut for foo objects. */
  tc_foo = tc_create_tracecut();

  tc_add_param(tc_foo, "foo", aop_t_struct_ptr("foo"));

  tcerr = tc_declare_call_symbol(tc_foo, "get", "(foo) get_foo()", AOP_INSERT_AFTER);

  tcerr = tc_declare_call_symbol(tc_foo, "inc", "inc_foo(foo)", AOP_INSERT_AFTER);

  tcerr = tc_declare_call_symbol(tc_foo, "dec", "dec_foo(foo)", AOP_INSERT_AFTER);

  tc_add_rule(tc_foo, "inc* dec");
  
  aop_assert(tc_error_code(tc_foo) == TC_SUCCESS);
  
  /* Tracecut for bar objects. */
  tc_bar = tc_create_tracecut();

  tc_add_param(tc_bar, "bar", aop_t_struct_ptr("bar"));

  tcerr = tc_declare_call_symbol(tc_bar, "get", "get_bar(bar)", AOP_INSERT_AFTER);

  tcerr = tc_declare_call_symbol(tc_bar, "double", "double_bar(bar)", AOP_INSERT_AFTER);
  
  tcerr = tc_declare_call_symbol(tc_bar, "half", "half_bar(bar)", AOP_INSERT_AFTER);
  
  tc_add_rule(tc_bar, "get double* half");

  aop_assert(tc_error_code(tc_bar) == TC_SUCCESS);
  
  /* Tracecut for both objects. */
  tc_both = tc_create_tracecut();

  tc_add_param(tc_both, "foo", aop_t_struct_ptr("foo"));
  tc_add_param(tc_both, "bar", aop_t_struct_ptr("bar"));
  
  tcerr = tc_declare_call_symbol(tc_both, "transfer", "transfer(foo, bar)", AOP_INSERT_AFTER);
  
  tc_add_rule(tc_both, "transfer transfer");

  aop_assert(tc_error_code(tc_both) == TC_SUCCESS);

  /* Tracecut for signed int objects. */
  tc_int = tc_create_tracecut();

  tcerr = tc_add_param(tc_int, "int_val", aop_t_signed32());

  tcerr = tc_declare_call_symbol(tc_int, "inc_int", "inc_int(int_val)", AOP_INSERT_AFTER);
  
  tcerr = tc_declare_call_symbol(tc_int, "dec_int", "dec_int(int_val)", AOP_INSERT_AFTER);
  
  tcerr = tc_add_rule(tc_int, "inc_int* dec_int");
 
  aop_assert(tc_error_code(tc_int) == TC_SUCCESS);

  /* Tracecut for unsigned int objects. */
  tc_uint = tc_create_tracecut();

  tcerr = tc_add_param(tc_uint, "uint_val", aop_t_unsigned32());

  tcerr = tc_declare_call_symbol(tc_uint, "inc_uint", "inc_uint(uint_val)", AOP_INSERT_AFTER);
  
  tcerr = tc_declare_call_symbol(tc_uint, "dec_uint", "dec_uint(uint_val)", AOP_INSERT_AFTER);
  
  tcerr = tc_add_rule(tc_uint, "inc_uint* dec_uint");
 
  aop_assert(tc_error_code(tc_uint) == TC_SUCCESS);

  /* Tracecut for float objects. */
  tc_fp = tc_create_tracecut();

  tcerr = tc_add_param(tc_fp, "fp_val", aop_t_float32());
  aop_assert (tcerr == TC_SUCCESS);

  tcerr = tc_declare_call_symbol(tc_fp, "inc_fp", "inc_fp(fp_val)", AOP_INSERT_AFTER);
  
  tcerr = tc_declare_call_symbol(tc_fp, "dec_fp", "dec_fp(fp_val)", AOP_INSERT_AFTER);

  tcerr = tc_add_rule(tc_fp, "inc_fp* dec_fp");
 
  aop_assert(tc_error_code(tc_fp) == TC_SUCCESS);
  
  tc_set_main_function("run_test");
  tc_register_tracecut_pass();
}

void aop_finish()
{
  tc_free_tracecut(tc_foo);
  tc_free_tracecut(tc_bar);
  tc_free_tracecut(tc_both);
}
