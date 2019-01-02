#include <stdio.h>

struct foo
{
  int a;
  double b;
};

union bar
{
  int a;
  double b;
};

enum baz
{
  FOO,
  BAR,
  BAZ,
};

void _advice_struct(const char *func, struct foo foo1, struct foo foo2)
{
  printf("struct advice (%s): %d, %f -- %d, %f\n", func, foo1.a, foo1.b, foo2.a, foo2.b);
}

void _advice_union(const char *func, union bar bar1, union bar bar2)
{
  printf("union advice (%s): %d, %f -- %d, %f\n", func, bar1.a, bar1.b, bar2.a, bar2.b);
}

void _advice_enum(const char *func, enum baz baz1, enum baz baz2)
{
  printf("enum advice (%s): %d, %d\n", func, (int)baz1, (int)baz2);
}

void _advice_struct_ptr(const char *func, struct foo *foo1, struct foo *foo2)
{
  printf("struct * advice (%s): %d, %f -- %d, %f\n", func, foo1->a, foo1->b, foo2->a, foo2->b);
}

void _advice_union_ptr(const char *func, union bar *bar1, union bar *bar2)
{
  printf("union * advice (%s): %d, %f -- %d, %f\n", func, bar1->a, bar1->b, bar2->a, bar2->b);
}
