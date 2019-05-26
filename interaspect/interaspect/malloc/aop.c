#include <aop.h>
#include <string.h>
#include <stdio.h>

/* Every InterAspect plug-in must include this macro.  If you intend
   to distribute your plug-in, make sure to read the implications of
   this macro in the API documentation. */
AOP_I_AM_GPL_COMPATIBLE();


static void join_on_init(struct aop_joinpoint *jp, void *data)
{
  aop_insert_advice(jp, "clear_ranges_r", AOP_INSERT_AFTER, AOP_TERM_ARG);
}

static void join_on_malloc(struct aop_joinpoint *jp, void *data)
{
  struct aop_dynval *size = aop_capture_call_param_by_type(jp, 0, aop_t_all_unsigned());
  struct aop_dynval *newp = aop_capture_call_return_value_by_type(jp, aop_t_all_pointer());

  if (size && newp)
  {
    aop_insert_advice(jp, "malloc_r", AOP_INSERT_AFTER,
                     AOP_DYNVAL(newp), AOP_DYNVAL(size),
                     AOP_TERM_ARG);
  }
}

static void join_on_free(struct aop_joinpoint *jp, void *data)
{
  struct aop_dynval *oldp = aop_capture_call_param_by_type(jp, 0, aop_t_all_pointer());

  if (oldp)
  {
    aop_insert_advice(jp, "free_r", AOP_INSERT_AFTER,
                     AOP_DYNVAL(oldp), AOP_TERM_ARG);
  }
  
}

static void join_on_realloc(struct aop_joinpoint *jp, void *data)
{
  struct aop_dynval *oldp = aop_capture_call_param_by_type(jp, 0, aop_t_all_pointer());
  struct aop_dynval *size = aop_capture_call_param_by_type(jp, 1, aop_t_all_unsigned());
  struct aop_dynval *newp = aop_capture_call_return_value_by_type(jp, aop_t_all_pointer());

  if (oldp && size && newp)
  {
    aop_insert_advice(jp, "realloc_r", AOP_INSERT_AFTER,
                     AOP_DYNVAL(oldp), AOP_DYNVAL(size), AOP_DYNVAL(newp),
                     AOP_TERM_ARG);
  }
}

/* This is the plug-in pass.  It runs once per instrumented
   fuction. */
static unsigned int mallocx_pass()
{
  struct aop_pointcut *pc;

  pc = aop_match_function_call();
  aop_filter_call_pc_by_name (pc, "mm_init");
  aop_join_on(pc, join_on_init, NULL);

  pc = aop_match_function_call();
  aop_filter_call_pc_by_name (pc, "mm_malloc");
  aop_join_on(pc, join_on_malloc, NULL);

  pc = aop_match_function_call();
  aop_filter_call_pc_by_name (pc, "mm_free");
  aop_join_on(pc, join_on_free, NULL);

  pc = aop_match_function_call();
  aop_filter_call_pc_by_name (pc, "mm_realloc");
  aop_join_on(pc, join_on_realloc, NULL);


  return 0;
}

/* This is what your main function should look like.  Most plug-ins
   only need to define on pass in their main function. */
AOP_MAIN_PROTO aop_main()
{
  aop_register_pass("malloc1", mallocx_pass);
}
