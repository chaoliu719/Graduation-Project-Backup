struct foo {
  int a;
};

struct bar {
  float a;
};

/* We have to use phone pointer values so we can check their outputs.
   If we try to use actual structs, their addresses will change
   across architectures. */
struct foo *foo_obj = (struct foo *)0x8;
struct bar *bar_obj = (struct bar *)0x16;

struct foo *get_foo(void)
{
  return foo_obj;
}

void inc_foo(struct foo *foo)
{
}

void dec_foo(struct foo *foo)
{
}

struct bar *get_bar(void)
{
  return bar_obj;
}

void double_bar(struct bar *bar)
{
}

void half_bar(struct bar *bar)
{
}

void transfer(struct foo *foo, struct bar *bar)
{
}

void inc_int(int int_val)
{
}

void dec_int(int int_val)
{
}

void inc_uint(unsigned uint_val)
{
}

void dec_uint(unsigned uint_val)
{
}

void inc_fp(float fp_val)
{
}

void dec_fp(int fp_val)
{
}


void run_test()
{
  struct foo *foo;
  struct bar *bar;

  int      int_val = 10;
  unsigned uint_val = 10;
  float    fp_val = 10.0;
  
  foo = get_foo();
  bar = get_bar();

  inc_foo(foo);
  double_bar(bar);
  dec_foo(foo);
  half_bar(bar);

  transfer(foo, bar);
  
  inc_int(int_val);
  dec_int(int_val);

  inc_uint(uint_val);
  dec_uint(uint_val);
  
  inc_fp(fp_val);
  dec_fp(fp_val);
}
