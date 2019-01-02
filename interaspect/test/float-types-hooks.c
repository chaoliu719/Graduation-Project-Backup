#include <stdio.h>

void _advice_all(const char *func, double n1, double n2)
{
  printf("ALL advice in %s (%.20f, %.20f)\n", func, n1, n2);
}

void _advice_32(const char *func, float n1, float n2)
{
  printf("32 advice in %s (%.20f, %.20f)\n", func, (double)n1, (float)n2);
}

void _advice_64(const char *func, double n1, double n2)
{
  printf("64 advice in %s (%.20f, %.20f)\n", func, n1, n2);
}

void _advice_128(const char *func, long double n1, long double n2)
{
  printf("128 advice in %s (%.20Lf, %.20Lf)\n", func, n1, n2);
}
