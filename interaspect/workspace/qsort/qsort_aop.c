#include <aop.h>
#include <string.h>
#include <stdio.h>

/* Every InterAspect plug-in must include this macro.  If you intend
   to distribute your plug-in, make sure to read the implications of
   this macro in the API documentation. */
AOP_I_AM_GPL_COMPATIBLE();

/* This is the function entry callback.  It gets called once for each
   function entry join point. */
static void join_on_entry(struct aop_joinpoint *jp, void *data)
{
  aop_insert_advice(jp, "__inc_compare_cnt", AOP_INSERT_AFTER, AOP_TERM_ARG);
}

static void join_on_call(struct aop_joinpoint *jp, void *data)
{
  struct aop_dynval *count = aop_capture_call_param_by_type(jp, 1, aop_t_all_unsigned());

  if (count != NULL) 
    aop_insert_advice(jp, "__cal_total_lines", AOP_INSERT_BEFORE, AOP_DYNVAL(count), AOP_TERM_ARG);

  aop_insert_advice(jp, "__cal_rate", AOP_INSERT_AFTER, AOP_TERM_ARG);
  
}

/* This is the plug-in pass.  It runs once per instrumented
   fuction. */
static unsigned int qsort_pass()
{
  struct aop_pointcut *pc;

  pc = aop_match_function_entry();
  aop_filter_entry_by_name (pc, "compare");
  aop_join_on(pc, join_on_entry, NULL);

  pc = aop_match_function_call();
  aop_filter_call_pc_by_name(pc, "qsort");
  aop_join_on(pc, join_on_call, NULL);

  return 0;
}

/* This is what your main function should look like.  Most plug-ins
   only need to define on pass in their main function. */
AOP_MAIN_PROTO aop_main()
{
  aop_register_pass("qsort", qsort_pass);
}
