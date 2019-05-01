
#line 5 "t1mc.mc"
struct A {int a; int b; }; 
#line 11 "t1mc.mc"
union B {int a; int b; }ub = {.a = 77}; 
#line 15 "t1mc.mc"
int main()  {

#line 16 "t1mc.mc"

#line 16 "t1mc.mc"
struct A foo;
#line 18 "t1mc.mc"

#line 18 "t1mc.mc"
__typeof (foo) d;
#line 20 "t1mc.mc"

#line 20 "t1mc.mc"
typeof (char ) i;
#line 21 "t1mc.mc"

#line 21 "t1mc.mc"
typeof (char *) ip;
#line 24 "t1mc.mc"
foo = (struct A ){3}; 
#line 26 "t1mc.mc"
printf("foo.a = %d\n", foo.a); 
#line 28 "t1mc.mc"
foo = (struct A ){.b = 4}; 
#line 30 "t1mc.mc"
printf("foo.b = %d\n", foo.b); 
#line 32 "t1mc.mc"
printf("foo.a = %d\n", ((struct A ){9}).a); 
#line 34 "t1mc.mc"
printf("ub.b = %d\n", ub.b); 
#line 36 "t1mc.mc"
printf("size of i = %d, ip = %d\n", sizeof (i), sizeof (ip)); 
#line 38 "t1mc.mc"
return 0; }
 
