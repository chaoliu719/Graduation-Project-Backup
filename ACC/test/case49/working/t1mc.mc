# 1 "t1mc_mc.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "t1mc_mc.c"

int foo(int x) {
 printf("core program: x = %d \n", x);
 return x;
}

void foo2() {
 printf("call foo(30) in foo2\n");
 foo(30);
}

int main() {
 printf("call foo(30) in main\n");
 foo(30);
 printf("---------\n");
 printf("call foo2 in main\n");
 foo2();
 return 0;
}
