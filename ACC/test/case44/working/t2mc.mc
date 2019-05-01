# 1 "t2mc_mc.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "t2mc_mc.c"
extern void foo(int );

void foo2(char * s) {
 printf("inside foo2, s = %s\n", s);
 foo(3);
}
