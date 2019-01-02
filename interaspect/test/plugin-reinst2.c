#include <aop.h>
#include <stdio.h>
#include <string.h>

/* In the test case, this plug-in is called immediately after
   plugin-reinst1. */

AOP_I_AM_GPL_COMPATIBLE();

static void plugin_join_on_advice(struct aop_joinpoint *jp, void *data)
{
  struct aop_dynval *n;

  n = aop_capture_call_param(jp, 0);
  aop_insert_advice(jp, "_advice_hook_good", AOP_INSERT_BEFORE, AOP_DYNVAL(n), AOP_TERM_ARG);
}

static unsigned int plugin_reinst3()
{
  struct aop_pointcut *pc;

  /* This _will_ match one of the advice functions inserted by
     plugin-reinst1.  InterAspect's memory of the advice functions it
     inserts does not extend to other InterAspect plug-ins.  */
  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, aop_t_all_signed());
  aop_join_on(pc, plugin_join_on_advice, NULL);

  return 0;
}

AOP_MAIN_PROTO aop_main()
{
  aop_register_pass("reinst3", plugin_reinst3);
}
