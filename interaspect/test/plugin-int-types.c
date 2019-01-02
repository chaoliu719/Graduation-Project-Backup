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

static unsigned int plugin_int()
{
  struct aop_pointcut *pc;

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, aop_t_all_signed());
  aop_join_on(pc, plugin_join_on_call, "_advice_signed");

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, aop_t_all_unsigned());
  aop_join_on(pc, plugin_join_on_call, "_advice_unsigned");

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, aop_t_signed8());
  aop_join_on(pc, plugin_join_on_call, "_advice_signed8");

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, aop_t_signed16());
  aop_join_on(pc, plugin_join_on_call, "_advice_signed16");

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, aop_t_signed32());
  aop_join_on(pc, plugin_join_on_call, "_advice_signed32");

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, aop_t_signed64());
  aop_join_on(pc, plugin_join_on_call, "_advice_signed64");

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, aop_t_signed128());
  aop_join_on(pc, plugin_join_on_call, "_advice_signed128");

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, aop_t_unsigned8());
  aop_join_on(pc, plugin_join_on_call, "_advice_unsigned8");

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, aop_t_unsigned16());
  aop_join_on(pc, plugin_join_on_call, "_advice_unsigned16");

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, aop_t_unsigned32());
  aop_join_on(pc, plugin_join_on_call, "_advice_unsigned32");

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, aop_t_unsigned64());
  aop_join_on(pc, plugin_join_on_call, "_advice_unsigned64");

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, aop_t_unsigned128());
  aop_join_on(pc, plugin_join_on_call, "_advice_unsigned128");

  return 0;
}

void aop_finish()
{
  const char *header;
  header = aop_get_arg_value("header");

  if (header != NULL) {
    int res;
    res = aop_write_c_header(header, "_INT_HEADER_", NULL, NULL);
    if (res != 0)
      perror(header);
  }
}

AOP_MAIN_PROTO aop_main()
{
  aop_register_pass("int", plugin_int);
}
