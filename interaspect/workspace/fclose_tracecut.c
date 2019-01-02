#include <aop.h>
#include <tracecut.h>

AOP_I_AM_GPL_COMPATIBLE();

static struct tc_tracecut *tc;

AOP_MAIN_PROTO aop_main()
{
  tc = tc_create_tracecut();

  tc_add_param(tc, "file", aop_t_all_pointer());
  tc_declare_call_symbol(tc, "open", "(file)fopen()", AOP_INSERT_AFTER);
  tc_declare_call_symbol(tc, "read", "fread(?, ?, ?, file)", AOP_INSERT_AFTER);
  tc_declare_call_symbol(tc, "read_char", "fgetc(file)", AOP_INSERT_BEFORE);
  tc_declare_call_symbol(tc, "close", "fclose(file)", AOP_INSERT_BEFORE);

  tc_add_rule(tc, "open (read | read_char)* close (read | read_char)");

  aop_assert (tc_error_code(tc) == TC_SUCCESS);

  tc_set_main_function("main");
  tc_register_tracecut_pass();
}

void aop_finish()
{
  tc_free_tracecut(tc);
}
