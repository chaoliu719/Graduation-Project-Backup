#include <aop.h>
#include <stdio.h>

AOP_I_AM_GPL_COMPATIBLE();

static void plugin_join_on_float_exit(struct aop_joinpoint *jp, void *data)
{
  struct aop_dynval *retval = aop_capture_exit_return_value(jp);
  aop_insert_advice(jp, "_float_advice", AOP_INSERT_BEFORE, AOP_DYNVAL(retval), AOP_TERM_ARG);
}

static void plugin_join_on_string_exit(struct aop_joinpoint *jp, void *data)
{
  struct aop_dynval *retval = aop_capture_exit_return_value_by_type(jp, aop_t_cstring ());
  if (retval != NULL)
    aop_insert_advice(jp, "_string_advice", AOP_INSERT_BEFORE, AOP_DYNVAL(retval), AOP_TERM_ARG);
}

static unsigned int plugin_return()
{
  struct aop_pointcut *pc;

  pc = aop_match_function_exit();
  aop_filter_exit_by_return_type(pc, aop_t_all_fp());
  aop_join_on(pc, plugin_join_on_float_exit, NULL);

  pc = aop_match_function_exit();
  /* Do the filtering inside the join iterator instead. */
  /* aop_filter_exit_by_return_type(pc, char_star); */
  aop_join_on(pc, plugin_join_on_string_exit, NULL);

  return 0;
}

AOP_MAIN_PROTO aop_main()
{
  aop_register_pass("return", plugin_return);
}
