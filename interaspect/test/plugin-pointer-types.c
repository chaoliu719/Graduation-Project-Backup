#include <aop.h>
#include <stdio.h>
#include <string.h>

AOP_I_AM_GPL_COMPATIBLE();

static void plugin_join_on_call(struct aop_joinpoint *jp, void *data)
{
  const char *advice_name = data;
  const char *func;
  const char *called;
  struct aop_dynval *p;

  func = aop_get_function_name();
  if (func == NULL || strcmp(func, "run_test") != 0)
    return;

  called = aop_capture_called_function_name(jp);

  if (called == NULL || *called != '_') {
    p = aop_capture_call_param(jp, 0);
    aop_insert_advice(jp, advice_name, AOP_INSERT_BEFORE, AOP_STR_CST(called), AOP_DYNVAL(p), AOP_TERM_ARG);
  }
}

static unsigned int plugin_pointer()
{
  struct aop_pointcut *pc;

  const struct aop_type *intp;
  const struct aop_type *intpp;
  const struct aop_type *intppp;
  const struct aop_type *char_star;

  intp = aop_t_pointer_to(aop_t_signed32());
  intpp = aop_t_pointer_to(intp);
  intppp = aop_t_pointer_to(intpp);
  char_star = aop_t_pointer_to(aop_t_signed8());

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, intp);
  aop_join_on(pc, plugin_join_on_call, "_advice_p");

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, intpp);
  aop_join_on(pc, plugin_join_on_call, "_advice_pp");

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, intppp);
  aop_join_on(pc, plugin_join_on_call, "_advice_ppp");

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, char_star);
  aop_join_on(pc, plugin_join_on_call, "_advice_c_str");

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, aop_t_all_pointer());
  aop_join_on(pc, plugin_join_on_call, "_advice_any_ptr");

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, aop_t_pointer_to(aop_t_all_pointer()));
  aop_join_on(pc, plugin_join_on_call, "_advice_any_ptr_ptr");

  return  0;
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
  aop_register_pass("float", plugin_pointer);
}
