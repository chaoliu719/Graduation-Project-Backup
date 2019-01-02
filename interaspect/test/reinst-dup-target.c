#include <stdio.h>

void foo(const char *str, int n)
{
  printf("%d: %s\n", n, str);
}

int run_test()
{
  foo("A Space Odyssey", 2001);

  return 0;
}
