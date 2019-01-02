#include <stdio.h>

static const char *foo()
{
  return "bro";
}

static float bar()
{
  return 1.2;
}

void run_test()
{
  printf("Don't tase me, %s.  %f\n",  foo(), (double)bar());
}
