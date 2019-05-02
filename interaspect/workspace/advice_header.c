/* This sample plug-in demonstrates how to generate a C header with
   prototypes for all the advice functions that InterAspect inserts
   call to.

   Whenever you compile a file with this plug-in, it will output an
   advice.h header in the current directory.

   Compile this plug-in with:

   make libadvice_header.so
*/

#include <aop.h>
#include <stdio.h>  /* For perror. */

AOP_I_AM_GPL_COMPATIBLE();

/* Join on a call to printf. */
static void join_on_printf(struct aop_joinpoint *jp, void *data)
{
  struct aop_dynval *format;
  struct aop_dynval *int_arg;

  format = aop_capture_call_param(jp, 0);
  int_arg = aop_capture_call_param_by_type(jp, 1, aop_t_all_signed());

  /*
  int pos = 2;
  printf("aop: [%s] call [%s] [%d] %p\n", aop_get_function_name(), aop_capture_called_function_name(jp), AOP_DYNVAL(aop_capture_call_param_by_type(jp, pos, aop_t_all_signed())));
  printf("aop: [%s] call [%s] [%d] %p\n", aop_get_function_name(), aop_capture_called_function_name(jp), AOP_DYNVAL(aop_capture_call_param_by_type(jp, pos, aop_t_all_unsigned())));
  printf("aop: [%s] call [%s] [%d] %p\n", aop_get_function_name(), aop_capture_called_function_name(jp), AOP_DYNVAL(aop_capture_call_param_by_type(jp, pos, aop_t_all_pointer())));
  */

  if (int_arg == NULL) {
    /* Second argument is not a signed integer. */  
    aop_insert_advice(jp, "__printf_advice", AOP_INSERT_BEFORE, 
		      AOP_DYNVAL(format), AOP_TERM_ARG);
  }
  else {
    /* Second argument is a signed integer. */
    aop_insert_advice(jp, "__printf_int_advice", AOP_INSERT_BEFORE,
		      AOP_DYNVAL(format), AOP_DYNVAL(int_arg), AOP_TERM_ARG);
  }
}

static unsigned int printf_instr_pass()
{
  struct aop_pointcut *pc;
  const struct aop_type *char_star;

  char_star = aop_t_pointer_to(aop_t_signed8());

  pc = aop_match_function_call();
  aop_filter_call_pc_by_name(pc, "printf");
  aop_filter_call_pc_by_param(pc, 0, char_star);
  aop_join_on(pc, join_on_printf, NULL);

  return 0;
}

/* Override aop_finish() for any tasks you want to complete just
   before compilation finishes.  This is the best place to put a call
   to aop_write_c_header().

   Note that if advice.h already exists, InterAspect will lock it (so
   that parallel builds function correctly) and add any prototypes
   that it is missing.  */
void aop_finish()
{
  int res;

  /* You may wish to use aop_get_arg_value() to get the name of the
     header file from the command line. */
  res = aop_write_c_header("advice.h", "_ADVICE_H_", NULL, NULL);
  if (res != 0)
    perror("advice.h");
}

AOP_MAIN_PROTO aop_main()
{
  aop_register_pass("printf-instr", printf_instr_pass);
}
