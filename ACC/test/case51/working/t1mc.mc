# 1 "t1mc_mc.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "t1mc_mc.c"

void foo() {
 printf("here is foo\n");
}

void foo2() {
 printf("here is foo2\n");
 foo();
}

void foo3();

int main() {
 foo();
 printf("\n");
 foo2();
 printf("\n");
 foo3();
 return 0;
}
