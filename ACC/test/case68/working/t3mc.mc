# 1 "t3mc_mc.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "t3mc_mc.c"
int (*p)();

int foo() {
 printf("in foo\n");
 return 1;
}


int main() {
 p = foo;

 (*p)();

 return 0;
}
