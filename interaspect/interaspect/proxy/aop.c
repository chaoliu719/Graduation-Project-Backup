#include <aop.h>
#include <string.h>
#include <stdio.h>

/* Every InterAspect plug-in must include this macro.  If you intend
   to distribute your plug-in, make sure to read the implications of
   this macro in the API documentation. */
AOP_I_AM_GPL_COMPATIBLE();


static void join_on_main(struct aop_joinpoint *jp, void *data)
{
    aop_insert_advice(jp, "Get_main_thread", AOP_INSERT_AFTER, AOP_TERM_ARG);
}


static void join_on_call(struct aop_joinpoint *jp, void *data)
{
    struct aop_dynval *connfd = aop_capture_call_param_by_type(jp, 0, aop_t_all_pointer());
    if (connfd != NULL) {
        aop_insert_advice(jp, "Create_thread", AOP_INSERT_BEFORE, AOP_DYNVAL(connfd), AOP_TERM_ARG);
        aop_insert_advice(jp, "Free_pointer", AOP_INSERT_AFTER, AOP_DYNVAL(connfd), AOP_TERM_ARG);
    }
}

/* This is the plug-in pass.  It runs once per instrumented
   fuction. */
static unsigned int proxy_pass()
{
  struct aop_pointcut *pc;


  pc = aop_match_function_entry();
  aop_filter_entry_by_name(pc, "main");
  aop_join_on(pc, join_on_main, NULL);

  pc = aop_match_function_call();
  aop_filter_entry_by_name (pc, "doit");
  aop_join_on(pc, join_on_call, NULL);

  return 0;
}

/* This is what your main function should look like.  Most plug-ins
   only need to define on pass in their main function. */
AOP_MAIN_PROTO aop_main()
{
  aop_register_pass("proxy", proxy_pass);
}
