#include <stdio.h>

void _advice_foo(int n)
{
  printf("In foo advice: %d\n", n);
}

void _advice_hook_bad(int n)
{
  printf("In bad hook advice: %d.  This advice should not have been called.\n", n);
}

void _advice_hook_good(int n)
{
  printf("In good hook advice: %d.\n", n);
}

