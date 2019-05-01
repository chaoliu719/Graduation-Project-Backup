
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
void foo(int a1, int a2)  
# 33 "t1mc.c"
{



# 38 "t1mc.c"
{

#line 2 "t1mc.mc"
printf("inside foo, parameter = %d, %d \n", a1, a2); 
# 43 "t1mc.c"

}

# 47 "t1mc.c"

}
 
#line 5 "t1mc.mc"
int foo1()  
# 53 "t1mc.c"
{
# 55 "t1mc.c"
int retValue_acc;




# 61 "t1mc.c"
{

#line 6 "t1mc.mc"
printf("inside foo1, return 1; \n"); 
#line 7 "t1mc.mc"

# 68 "t1mc.c"
retValue_acc = 1;
# 70 "t1mc.c"
return (int )retValue_acc;
 
# 73 "t1mc.c"

}

# 77 "t1mc.c"
return (int )retValue_acc;

# 80 "t1mc.c"

}
 
#line 10 "t1mc.mc"
int foo2()  
# 86 "t1mc.c"
{
# 88 "t1mc.c"
int retValue_acc;




# 94 "t1mc.c"
{

#line 11 "t1mc.mc"
printf("inside foo2, return 2; \n"); 
#line 12 "t1mc.mc"

# 101 "t1mc.c"
retValue_acc = 2;
# 103 "t1mc.c"
return (int )retValue_acc;
 
# 106 "t1mc.c"

}

# 110 "t1mc.c"
return (int )retValue_acc;

# 113 "t1mc.c"

}
 
static inline int  foo2__t1mc__2 (void)  ; 

static inline int  foo1__t1mc__1 (void)  ; 

static inline void  foo__t1mc__0 (int a1 ,int a2  )  ; 

#line 15 "t1mc.mc"
int main()  
# 125 "t1mc.c"
{
# 127 "t1mc.c"
int retValue_acc;




# 133 "t1mc.c"
{

#line 17 "t1mc.mc"
printf("call foo by 3, 4 \n"); 
#line 19 "t1mc.mc"
foo__t1mc__0(3, 4); 
#line 21 "t1mc.mc"
printf("\nin main, return value of foo1 = %d\n\n", foo1__t1mc__1()); 
#line 23 "t1mc.mc"
printf("in main, return value of foo2 = %d\n", foo2__t1mc__2()); 
#line 25 "t1mc.mc"

# 146 "t1mc.c"
retValue_acc = 0;
# 148 "t1mc.c"
return (int )retValue_acc;
 
# 151 "t1mc.c"

}

# 155 "t1mc.c"
return (int )retValue_acc;

# 158 "t1mc.c"

}
  void __utac_acc__t1ac__3 (int x  );

  int foo2 () ; 

# 165 "t1mc.c"
static inline int  foo2__t1mc__2 (void) {

# 168 "t1mc.c"
int retValue_acc;

# 171 "t1mc.c"
retValue_acc = foo2 ( ) ;  

{
int __utac__ad__arg1 = retValue_acc ; 
__utac_acc__t1ac__3(__utac__ad__arg1 );

}

# 180 "t1mc.c"
return (int )retValue_acc;
}
  void __utac_acc__t1ac__2 (int* x  );

  int foo1 () ; 

# 187 "t1mc.c"
static inline int  foo1__t1mc__1 (void) {

# 190 "t1mc.c"
int retValue_acc;

# 193 "t1mc.c"
retValue_acc = foo1 ( ) ;  

{
int* __utac__ad__arg1 = &retValue_acc ; 
__utac_acc__t1ac__2(__utac__ad__arg1 );

}

# 202 "t1mc.c"
return (int )retValue_acc;
}
  void __utac_acc__t1ac__1 (int* a ,int ap  );

  void foo (int a1 ,int a2  ) ; 

# 209 "t1mc.c"
static inline void  foo__t1mc__0 (int a1 ,int a2  ) {

{
int* __utac__ad__arg1 = &a1 ; 
int __utac__ad__arg2 = a2 ; 
__utac_acc__t1ac__1(__utac__ad__arg1 ,__utac__ad__arg2 );

}
foo ( a1 , a2 ) ;  
}
 
