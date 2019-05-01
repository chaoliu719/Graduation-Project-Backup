/* This sample plug-in is designed as a "Hello World" example to get
   you started with InterAspect!  Compile it with:

   make libhello.so

   The compiled plug-in will instrument every function's entry point
   with a call to:

   void __hello_advice(const char *function_name);
*/

#include <aop.h>
#include <string.h>  /* For strcmp. */

/* Every InterAspect plug-in must include this macro.  If you intend
   to distribute your plug-in, make sure to read the implications of
   this macro in the API documentation. */
AOP_I_AM_GPL_COMPATIBLE();

#define ADVICE_NAME "__hello_advice"

/* This is the function entry callback.  It gets called once for each
   function entry join point. */
static void join_on_entry(struct aop_joinpoint *jp, void *data)
{
  const char *name;

  name = aop_get_function_name();

  /* Don't instrument the advice function itself!  Instead of doing
     this check here, you could make sure to mark your advice function
     as __attribute__((noinstrument)).*/
  if (strcmp(name, ADVICE_NAME) == 0)
    return;

  aop_insert_advice(jp, ADVICE_NAME, AOP_INSERT_AFTER, AOP_STR_CST(name),
		    AOP_TERM_ARG);
}

/* This is the plug-in pass.  It runs once per instrumented
   fuction. */
static unsigned int hello_pass()
{
  struct aop_pointcut *pc;

  pc = aop_match_function_entry();
  aop_filter_entry_by_name (pc, "compare");
  aop_join_on(pc, join_on_entry, NULL);

  return 0;
}

/* This is what your main function should look like.  Most plug-ins
   only need to define on pass in their main function. */
AOP_MAIN_PROTO aop_main()
{
  aop_register_pass("hello-world", hello_pass);
}
