#include <inttypes.h>
#include <stdio.h>

void _advice(void *param)
{
  printf("In advice function: %s\n", *(const char **)param);
}

/* Advice function to print signed and unsigned integer values */
void _advice_int(int64_t param, uint64_t u_param)
{
  printf("In signed advice function: %ld %ld\n", param, u_param);
}

/* Advice function to print float and double values */
void _advice_float(float param, double d_param)
{
  printf("In float advice function: %f %e\n", param, d_param);
}
