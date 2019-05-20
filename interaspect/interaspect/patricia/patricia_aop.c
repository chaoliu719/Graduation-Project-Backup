#include <aop.h>
#include <string.h>
#include <stdio.h>

/* Every InterAspect plug-in must include this macro.  If you intend
   to distribute your plug-in, make sure to read the implications of
   this macro in the API documentation. */
AOP_I_AM_GPL_COMPATIBLE();


static void join_on_call(struct aop_joinpoint *jp, void *data)
{
  struct aop_dynval *head = aop_capture_call_param_by_type(jp, 1, aop_t_all_pointer());

  if (head != NULL) 
    aop_insert_advice(jp, "__print_tree", AOP_INSERT_AFTER, AOP_DYNVAL(head), AOP_TERM_ARG);
  
}

/* This is the plug-in pass.  It runs once per instrumented
   fuction. */
static unsigned int patricia_pass()
{
  struct aop_pointcut *pc;

  pc = aop_match_function_call();
  aop_filter_entry_by_name (pc, "pat_insert");
  aop_join_on(pc, join_on_call, NULL);

  pc = aop_match_function_call();
  aop_filter_entry_by_name (pc, "pat_remove");
  aop_join_on(pc, join_on_call, NULL);

  return 0;
}

/* This is what your main function should look like.  Most plug-ins
   only need to define on pass in their main function. */
AOP_MAIN_PROTO aop_main()
{
  aop_register_pass("patricia", patricia_pass);
}
