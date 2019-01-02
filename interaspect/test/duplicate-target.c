#include <stdio.h>

void bar(int a)
{
  printf("In bar: %d!\n", a);
}

/* The duplication plug-in duplicates this funcion and puts different
   instrumentation in each copy. */
void foo(int b)
{
  int a = 10;
  b = a;

  bar(a);
}

int run_test()
{
  foo(5);
  foo(6);

  return 0;
}
