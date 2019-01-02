#include <aop.h>
#include <stdio.h>

AOP_I_AM_GPL_COMPATIBLE();

static void plugin_join_on_entry(struct aop_joinpoint *jp, void *data)
{
  double blah = 2.5;
  aop_insert_advice(jp, "_foo_advice", AOP_INSERT_BEFORE, AOP_STR_CST("dead"), AOP_INT_CST(10),
		    AOP_DOUBLE_CST(blah), AOP_VOIDP_CST((void *)0xdeadbeef), AOP_STR_CST("beef"),
		    AOP_TERM_ARG);
}

static unsigned int plugin_cst()
{
  struct aop_pointcut *pc;

  pc = aop_match_function_entry();
  aop_filter_entry_by_name(pc, "foo");
  aop_join_on(pc, plugin_join_on_entry, NULL);

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
  aop_register_pass("cst", plugin_cst);
}
