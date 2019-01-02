#include <aop.h>
#include <stdio.h>
#include <string.h>

AOP_I_AM_GPL_COMPATIBLE();

static void plugin_join_on_foo(struct aop_joinpoint *jp, void *data)
{
  struct aop_dynval *n;

  n = aop_capture_call_param(jp, 1);
  aop_insert_advice(jp, "_advice_foo", AOP_INSERT_BEFORE, AOP_DYNVAL(n), AOP_TERM_ARG);
}

static void plugin_join_on_advice(struct aop_joinpoint *jp, void *data)
{
  struct aop_dynval *n;

  n = aop_capture_call_param(jp, 0);
  aop_insert_advice(jp, "_advice_hook_bad", AOP_INSERT_BEFORE, AOP_DYNVAL(n), AOP_TERM_ARG);
}

static unsigned int plugin_reinst1()
{
  struct aop_pointcut *pc;

  /* This will match the call to foo, which takes an int as its second
     paramter. */
  pc = aop_match_function_call();
  aop_filter_call_pc_by_name(pc, "foo");
  aop_filter_call_pc_by_param(pc, 1, aop_t_all_signed());
  aop_join_on(pc, plugin_join_on_foo, NULL);

  /* This would match the advice function that we inserted in the
     previous join.  Of course, that should not happen because we
     added checks to prevent any pointcut from matching an advice
     call! */
  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, aop_t_all_signed());
  aop_join_on(pc, plugin_join_on_advice, NULL);

  return 0;
}

static unsigned int plugin_reinst2()
{
  struct aop_pointcut *pc;

  /* Try _again_ to match an advice function call!  Being in another
     pass should not thwart InterAspect's memory of its own advice
     functions. */
  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, aop_t_all_signed());
  aop_join_on(pc, plugin_join_on_advice, NULL);

  return 0;
}

AOP_MAIN_PROTO aop_main()
{
  aop_register_pass("reinst1", plugin_reinst1);
  aop_register_pass("reinst2", plugin_reinst2);
}
