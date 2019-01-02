#include <aop.h>
#include <tracecut.h>
#include <stddef.h>

AOP_I_AM_GPL_COMPATIBLE();

static struct tc_tracecut *tc_foo;
static struct tc_tracecut *tc_bar;
static struct tc_tracecut *tc_both;

AOP_MAIN_PROTO aop_main()
{
  /* Tracecut for foo objects. */
  tc_foo = tc_create_tracecut();

  tc_add_param(tc_foo, "foo", aop_t_struct_ptr("foo"));

  tc_add_call_symbol(tc_foo, "get", "get_foo", AOP_INSERT_AFTER);
  tc_bind_to_return_value(tc_foo, "foo", "get");

  tc_add_call_symbol(tc_foo, "inc", "inc_foo", AOP_INSERT_AFTER);
  tc_bind_to_call_param(tc_foo, "foo", "inc", 0);

  tc_add_call_symbol(tc_foo, "dec", "dec_foo", AOP_INSERT_AFTER);
  tc_bind_to_call_param(tc_foo, "foo", "dec", 0);

  tc_add_rule(tc_foo, "get inc* dec");

  aop_assert(tc_error_code(tc_foo) == TC_SUCCESS);

  /* Tracecut for bar objects. */
  tc_bar = tc_create_tracecut();

  tc_add_param(tc_bar, "bar", aop_t_struct_ptr("bar"));

  tc_add_call_symbol(tc_bar, "get", "get_bar", AOP_INSERT_AFTER);
  tc_bind_to_return_value(tc_bar, "bar", "get");

  tc_add_call_symbol(tc_bar, "double", "double_bar", AOP_INSERT_AFTER);
  tc_bind_to_call_param(tc_bar, "bar", "double", 0);

  tc_add_call_symbol(tc_bar, "half", "half_bar", AOP_INSERT_AFTER);
  tc_bind_to_call_param(tc_bar, "bar", "half", 0);

  tc_add_rule(tc_bar, "get double* half");

  aop_assert(tc_error_code(tc_bar) == TC_SUCCESS);

  /* Tracecut for both objects. */
  tc_both = tc_create_tracecut();

  tc_add_param(tc_both, "foo", aop_t_struct_ptr("foo"));
  tc_add_param(tc_both, "bar", aop_t_struct_ptr("bar"));

  tc_add_call_symbol(tc_both, "transfer", "transfer", AOP_INSERT_AFTER);
  tc_bind_to_call_param(tc_both, "foo", "transfer", 0);
  tc_bind_to_call_param(tc_both, "bar", "transfer", 1);

  tc_add_rule(tc_both, "transfer transfer");

  aop_assert(tc_error_code(tc_both) == TC_SUCCESS);

  tc_set_main_function("run_test");
  tc_register_tracecut_pass();
}

void aop_finish()
{
  tc_free_tracecut(tc_foo);
  tc_free_tracecut(tc_bar);
  tc_free_tracecut(tc_both);
}
