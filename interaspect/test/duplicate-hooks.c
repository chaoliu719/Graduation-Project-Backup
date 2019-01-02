#include <stdint.h>
#include <stdio.h>

int _distrib(int64_t param)
{
  static int n = 0;

  printf("In distributor: %d\n", (int)param);

  return (n++ % 2);
}

void _bar_advice()
{
  printf("In bar advice!\n");
}

void _assign_advice()
{
  printf("In assign advice!\n");
}

void _entry_advice(const char *name, int lineno)
{
  printf("In entry advice: %s (line %d)\n", name, lineno);
}

void _exit_advice(const char *name)
{
  printf("In exit advice: %s\n", name);
}
