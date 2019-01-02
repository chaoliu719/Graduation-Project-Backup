#include <stdio.h>

int n;
int *p1;
int **p2;
int ***p3;

void intp(int *p)
{
  printf("int *: %d\n", *p);
}

void intpp(int **p)
{
  printf("int **: %d\n", **p);
}

void intppp(int ***p)
{
  printf("int ***: %d\n", ***p);
}

void c_str(const char *str)
{
  printf("str: %s\n", str);
}

void run_test()
{
  n = 1337;
  p1 = &n;
  p2 = &p1;
  p3 = &p2;

  intp(p1);
  intpp(p2);
  intppp(p3);
  c_str("h4x0r");
}
