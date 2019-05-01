
struct JoinPoint { 
	void** (*fp) (struct JoinPoint *);
	void ** args;
	int argsCount;
	const char ** argsType;
	 void * (*arg)(int, struct JoinPoint *); 
	 const char * (*argType)(int , struct JoinPoint *); 
	void ** retValue;
	const char * retType;
	const char * funcName ;
	const char * targetName ;
	const char * fileName ;
	const char * kind ;
	void * excep_return ;
};

 struct __UTAC__EXCEPTION {
	void * jumpbuf ;
	unsigned long long int prtValue ;
	int pops;
	struct __UTAC__CFLOW_FUNC {
		int (*func)(int,int) ;
		int val ;
		struct __UTAC__CFLOW_FUNC * next; 
	} * cflowfuncs; 
}; 


#line 1 "t1mc.mc"
struct A {



char b;
}; 
#line 5 "t1mc.mc"
int foo1(int a)  
# 40 "t1mc.c"
{
# 42 "t1mc.c"
int retValue_acc;




# 48 "t1mc.c"
{

#line 6 "t1mc.mc"
printf("inside foo1\n"); 
#line 7 "t1mc.mc"

# 55 "t1mc.c"
retValue_acc = 0;
# 57 "t1mc.c"
return (int )retValue_acc;
 
# 60 "t1mc.c"

}

# 64 "t1mc.c"
return (int )retValue_acc;

# 67 "t1mc.c"

}
 
#line 11 "t1mc.mc"
void foo(a,b,c) 
#line 10 "t1mc.mc"
int b; 
#line 10 "t1mc.mc"
char a; 
#line 10 "t1mc.mc"
int (*c)(int );  
# 79 "t1mc.c"
{



# 84 "t1mc.c"
{

#line 12 "t1mc.mc"

#line 12 "t1mc.mc"
int d;
#line 13 "t1mc.mc"
printf("in foo, a = %c , b = %d\n", a, b); 
#line 14 "t1mc.mc"
((*c))(3); 
# 95 "t1mc.c"

}

# 99 "t1mc.c"

}
 
#line 17 "t1mc.mc"
void foo2(a,b,c) 
#line 17 "t1mc.mc"
int a; 
#line 17 "t1mc.mc"
char b,c;  
# 109 "t1mc.c"
{



# 114 "t1mc.c"
{

#line 18 "t1mc.mc"
printf("in foo2\n"); 
# 119 "t1mc.c"

}

# 123 "t1mc.c"

}
 
static inline void  foo2__t1mc__1 (int a ,char b ,char c  )  ; 

static inline void  foo__t1mc__0 (char a ,int b ,int(*c)(int )  )  ; 

#line 21 "t1mc.mc"
int main()  
# 133 "t1mc.c"
{
# 135 "t1mc.c"
int retValue_acc;




# 141 "t1mc.c"
{

#line 22 "t1mc.mc"
foo__t1mc__0('A', 4, foo1); 
#line 23 "t1mc.mc"
foo2__t1mc__1(3, 'a', 'b'); 
#line 24 "t1mc.mc"
printf("size of struct A = %d\n", sizeof (struct A )); 
#line 25 "t1mc.mc"

# 152 "t1mc.c"
retValue_acc = 0;
# 154 "t1mc.c"
return (int )retValue_acc;
 
# 157 "t1mc.c"

}

# 161 "t1mc.c"
return (int )retValue_acc;

# 164 "t1mc.c"

}
  void __utac_acc__t1ac__2 (  struct JoinPoint * );


# 170 "t1mc.c"
static inline void  foo2__t1mc__1 (int a ,char b ,char c  ) {
 { 
 struct JoinPoint this; 
this.funcName = "main"; 
this.targetName = "foo2"; 
this.fileName = "t1mc.mc"; 
this.kind = "call"; 
 { 
__utac_acc__t1ac__2(&this );
 
 } 
 } 
foo2 ( a , b , c ) ;  
}
  void __utac_acc__t1ac__1 (int b ,char c  );

  void __utac_acc__t1ac__2 (  struct JoinPoint * );


# 190 "t1mc.c"
static inline void  foo__t1mc__0 (char a ,int b ,int(*c)(int )  ) {

{
int __utac__ad__arg1 = b ; 
char __utac__ad__arg2 = a ; 
__utac_acc__t1ac__1(__utac__ad__arg1 ,__utac__ad__arg2 );

}
 { 
 struct JoinPoint this; 
this.funcName = "main"; 
this.targetName = "foo"; 
this.fileName = "t1mc.mc"; 
this.kind = "call"; 
 { 
__utac_acc__t1ac__2(&this );
 
 } 
 } 
foo ( a , b , c ) ;  
}
 
