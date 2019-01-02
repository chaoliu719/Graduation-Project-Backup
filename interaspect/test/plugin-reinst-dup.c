#include <aop.h>
#include <stdio.h>
#include <string.h>

AOP_I_AM_GPL_COMPATIBLE();

int duplicated = 0;

static void plugin_join_on_entry(struct aop_joinpoint *jp, void *data)
{
  const char *name;

  name = aop_get_function_name();
  if (name != NULL && strcmp(name, "foo") == 0) {
    aop_duplicate(jp, "_distrib", AOP_TERM_ARG);
    duplicated = 1;
  }
  else {
    duplicated = 0;
  }
}

static void plugin_join_on_assign(struct aop_joinpoint *jp, void *data)
{
  aop_insert_advice(jp, "_assign_advice", AOP_INSERT_BEFORE, AOP_TERM_ARG);
}

static unsigned int plugin_reinst_dup()
{
  struct aop_pointcut *pc;

  pc = aop_match_function_entry();
  aop_join_on(pc, plugin_join_on_entry, NULL);

  if (duplicated) {
    /* Duplication creates an assignment that we might accidentally
       match during a join.  (This test is primarily to make sure that
       doesn't happen! */
    pc = aop_match_assignment_by_type(aop_t_all_signed());
    aop_filter_include_temps (pc);
    aop_join_on(pc, plugin_join_on_assign, NULL);
  }

  return 0;
}

AOP_MAIN_PROTO aop_main()
{
  aop_register_pass("reinst-dup", plugin_reinst_dup);
}
