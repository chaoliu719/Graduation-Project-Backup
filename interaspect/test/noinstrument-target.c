#include <stdio.h>

void foo()
{
  printf("Call to foo().\n");
}

void instrumented()
{
  foo();
}

__attribute__((noinstrument)) void uninsrumented()
{
  foo();
}

int run_test()
{
  instrumented();
  uninsrumented();
  return 0;
}
