#include <aop.h>
#include <stdio.h>
#include <string.h>

AOP_I_AM_GPL_COMPATIBLE();

int duplicated = 0;

static void plugin_join_on_entry(struct aop_joinpoint *jp, void *data)
{
  struct aop_dynval *param;

  param = aop_capture_in_param(jp, 0);
  aop_duplicate(jp, "_distrib", AOP_DYNVAL(param), AOP_TERM_ARG);
  duplicated = 1;
}

static void plugin_join_on_bar(struct aop_joinpoint *jp, void *data)
{
  aop_insert_advice(jp, "_bar_advice", AOP_INSERT_BEFORE, AOP_TERM_ARG);
}

static void plugin_join_on_assign(struct aop_joinpoint *jp, void *data)
{
  aop_insert_advice(jp, "_assign_advice", AOP_INSERT_BEFORE, AOP_TERM_ARG);
}

static void plugin_join_on_entry2(struct aop_joinpoint *jp, void *data)
{
  int line = aop_capture_lineno(jp);
  aop_insert_advice(jp, "_entry_advice", AOP_INSERT_BEFORE, AOP_STR_CST((const char *)data), AOP_INT_CST(line), AOP_TERM_ARG);
}

static void plugin_join_on_exit(struct aop_joinpoint *jp, void *data)
{
  aop_insert_advice(jp, "_exit_advice", AOP_INSERT_BEFORE, AOP_STR_CST((const char *)data), AOP_TERM_ARG);
}

static unsigned int plugin_duplicate()
{
  struct aop_pointcut *pc;

  duplicated = 0;
  pc = aop_match_function_entry();
  aop_filter_entry_by_name(pc, "foo");
  aop_filter_by_in_param(pc, 0, aop_t_all_signed());
  aop_join_on(pc, plugin_join_on_entry, NULL);

  if (duplicated) {
    pc = aop_match_function_call();
    aop_filter_call_pc_by_name(pc, "bar");
    aop_join_on_copy(pc, 0, plugin_join_on_bar, NULL);

    pc = aop_match_assignment_by_type(aop_t_all_signed());
    aop_join_on_copy(pc, 1, plugin_join_on_assign, NULL);

    pc = aop_match_function_entry();
    aop_join_on_copy(pc, 0, plugin_join_on_entry2, "Zero");
    aop_join_on_copy(pc, 1, plugin_join_on_entry2, "One");
    aop_join_on(pc, plugin_join_on_entry2, "Before distributor");

    pc = aop_match_function_exit();
    aop_join_on_copy(pc, 0, plugin_join_on_exit, "Zero");
    aop_join_on_copy(pc, 1, plugin_join_on_exit, "One");
  }

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
  aop_register_pass("duplicate", plugin_duplicate);
}
