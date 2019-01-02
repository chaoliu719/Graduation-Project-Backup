#include <stdint.h>
#include <stdio.h>

void foo(int a, double b)
{
  a = a + (int)b;
  printf("In foo: (%d, %f)\n", a, b);
}

/* Nothing in this function should get instrumented by
   plugin-inparam-allpc because its parameters don't match the filter
   parameters. */
void bar(int a, int b)
{
  a = a + (int)b;
  printf("In foo: (%d, %f)\n", a, (double)b);  
}

void run_test()
{
  foo(12, 1.2);
  bar(34, 3.4);
}
