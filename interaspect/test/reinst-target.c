#include <stdio.h>

void foo(const char *str, int n)
{
  printf("%s %d\n", str, n);
}

void run_test()
{
  foo("THX", 1138);
}
