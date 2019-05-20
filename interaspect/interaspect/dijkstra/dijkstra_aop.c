#include <aop.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "dijkstra_advice.h"

/* Every InterAspect plug-in must include this macro.  If you intend
   to distribute your plug-in, make sure to read the implications of
   this macro in the API documentation. */
AOP_I_AM_GPL_COMPATIBLE();

static char *aop_file[] = {
    "dijkstra_advice.c",
    "dijkstra_aop.c"
};

#define AOP_FILE_LEN (sizeof(aop_file) / sizeof(char *))

static int not_aop_file(const char * file_name)
{
    assert(file_name);

    int i;
    for (i = 0; i < AOP_FILE_LEN; i++)
    {
        if (strncmp(file_name, aop_file[i], MAX_FILE_NAME_LEN) == 0)
        {
            return 0;
        }
    }

    return 1;
}

static void join_on_call(struct aop_joinpoint *jp, void *data)
{
  const char *name;

  name = aop_capture_called_function_name(jp);

  if (not_aop_file(aop_capture_file_name(jp)))
  {
    aop_insert_advice(jp, "__before_call", AOP_INSERT_BEFORE, AOP_STR_CST(name), AOP_TERM_ARG);
    aop_insert_advice(jp, "__after_call", AOP_INSERT_AFTER, AOP_STR_CST(name), AOP_TERM_ARG);
  }
}

static void join_on_exit(struct aop_joinpoint *jp, void *data)
{
  const char *name;

  name = aop_get_function_name();

  if (strncmp("main", name, 4) == 0)
  {
    aop_insert_advice(jp, "__print_profiling", AOP_INSERT_AFTER, AOP_TERM_ARG);
  }

}

static void join_on_entry(struct aop_joinpoint *jp, void *data)
{
  const char *name;

  name = aop_get_function_name();

  if (strncmp("main", name, 4) == 0)
  {
    aop_insert_advice(jp, "__init_head", AOP_INSERT_AFTER, AOP_TERM_ARG);
  }

}

/* This is the plug-in pass.  It runs once per instrumented
   fuction. */
static unsigned int tpc_pass()
{
  struct aop_pointcut *pc;

  pc = aop_match_function_call();
  aop_join_on(pc, join_on_call, NULL);

  pc = aop_match_function_entry();
  aop_join_on(pc, join_on_entry, NULL);

  pc = aop_match_function_exit();
  aop_join_on(pc, join_on_exit, NULL);

  return 0;
}

/* This is what your main function should look like.  Most plug-ins
   only need to define on pass in their main function. */
AOP_MAIN_PROTO aop_main()
{
  aop_register_pass("tpc", tpc_pass);
}
