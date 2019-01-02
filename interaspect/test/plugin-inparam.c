#include <aop.h>
#include <stdio.h>
#include <string.h>

AOP_I_AM_GPL_COMPATIBLE();

static void plugin_join_on_call(struct aop_joinpoint *jp, void *data)
{
  const char *advice_name = data;
  struct aop_dynval *p1;
  struct aop_dynval *p2;

  p1 = aop_capture_in_param(jp, 0);
  p2 = aop_capture_in_param_by_type(jp, 1, aop_t_all_fp());
  if (p2 != NULL)
    aop_insert_advice(jp, advice_name, AOP_INSERT_BEFORE, AOP_DYNVAL(p1), AOP_DYNVAL(p2), AOP_TERM_ARG);
}

static unsigned int plugin_int()
{
  struct aop_pointcut *pc;

  pc = aop_match_function_entry();
  aop_filter_entry_by_name(pc, "foo");
  aop_filter_by_in_param(pc, 0, aop_t_all_signed());
  aop_join_on(pc, plugin_join_on_call, "_advice_foo");

  return 0;
}

void aop_finish()
{
  const char *header;
  header = aop_get_arg_value("header");

  if (header != NULL) {
    int res;
    res = aop_write_c_header(header, NULL, NULL, NULL);
    if (res != 0)
      perror(header);
  }
}

AOP_MAIN_PROTO aop_main()
{
  aop_register_pass("int", plugin_int);
}
