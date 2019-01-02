#include <stdio.h>

extern int n;
extern int *p1;
extern int **p2;
extern int ***p3;

static const char *pointer_name(void *ptr)
{
  if (ptr == &n)
    return "&n";
  else if (ptr == &p1)
    return "&p1";
  else if (ptr == &p2)
    return "&p2";
  else if (ptr == &p3)
    return "&p3";
  else
    return "other pointer";
}

void _advice_p(const char *func, int *p)
{
  printf("In int * advice (%s): %d\n", func, *p);
}

void _advice_pp(const char *func, int **p)
{
  printf("In int ** advice (%s): %d\n", func, **p);
}

void _advice_ppp(const char *func, int ***p)
{
  printf("In int *** advice (%s): %d\n", func, ***p);
}

void _advice_c_str(const char *func, const char *str)
{
  printf("In str advice (%s): %s\n", func, str);
}

void _advice_any_ptr(const char *func, void *p)
{
  printf("In void * advice (%s): %s\n", func, pointer_name(p));
}

void _advice_any_ptr_ptr(const char *func, void **p)
{
  printf("In void ** advice (%s): %s\n", func, pointer_name(*p));
}
