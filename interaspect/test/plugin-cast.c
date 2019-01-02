#include <aop.h>
#include <stdio.h>
#include <string.h>

AOP_I_AM_GPL_COMPATIBLE();

static void plugin_join_on_call(struct aop_joinpoint *jp, void *data)
{
  struct aop_dynval *param;

  param = aop_capture_call_param(jp, 0);
  aop_assert(aop_is_pointer_type(aop_get_dynval_type(param)));
  aop_cast_to_all_pointer(param);

  aop_insert_advice(jp, "_advice", AOP_INSERT_BEFORE, AOP_DYNVAL(param), AOP_TERM_ARG);
}

static void plugin_join_on_int_call(struct aop_joinpoint *jp, void *data)
{
  struct aop_dynval *param;
  struct aop_dynval *param_1;

  param = aop_capture_call_param(jp, 0);
  param_1 = aop_capture_call_param(jp, 1);

  aop_assert(aop_is_all_signed_subtype(aop_get_dynval_type(param)));
  aop_assert(aop_is_all_unsigned_subtype(aop_get_dynval_type(param_1)));
  aop_cast_to_all_signed(param);
  aop_cast_to_all_unsigned(param_1);
  aop_insert_advice(jp, "_advice_int", AOP_INSERT_BEFORE, AOP_DYNVAL(param), AOP_DYNVAL(param_1), AOP_TERM_ARG);
}
 
static void plugin_join_on_fp_call(struct aop_joinpoint *jp, void *data)
{
  struct aop_dynval *param;
  struct aop_dynval *param_1;

  param = aop_capture_call_param(jp, 0);
  param_1 = aop_capture_call_param(jp, 1);

  aop_assert(aop_is_all_fp_subtype(aop_get_dynval_type(param)));
  aop_assert(aop_is_all_fp_subtype(aop_get_dynval_type(param_1)));
  aop_cast_to_all_fp(param);
  aop_cast_to_all_fp(param_1);
  aop_insert_advice(jp, "_advice_float", AOP_INSERT_BEFORE, AOP_DYNVAL(param), AOP_DYNVAL(param_1), AOP_TERM_ARG);
}
 
static unsigned int plugin_cast()
{
  struct aop_pointcut *pc;

  const struct aop_type *foo_type;
  const struct aop_type *bar_type;
  const struct aop_type *int_val;
  const struct aop_type *unsigned_int_val;
  const struct aop_type *fp_val;
  const struct aop_type *dbl_val;

  foo_type = aop_t_struct_ptr("foo");
  bar_type = aop_t_struct_ptr("bar");

  int_val = aop_t_signed32("int_val");
  unsigned_int_val = aop_t_unsigned32("unsigned_int_val");
  
  fp_val = aop_t_float32("fp_val");
  dbl_val = aop_t_float64("dbl_val");

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, foo_type);
  aop_join_on(pc, plugin_join_on_call, NULL);

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, bar_type);
  aop_join_on(pc, plugin_join_on_call, NULL);

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, int_val);
  aop_filter_call_pc_by_param(pc, 1, unsigned_int_val);
  aop_join_on(pc, plugin_join_on_int_call, NULL);

  pc = aop_match_function_call();
  aop_filter_call_pc_by_param(pc, 0, fp_val);
  aop_filter_call_pc_by_param(pc, 1, dbl_val);
  aop_join_on(pc, plugin_join_on_fp_call, NULL);

  return 0;
}

void aop_finish()
{
  const char *header;
  header = aop_get_arg_value("header");

  if (header != NULL) {
    int res;
    res = aop_write_c_header(header, "_CAST_HEADER_", NULL, NULL);
    if (res != 0)
      perror(header);
  }
}

AOP_MAIN_PROTO aop_main()
{
  aop_register_pass("cast", plugin_cast);
}
