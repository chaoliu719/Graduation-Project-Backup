# 1 "t1mc.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "t1mc.c"
char * foo3(char * x, int pp) {
        printf("inside foo3, parameter = %s, %d\n", x, pp);
        printf("return value = %s\n", "abcde");
 return "abcde" ;
}


int main() {

        foo3("hello", 345);

        return 0;
}
