/* This sample plug-in shows how to duplicate a function.  Compile it
   with:

   make libduplicate.so

   The compiled plug-in will duplicate every function that takes a
   signed integer parameter, instrumenting the entry with a
   distributor that has the prototype:

   int _distrib(const char *function_name, int64_t int_param);
 */

#include <aop.h>

AOP_I_AM_GPL_COMPATIBLE();

static void plugin_join_on_entry(struct aop_joinpoint *jp, void *data)
{
  const char *name;
  struct aop_dynval *param;
  int *duplicated = (int *)data;

  name = aop_get_function_name();
  param = aop_capture_in_param(jp, 0);
  aop_duplicate(jp, "_distrib", AOP_STR_CST(name), AOP_DYNVAL(param),
		AOP_TERM_ARG);
  *duplicated = 1;
}

static void plugin_join_on_exit(struct aop_joinpoint *jp, void *data)
{
  aop_insert_advice(jp, "_exit_advice", AOP_INSERT_BEFORE,
		    AOP_STR_CST((const char *)data), AOP_TERM_ARG);
}

static unsigned int plugin_duplicate()
{
  struct aop_pointcut *pc;
  int duplicated = 0;

  pc = aop_match_function_entry();
  aop_filter_by_in_param(pc, 0, aop_t_all_signed());
  aop_join_on(pc, plugin_join_on_entry, &duplicated);

  if (duplicated) {
    pc = aop_match_function_exit();
    aop_join_on_copy(pc, 0, plugin_join_on_exit, "Left");
    aop_join_on_copy(pc, 1, plugin_join_on_exit, "Right");
  }

  return 0;
}

AOP_MAIN_PROTO aop_main()
{
  aop_register_pass("duplicate", plugin_duplicate);
}
