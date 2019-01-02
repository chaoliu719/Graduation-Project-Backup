#include <aop.h>
#include <stdio.h>
#include <string.h>

AOP_I_AM_GPL_COMPATIBLE();

static void plugin_join_on_call(struct aop_joinpoint *jp, void *data)
{
  const char *advice_name = data;
  const char *name;
  struct aop_dynval *n;

  name = aop_capture_called_function_name(jp);
  n = aop_capture_call_param(jp, 0);
  aop_insert_advice(jp, advice_name, AOP_INSERT_BEFORE, AOP_STR_CST(name), AOP_DYNVAL(n), AOP_DYNVAL(n), AOP_TERM_ARG);
}

static unsigned int plugin_float()
{
  struct aop_pointcut *pc;

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, aop_t_all_fp());
  aop_join_on(pc, plugin_join_on_call, "_advice_all");

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, aop_t_float32());
  aop_join_on(pc, plugin_join_on_call, "_advice_32");

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, aop_t_float64());
  aop_join_on(pc, plugin_join_on_call, "_advice_64");

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, aop_t_long_double());
  aop_join_on(pc, plugin_join_on_call, "_advice_128");

  return 0;
}

void aop_finish()
{
  const char *header;

  fprintf (stderr, "FINISH HIM!\n");

  header = aop_get_arg_value("header");

  if (header != NULL) {
    int res;
    res = aop_write_c_header(header, "_FLOAT_HEADER_", NULL, NULL);
    if (res != 0)
      perror(header);
  }
}

AOP_MAIN_PROTO aop_main()
{
  aop_register_pass("float", plugin_float);
}
