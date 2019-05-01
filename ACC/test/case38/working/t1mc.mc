# 1 "t1mc_mc.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "t1mc_mc.c"
int foo(char * a) {
 printf("inside foo, a = %s\n", a);
 return 99;
}

void foo2() {
 foo("call foo in foo2\n");
}

int main() {
 foo("call foo in main");
 foo2();
 return 0;
}
