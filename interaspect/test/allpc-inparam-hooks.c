#include <stdint.h>
#include <stdio.h>

void _advice_assign(int64_t a, double b)
{
  printf("Assign advice: (%d, %f)\n", (int)a, b);
}

void _advice_printf(int64_t a, double b)
{
  printf("printf advice: (%d, %f)\n", (int)a, b);
}

void _advice_exit(int64_t a, double b)
{
  printf("Exit advice: (%d, %f)\n", (int)a, b);
}
