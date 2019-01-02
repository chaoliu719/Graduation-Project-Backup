#include <stdio.h>
#include <stdint.h>

void _tc_init(int num_tracecuts)
{
  printf("Init -- n: %d\n", num_tracecuts);
}

void _tc_new_tracecut(int tc, int num_params, int num_symbols)
{
  printf("New tracecut -- tc: %d, params: %d, symbols: %d\n", tc, num_params, num_symbols);
}

void _tc_name_symbol(int tc, int symbol_index, const char *symbol_name)
{
  printf("Name symbol -- tc: %d, symbol: %d, name: %s\n", tc, symbol_index, symbol_name);
}

void _tc_name_param(int tc, int param_index, const char *param_name)
{
  printf("Name param -- tc: %d, param: %d, name: %s\n", tc, param_index, param_name);
}

void _tc_compile_rule(int tc, int rule_index, const char *specification)
{
  printf("Compile -- tc: %d, %d, %s\n", tc, rule_index, specification);
}

void _tc_event_begin(int tc)
{
  printf("Beginning event -- tc: %d\n", tc);
}

void _tc_capture_pointer_param(int tc, int symbol, int param_index, void *param_val)
{
  printf("Param -- tc: %d, symbol: %d, param: %d, value: %p\n", tc, symbol, param_index, param_val);
}

void _tc_capture_signed_int_param (int tc, int symbol, int param_index, int64_t param_val)
{
  printf("Param -- tc: %d, symbol: %d, param: %d, value: %ld\n", tc, symbol, param_index, param_val);
}

void _tc_capture_unsigned_int_param (int tc, int symbol, int param_index, uint64_t param_val)
{
  printf("Param -- tc: %d, symbol: %d, param: %d, value: %ld\n", tc, symbol, param_index, param_val);
}

void _tc_capture_float_param (int tc, int symbol, int param_index, double param_val)
{
  printf("Param -- tc: %d, symbol: %d, param: %d, value: %f\n", tc, symbol, param_index, param_val);
}

void _tc_event_transition(int tc, int symbol)
{
  printf("Transition event -- tc: %d, symbol: %d\n", tc, symbol);
}
