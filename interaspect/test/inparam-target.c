#include <stdio.h>

void foo(int a, float b)
{
  printf("In foo: (%d, %f)\n", a, (double)b);
}

void run_test()
{
  foo(12, 1.2);
  foo(34, 3.4);
}
