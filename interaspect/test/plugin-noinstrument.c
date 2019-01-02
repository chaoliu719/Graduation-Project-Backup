#include <aop.h>
#include <stdio.h>
#include <string.h>

AOP_I_AM_GPL_COMPATIBLE();

static void plugin_join_on_foo(struct aop_joinpoint *jp, void *data)
{
  aop_insert_advice(jp, "_advice_foo", AOP_INSERT_BEFORE, AOP_TERM_ARG);
}

static unsigned int plugin_noinstr()
{
  struct aop_pointcut *pc;

  pc = aop_match_function_call();
  aop_filter_call_pc_by_name (pc, "foo");
  aop_join_on(pc, plugin_join_on_foo, NULL);

  return 0;
}

AOP_MAIN_PROTO aop_main()
{
  aop_register_pass("noinstr", plugin_noinstr);
}
