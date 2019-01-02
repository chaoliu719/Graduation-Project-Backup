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

static void struct_func(struct foo foo)
{
  printf("struct: %d, %f\n", foo.a, foo.b);
}

static void union_func(union bar bar)
{
  printf("union: %d, %f\n", bar.a, bar.b);
}

static void enum_func(enum baz baz)
{
  printf("enum: %d\n", (int)baz);
}

static void struct_func_ptr(struct foo *foo)
{
  printf("struct *: %d, %f\n", foo->a, foo->b);
}

static void union_func_ptr(union bar *bar)
{
  printf("union: %d, %f\n", bar->a, bar->b);
}

void run_test()
{
  struct foo foo;
  union bar bar;

  foo.a = 808;
  foo.b = 8.08;

  bar.b = 1.1;

  struct_func(foo);
  union_func(bar);
  enum_func(BAZ);

  struct_func_ptr(&foo);
  union_func_ptr(&bar);
}
