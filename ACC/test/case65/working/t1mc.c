
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


# 1 "t1mc_mc.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "t1mc_mc.c" 
int foo(char a, int *b)  
# 36 "t1mc.c"
{
# 38 "t1mc.c"
int retValue_acc;




# 44 "t1mc.c"
{

#line 2 "t1mc_mc.c"
printf("in foo, a = %c, b = %d\n", a, (*b)); 
#line 3 "t1mc_mc.c"

# 51 "t1mc.c"
retValue_acc = 99;
# 53 "t1mc.c"
return (int )retValue_acc;
 
# 56 "t1mc.c"

}

# 60 "t1mc.c"
return (int )retValue_acc;

# 63 "t1mc.c"

}
 
#line 6 "t1mc_mc.c"
void foo2(int c, int (*p)(char , int *), int d)  
# 69 "t1mc.c"
{



# 74 "t1mc.c"
{

#line 7 "t1mc_mc.c"
printf("in foo2, c = %d, d = %d\n", c, d); 
#line 8 "t1mc_mc.c"
((*p))('A', (&d)); 
# 81 "t1mc.c"

}

# 85 "t1mc.c"

}
 
#line 11 "t1mc_mc.c"
int foo4(char c)  
# 91 "t1mc.c"
{
# 93 "t1mc.c"
int retValue_acc;




# 99 "t1mc.c"
{

#line 12 "t1mc_mc.c"
printf("in foo4, c = %c\n", c); 
#line 13 "t1mc_mc.c"

# 106 "t1mc.c"
retValue_acc = 99;
# 108 "t1mc.c"
return (int )retValue_acc;
 
# 111 "t1mc.c"

}

# 115 "t1mc.c"
return (int )retValue_acc;

# 118 "t1mc.c"

}
 
#line 16 "t1mc_mc.c"
void foo3(int (*p)(char ))  
# 124 "t1mc.c"
{



# 129 "t1mc.c"
{

#line 17 "t1mc_mc.c"
printf("call foo3\n"); 
#line 18 "t1mc_mc.c"
((*p))('z'); 
# 136 "t1mc.c"

}

# 140 "t1mc.c"

}
 
#line 21 "t1mc_mc.c"
void foo6(int (*p)(char ))  
# 146 "t1mc.c"
{



# 151 "t1mc.c"
{

#line 22 "t1mc_mc.c"
printf("call foo6\n"); 
#line 23 "t1mc_mc.c"
((*p))('x'); 
# 158 "t1mc.c"

}

# 162 "t1mc.c"

}
 
int __utac__cflow_t1ac_0 ( int , int);


int __utac__cflow_t1ac_1 ( int , int);


  void __utac_acc__t1ac__10 (void);


int __utac__cflow_t1ac_1 ( int , int);


int __utac__cflow_t1ac_0 ( int , int);


static inline void  foo2__t1mc__0 (int c ,int(*p)(char ,int* ) ,int d  )  ; 

#line 26 "t1mc_mc.c"
void foo7(int (*p)(char ))  
# 185 "t1mc.c"
{



{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t1ac_0, __utac__cflow_t1ac_0(3,0)); } 
 } 
__utac__cflow_t1ac_0 ( 1, 0 ) ; 

}

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t1ac_1, __utac__cflow_t1ac_1(3,0)); } 
 } 
__utac__cflow_t1ac_1 ( 1, 0 ) ; 

}

{
__utac_acc__t1ac__10();

}

# 215 "t1mc.c"
{

#line 27 "t1mc_mc.c"
printf("in foo7\n"); 
#line 28 "t1mc_mc.c"
printf("call foo2 inside foo7\n"); 
#line 29 "t1mc_mc.c"
foo2__t1mc__0(3, foo, (-3)); 
# 224 "t1mc.c"

}

{
__utac__cflow_t1ac_1 ( 2, 0 ) ; 

}

{
__utac__cflow_t1ac_0 ( 2, 0 ) ; 

}

# 238 "t1mc.c"

}
  void __utac_acc__t1ac__1 (void);

  void __utac_acc__t1ac__2 (void);

  void __utac_acc__t1ac__3 (int(*p)(char ,int* )  );

  void __utac_acc__t1ac__4 (void);

  void __utac_acc__t1ac__7 (void);
int __utac__cflow_t1ac_0(int, int);

  void __utac_acc__t1ac__9 (void);
int __utac__cflow_t1ac_1(int, int);

  void foo2 (int c ,int(*p)(char ,int* ) ,int d  ) ; 

# 257 "t1mc.c"
static inline void  foo2__t1mc__0 (int c ,int(*p)(char ,int* ) ,int d  ) {

{
__utac_acc__t1ac__1();

}

{
__utac_acc__t1ac__2();

}

{
int(*__utac__ad__arg1)(char ,int* ) = p ; 
__utac_acc__t1ac__3(__utac__ad__arg1 );

}

{
__utac_acc__t1ac__4();

}

{
if( __utac__cflow_t1ac_0(3,0) ) { 
__utac_acc__t1ac__7();
 } 

}

{
if( __utac__cflow_t1ac_1(3,0) ) { 
__utac_acc__t1ac__9();
 } 

}
foo2 ( c , p , d ) ;  
}
 
static inline void  foo6__t1mc__3 (int(*p)(char )  )  ; 

static inline void  foo3__t1mc__2 (int(*p)(char )  )  ; 

static inline void  foo2__t1mc__1 (int c ,int(*p)(char ,int* ) ,int d  )  ; 

#line 32 "t1mc_mc.c"
int main()  
# 305 "t1mc.c"
{
# 307 "t1mc.c"
int retValue_acc;




# 313 "t1mc.c"
{

#line 33 "t1mc_mc.c"
foo2__t1mc__1(3, foo, 4); 
#line 35 "t1mc_mc.c"
foo3__t1mc__2(foo4); 
#line 37 "t1mc_mc.c"
foo6__t1mc__3(foo4); 
#line 39 "t1mc_mc.c"
foo7(foo4); 
#line 41 "t1mc_mc.c"

# 326 "t1mc.c"
retValue_acc = 0;
# 328 "t1mc.c"
return (int )retValue_acc;
 
# 331 "t1mc.c"

}

# 335 "t1mc.c"
return (int )retValue_acc;

# 338 "t1mc.c"

}
  void __utac_acc__t1ac__6 (void);

  void foo6 (int(*p)(char )  ) ; 

# 345 "t1mc.c"
static inline void  foo6__t1mc__3 (int(*p)(char )  ) {

{
__utac_acc__t1ac__6();

}
foo6 ( p ) ;  
}
  void __utac_acc__t1ac__5 (int(*p)(char )  );

  void foo3 (int(*p)(char )  ) ; 

# 358 "t1mc.c"
static inline void  foo3__t1mc__2 (int(*p)(char )  ) {

{
int(*__utac__ad__arg1)(char ) = p ; 
__utac_acc__t1ac__5(__utac__ad__arg1 );

}
}
  void __utac_acc__t1ac__1 (void);

  void __utac_acc__t1ac__2 (void);

  void __utac_acc__t1ac__3 (int(*p)(char ,int* )  );

  void __utac_acc__t1ac__4 (void);

  void __utac_acc__t1ac__7 (void);
int __utac__cflow_t1ac_0(int, int);

  void __utac_acc__t1ac__9 (void);
int __utac__cflow_t1ac_1(int, int);

  void foo2 (int c ,int(*p)(char ,int* ) ,int d  ) ; 

# 383 "t1mc.c"
static inline void  foo2__t1mc__1 (int c ,int(*p)(char ,int* ) ,int d  ) {

{
__utac_acc__t1ac__1();

}

{
__utac_acc__t1ac__2();

}

{
int(*__utac__ad__arg1)(char ,int* ) = p ; 
__utac_acc__t1ac__3(__utac__ad__arg1 );

}

{
__utac_acc__t1ac__4();

}

{
if( __utac__cflow_t1ac_0(3,0) ) { 
__utac_acc__t1ac__7();
 } 

}

{
if( __utac__cflow_t1ac_1(3,0) ) { 
__utac_acc__t1ac__9();
 } 

}
foo2 ( c , p , d ) ;  
}
 
