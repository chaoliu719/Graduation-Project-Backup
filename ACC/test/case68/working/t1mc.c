
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
int (*p)(); 
#line 3 "t1mc_mc.c"
int foo3(); 
#line 5 "t1mc_mc.c"
int foo()  
# 40 "t1mc.c"
{
# 42 "t1mc.c"
int retValue_acc;




# 48 "t1mc.c"
{

#line 6 "t1mc_mc.c"
printf("in foo\n"); 
#line 7 "t1mc_mc.c"

# 55 "t1mc.c"
retValue_acc = 1;
# 57 "t1mc.c"
return (int )retValue_acc;
 
# 60 "t1mc.c"

}

# 64 "t1mc.c"
return (int )retValue_acc;

# 67 "t1mc.c"

}
 
int __utac__cflow_t1ac_0 ( int , int);


int __utac__cflow_t1ac_0 ( int , int);


int __utac__cflow_t1ac_0 ( int , int);


static inline int  p__t1mc__0 (int (* __utac__fp__para) () )  ; 

#line 10 "t1mc_mc.c"
int foo2()  
# 84 "t1mc.c"
{
# 86 "t1mc.c"
int retValue_acc;




{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t1ac_0, __utac__cflow_t1ac_0(3,0)); } 
 } 
__utac__cflow_t1ac_0 ( 1, 0 ) ; 

}

# 102 "t1mc.c"
{

#line 11 "t1mc_mc.c"
printf("in foo2\n"); 
#line 13 "t1mc_mc.c"
p = foo; 
#line 15 "t1mc_mc.c"
printf("call foo in foo2 by fp\n"); 
#line 16 "t1mc_mc.c"
((p__t1mc__0))( p    ); 
#line 18 "t1mc_mc.c"

# 115 "t1mc.c"
retValue_acc = 2;
{
__utac__cflow_t1ac_0 ( 2, 0 ) ; 

}

# 122 "t1mc.c"
return (int )retValue_acc;
 
# 125 "t1mc.c"

}

{
__utac__cflow_t1ac_0 ( 2, 0 ) ; 

}

# 134 "t1mc.c"
return (int )retValue_acc;

# 137 "t1mc.c"

}
  void __utac_acc__t1ac__1 (  struct JoinPoint * );

  void __utac_acc__t1ac__2 (void);
int __utac__cflow_t1ac_0(int, int);

  void __utac_acc__t1ac__3 (void);

  void __utac_acc__t1ac__5 (void);

  void __utac_acc__t1ac__7 (void);

  void __utac_acc__t1ac__9 (void);


# 154 "t1mc.c"
static inline int  p__t1mc__0 (int (* __utac__fp__para) () ) {

# 157 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
this.funcName = "foo2"; 
this.targetName = "p"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "callp"; 
 { 
    int foo () ;  
    int foo3 () ;  
if( ((__utac__fp__para==foo && ( this.targetName="foo")   ) || (__utac__fp__para==foo3 && ( this.targetName="foo3")   )) ) { 
__utac_acc__t1ac__1(&this );
 } 
 
 } 
 } 

# 175 "t1mc.c"
retValue_acc = (*__utac__fp__para) ( ) ;  

{
    int foo () ;  
if( ((__utac__fp__para==foo  ) && __utac__cflow_t1ac_0(3,0)) ) { 
__utac_acc__t1ac__2();
 } 

}

{
    int foo () ;  
if( (__utac__fp__para==foo  ) ) { 
__utac_acc__t1ac__3();
 } 

}

{
    int foo () ;  
if( (__utac__fp__para==foo  ) ) { 
__utac_acc__t1ac__5();
 } 

}

{
    int foo () ;  
if( (__utac__fp__para==foo  ) ) { 
__utac_acc__t1ac__7();
 } 

}

{
    int foo () ;  
if( (__utac__fp__para==foo  ) ) { 
__utac_acc__t1ac__9();
 } 

}

# 218 "t1mc.c"
return (int )retValue_acc;
}
 
static inline int  d__t1mc__1 (int (* __utac__fp__para) () )  ; 

#line 22 "t1mc_mc.c"
int foo4(int (*d)(), int x)  
# 226 "t1mc.c"
{
# 228 "t1mc.c"
int retValue_acc;




# 234 "t1mc.c"
{

#line 23 "t1mc_mc.c"
printf("in foo4\n"); 
#line 24 "t1mc_mc.c"
((d__t1mc__1))( d    ); 
#line 25 "t1mc_mc.c"

# 243 "t1mc.c"
retValue_acc = 4;
# 245 "t1mc.c"
return (int )retValue_acc;
 
# 248 "t1mc.c"

}

# 252 "t1mc.c"
return (int )retValue_acc;

# 255 "t1mc.c"

}
  void __utac_acc__t1ac__1 (  struct JoinPoint * );

  void __utac_acc__t1ac__2 (void);
int __utac__cflow_t1ac_0(int, int);

  void __utac_acc__t1ac__3 (void);

  void __utac_acc__t1ac__5 (void);

  void __utac_acc__t1ac__7 (void);


# 270 "t1mc.c"
static inline int  d__t1mc__1 (int (* __utac__fp__para) () ) {

# 273 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
this.funcName = "foo4"; 
this.targetName = "d"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "callp"; 
 { 
    int foo () ;  
    int foo3 () ;  
if( ((__utac__fp__para==foo && ( this.targetName="foo")   ) || (__utac__fp__para==foo3 && ( this.targetName="foo3")   )) ) { 
__utac_acc__t1ac__1(&this );
 } 
 
 } 
 } 

# 291 "t1mc.c"
retValue_acc = (*__utac__fp__para) ( ) ;  

{
    int foo () ;  
if( ((__utac__fp__para==foo  ) && __utac__cflow_t1ac_0(3,0)) ) { 
__utac_acc__t1ac__2();
 } 

}

{
    int foo () ;  
if( (__utac__fp__para==foo  ) ) { 
__utac_acc__t1ac__3();
 } 

}

{
    int foo () ;  
if( (__utac__fp__para==foo  ) ) { 
__utac_acc__t1ac__5();
 } 

}

{
    int foo () ;  
if( (__utac__fp__para==foo  ) ) { 
__utac_acc__t1ac__7();
 } 

}

# 326 "t1mc.c"
return (int )retValue_acc;
}
 
static inline int  d1__t1mc__2 (int (* __utac__fp__para) () )  ; 

#line 29 "t1mc_mc.c"
int foo5()  
# 334 "t1mc.c"
{
# 336 "t1mc.c"
int retValue_acc;




# 342 "t1mc.c"
{

#line 30 "t1mc_mc.c"

#line 30 "t1mc_mc.c"
int (*d1)();
#line 31 "t1mc_mc.c"
printf("in foo5\n"); 
#line 32 "t1mc_mc.c"
d1 = foo; 
#line 33 "t1mc_mc.c"
((d1__t1mc__2))( d1    ); 
# 355 "t1mc.c"

}

# 359 "t1mc.c"
return (int )retValue_acc;

# 362 "t1mc.c"

}
  void __utac_acc__t1ac__1 (  struct JoinPoint * );

  void __utac_acc__t1ac__2 (void);
int __utac__cflow_t1ac_0(int, int);

  void __utac_acc__t1ac__3 (void);

  void __utac_acc__t1ac__5 (void);

  void __utac_acc__t1ac__7 (void);


# 377 "t1mc.c"
static inline int  d1__t1mc__2 (int (* __utac__fp__para) () ) {

# 380 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
this.funcName = "foo5"; 
this.targetName = "d1"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "callp"; 
 { 
    int foo () ;  
    int foo3 () ;  
if( ((__utac__fp__para==foo && ( this.targetName="foo")   ) || (__utac__fp__para==foo3 && ( this.targetName="foo3")   )) ) { 
__utac_acc__t1ac__1(&this );
 } 
 
 } 
 } 

# 398 "t1mc.c"
retValue_acc = (*__utac__fp__para) ( ) ;  

{
    int foo () ;  
if( ((__utac__fp__para==foo  ) && __utac__cflow_t1ac_0(3,0)) ) { 
__utac_acc__t1ac__2();
 } 

}

{
    int foo () ;  
if( (__utac__fp__para==foo  ) ) { 
__utac_acc__t1ac__3();
 } 

}

{
    int foo () ;  
if( (__utac__fp__para==foo  ) ) { 
__utac_acc__t1ac__5();
 } 

}

{
    int foo () ;  
if( (__utac__fp__para==foo  ) ) { 
__utac_acc__t1ac__7();
 } 

}

# 433 "t1mc.c"
return (int )retValue_acc;
}
 
static inline int  p__t1mc__5 (int (* __utac__fp__para) () )  ; 

static inline int  p__t1mc__4 (int (* __utac__fp__para) () )  ; 

static inline int  p__t1mc__3 (int (* __utac__fp__para) () )  ; 

#line 36 "t1mc_mc.c"
int main()  
# 445 "t1mc.c"
{
# 447 "t1mc.c"
int retValue_acc;




# 453 "t1mc.c"
{

#line 37 "t1mc_mc.c"
p = foo; 
#line 39 "t1mc_mc.c"
printf("call foo in main by fp\n"); 
#line 40 "t1mc_mc.c"
((p__t1mc__3))( p    ); 
#line 42 "t1mc_mc.c"
p = foo2; 
#line 43 "t1mc_mc.c"
printf("call foo2 in main by fp\n"); 
#line 45 "t1mc_mc.c"
((p__t1mc__4))( p    ); 
#line 47 "t1mc_mc.c"
printf("call foo3 in main by fp\n"); 
#line 48 "t1mc_mc.c"
p = foo3; 
#line 50 "t1mc_mc.c"
((p__t1mc__5))( p    ); 
#line 52 "t1mc_mc.c"
printf("call foo4 in main\n"); 
#line 53 "t1mc_mc.c"
foo4(foo, 3); 
#line 55 "t1mc_mc.c"
printf("call foo5 in main\n"); 
#line 56 "t1mc_mc.c"
foo5(); 
#line 58 "t1mc_mc.c"

# 484 "t1mc.c"
retValue_acc = 0;
# 486 "t1mc.c"
return (int )retValue_acc;
 
# 489 "t1mc.c"

}

# 493 "t1mc.c"
return (int )retValue_acc;

# 496 "t1mc.c"

}
  void __utac_acc__t1ac__1 (  struct JoinPoint * );

  void __utac_acc__t1ac__2 (void);
int __utac__cflow_t1ac_0(int, int);

  void __utac_acc__t1ac__3 (void);

  void __utac_acc__t1ac__5 (void);

  void __utac_acc__t1ac__7 (void);


# 511 "t1mc.c"
static inline int  p__t1mc__5 (int (* __utac__fp__para) () ) {

# 514 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
this.funcName = "main"; 
this.targetName = "p"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "callp"; 
 { 
    int foo () ;  
    int foo3 () ;  
if( ((__utac__fp__para==foo && ( this.targetName="foo")   ) || (__utac__fp__para==foo3 && ( this.targetName="foo3")   )) ) { 
__utac_acc__t1ac__1(&this );
 } 
 
 } 
 } 

# 532 "t1mc.c"
retValue_acc = (*__utac__fp__para) ( ) ;  

{
    int foo () ;  
if( ((__utac__fp__para==foo  ) && __utac__cflow_t1ac_0(3,0)) ) { 
__utac_acc__t1ac__2();
 } 

}

{
    int foo () ;  
if( (__utac__fp__para==foo  ) ) { 
__utac_acc__t1ac__3();
 } 

}

{
    int foo () ;  
if( (__utac__fp__para==foo  ) ) { 
__utac_acc__t1ac__5();
 } 

}

{
    int foo () ;  
if( (__utac__fp__para==foo  ) ) { 
__utac_acc__t1ac__7();
 } 

}

# 567 "t1mc.c"
return (int )retValue_acc;
}
  void __utac_acc__t1ac__1 (  struct JoinPoint * );

  void __utac_acc__t1ac__2 (void);
int __utac__cflow_t1ac_0(int, int);

  void __utac_acc__t1ac__3 (void);

  void __utac_acc__t1ac__5 (void);

  void __utac_acc__t1ac__7 (void);


# 582 "t1mc.c"
static inline int  p__t1mc__4 (int (* __utac__fp__para) () ) {

# 585 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
this.funcName = "main"; 
this.targetName = "p"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "callp"; 
 { 
    int foo () ;  
    int foo3 () ;  
if( ((__utac__fp__para==foo && ( this.targetName="foo")   ) || (__utac__fp__para==foo3 && ( this.targetName="foo3")   )) ) { 
__utac_acc__t1ac__1(&this );
 } 
 
 } 
 } 

# 603 "t1mc.c"
retValue_acc = (*__utac__fp__para) ( ) ;  

{
    int foo () ;  
if( ((__utac__fp__para==foo  ) && __utac__cflow_t1ac_0(3,0)) ) { 
__utac_acc__t1ac__2();
 } 

}

{
    int foo () ;  
if( (__utac__fp__para==foo  ) ) { 
__utac_acc__t1ac__3();
 } 

}

{
    int foo () ;  
if( (__utac__fp__para==foo  ) ) { 
__utac_acc__t1ac__5();
 } 

}

{
    int foo () ;  
if( (__utac__fp__para==foo  ) ) { 
__utac_acc__t1ac__7();
 } 

}

# 638 "t1mc.c"
return (int )retValue_acc;
}
  void __utac_acc__t1ac__1 (  struct JoinPoint * );

  void __utac_acc__t1ac__2 (void);
int __utac__cflow_t1ac_0(int, int);

  void __utac_acc__t1ac__3 (void);

  void __utac_acc__t1ac__5 (void);

  void __utac_acc__t1ac__7 (void);


# 653 "t1mc.c"
static inline int  p__t1mc__3 (int (* __utac__fp__para) () ) {

# 656 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
this.funcName = "main"; 
this.targetName = "p"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "callp"; 
 { 
    int foo () ;  
    int foo3 () ;  
if( ((__utac__fp__para==foo && ( this.targetName="foo")   ) || (__utac__fp__para==foo3 && ( this.targetName="foo3")   )) ) { 
__utac_acc__t1ac__1(&this );
 } 
 
 } 
 } 

# 674 "t1mc.c"
retValue_acc = (*__utac__fp__para) ( ) ;  

{
    int foo () ;  
if( ((__utac__fp__para==foo  ) && __utac__cflow_t1ac_0(3,0)) ) { 
__utac_acc__t1ac__2();
 } 

}

{
    int foo () ;  
if( (__utac__fp__para==foo  ) ) { 
__utac_acc__t1ac__3();
 } 

}

{
    int foo () ;  
if( (__utac__fp__para==foo  ) ) { 
__utac_acc__t1ac__5();
 } 

}

{
    int foo () ;  
if( (__utac__fp__para==foo  ) ) { 
__utac_acc__t1ac__7();
 } 

}

# 709 "t1mc.c"
return (int )retValue_acc;
}
 
