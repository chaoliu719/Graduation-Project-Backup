#include <stdint.h>
#include <stdio.h>

void _advice_foo(int64_t a, double b)
{
  printf("Foo entry advice: (%d, %f)\n", (int)a, (double)b);
}
