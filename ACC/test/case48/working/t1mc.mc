# 1 "t1mc_mc.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "t1mc_mc.c"

int foo(int x) {
 printf("core program: x = %d \n", x);
 return x;
}

int foo2() {
        printf("call foo(40) inside foo2\n");
        return foo(40);
}



int main() {
 int result;
 printf("call foo(40) in main\n");
 result = foo(40);
 printf("result = %d\n", result);
        printf("-------------\n");
 printf("call foo2() in main\n");
 result = foo2();
 printf("result = %d\n\n", result);
 return 0;
}
