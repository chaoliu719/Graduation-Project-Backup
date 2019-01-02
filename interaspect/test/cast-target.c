#include <stdio.h>

struct foo {
  const char *common;
  int a;
};

struct bar {
  const char *common;
  double a;
};

void print_foo(struct foo *foo)
{
  printf("foo: %d\n", foo->a);
}

void print_bar(struct bar *bar)
{
  printf("bar: %f\n", bar->a);
}

void print_int(int int_val, unsigned unsigned_int_val) 
{
  printf("int_val: %d %d\n", int_val, unsigned_int_val);
}

void print_fp(float fp_val, double dbl_val) 
{
  printf("float_val: %f %e\n", fp_val, dbl_val);
}

void run_test()
{
  struct foo foo = { "l33t", 1337 };
  struct bar bar = { "h4x0r", 1.337 };
  int int_val = 10;  
  unsigned unsigned_int_val = 10; 
  float fp_val = 10.5;
  double dbl_val = 10e+5;

  print_foo(&foo);
  print_bar(&bar);
  print_int(int_val, unsigned_int_val);
  print_fp(fp_val, dbl_val);
}
