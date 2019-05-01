
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
int foo(char *a)  
# 36 "t1mc.c"
{
# 38 "t1mc.c"
int retValue_acc;




# 44 "t1mc.c"
{

#line 2 "t1mc_mc.c"
printf("inside foo, a = %s\n", a); 
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
 
static inline int  foo__t1mc__0 (char* a  )  ; 

#line 6 "t1mc_mc.c"
void foo2(char *s)  
# 71 "t1mc.c"
{



# 76 "t1mc.c"
{

#line 7 "t1mc_mc.c"
printf("foo2-->foo\n"); 
#line 8 "t1mc_mc.c"
foo__t1mc__0("call foo from foo2\n"); 
# 83 "t1mc.c"

}

# 87 "t1mc.c"

}
  void __utac_acc__t1ac__3 (void);
int __utac__cflow_t1ac_0(int, int);

  void __utac_acc__t1ac__4 (void);
int __utac__cflow_t1ac_2(int, int);

  void __utac_acc__t1ac__5 (void);
int __utac__cflow_t1ac_1(int, int);

  int foo (char* a  ) ; 

# 101 "t1mc.c"
static inline int  foo__t1mc__0 (char* a  ) {

# 104 "t1mc.c"
int retValue_acc;

# 107 "t1mc.c"
retValue_acc = foo ( a ) ;  

{
if( __utac__cflow_t1ac_0(3,0) ) { 
__utac_acc__t1ac__3();
 } 

}

{
if( __utac__cflow_t1ac_2(3,0) ) { 
__utac_acc__t1ac__4();
 } 

}

{
if( __utac__cflow_t1ac_1(3,0) ) { 
__utac_acc__t1ac__5();
 } 

}

# 131 "t1mc.c"
return (int )retValue_acc;
}
 
int __utac__cflow_t1ac_0 ( int , int);


int __utac__cflow_t1ac_0 ( int , int);


static inline void  foo2__t1mc__2 (char* s  )  ; 

static inline int  foo__t1mc__1 (char* a  )  ; 

#line 11 "t1mc_mc.c"
void foo3()  
# 147 "t1mc.c"
{



{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t1ac_0, __utac__cflow_t1ac_0(3,0)); } 
 } 
__utac__cflow_t1ac_0 ( 1, 0 ) ; 

}

# 162 "t1mc.c"
{

#line 12 "t1mc_mc.c"
printf("foo3-->foo\n"); 
#line 13 "t1mc_mc.c"
foo__t1mc__1("call foo directly from foo3\n"); 
#line 14 "t1mc_mc.c"
printf("foo3-->foo2\n"); 
#line 15 "t1mc_mc.c"
foo2__t1mc__2("call foo2 from foo3\n"); 
# 173 "t1mc.c"

}

{
__utac__cflow_t1ac_0 ( 2, 0 ) ; 

}

# 182 "t1mc.c"

}
int __utac__cflow_t1ac_2 ( int , int);

int __utac__cflow_t1ac_2 ( int , int);

  void foo2 (char* s  ) ; 

# 191 "t1mc.c"
static inline void  foo2__t1mc__2 (char* s  ) {

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t1ac_2, __utac__cflow_t1ac_2(3,0)); } 
 } 
__utac__cflow_t1ac_2 ( 1, 0 ) ; 

}
foo2 ( s ) ;  

{
__utac__cflow_t1ac_2 ( 2, 0 ) ; 

}
}
  void __utac_acc__t1ac__3 (void);
int __utac__cflow_t1ac_0(int, int);

  void __utac_acc__t1ac__4 (void);
int __utac__cflow_t1ac_2(int, int);

  void __utac_acc__t1ac__5 (void);
int __utac__cflow_t1ac_1(int, int);

  int foo (char* a  ) ; 

# 221 "t1mc.c"
static inline int  foo__t1mc__1 (char* a  ) {

# 224 "t1mc.c"
int retValue_acc;

# 227 "t1mc.c"
retValue_acc = foo ( a ) ;  

{
if( __utac__cflow_t1ac_0(3,0) ) { 
__utac_acc__t1ac__3();
 } 

}

{
if( __utac__cflow_t1ac_2(3,0) ) { 
__utac_acc__t1ac__4();
 } 

}

{
if( __utac__cflow_t1ac_1(3,0) ) { 
__utac_acc__t1ac__5();
 } 

}

# 251 "t1mc.c"
return (int )retValue_acc;
}
 
#line 18 "t1mc_mc.c"
void foo4()  
# 257 "t1mc.c"
{



# 262 "t1mc.c"
{

#line 19 "t1mc_mc.c"
printf("foo4-->foo3\n"); 
#line 20 "t1mc_mc.c"
foo3(); 
# 269 "t1mc.c"

}

# 273 "t1mc.c"

}
 
#line 23 "t1mc_mc.c"
void foo5()  
# 279 "t1mc.c"
{



# 284 "t1mc.c"
{

#line 24 "t1mc_mc.c"
printf("foo5-->foo4\n"); 
#line 25 "t1mc_mc.c"
foo4(); 
# 291 "t1mc.c"

}

# 295 "t1mc.c"

}
 
static inline int  foo__t1mc__5 (char* a  )  ; 

static inline void  foo2__t1mc__4 (char* s  )  ; 

static inline void  foo4__t1mc__3 (void)  ; 

#line 28 "t1mc_mc.c"
int main()  
# 307 "t1mc.c"
{
# 309 "t1mc.c"
int retValue_acc;




# 315 "t1mc.c"
{

#line 29 "t1mc_mc.c"
printf("main-->foo4\n"); 
#line 30 "t1mc_mc.c"
foo4__t1mc__3(); 
#line 31 "t1mc_mc.c"
printf("--------------\n"); 
#line 32 "t1mc_mc.c"
printf("main-->foo3\n"); 
#line 33 "t1mc_mc.c"
foo3(); 
#line 34 "t1mc_mc.c"
printf("--------------\n"); 
#line 35 "t1mc_mc.c"
printf("main-->foo2\n"); 
#line 36 "t1mc_mc.c"
foo2__t1mc__4("call foo2 in main\n"); 
#line 37 "t1mc_mc.c"
printf("--------------\n"); 
#line 38 "t1mc_mc.c"
printf("main-->foo\n"); 
#line 39 "t1mc_mc.c"
foo__t1mc__5("call foo in main\n"); 
#line 40 "t1mc_mc.c"
printf("--------------\n"); 
#line 41 "t1mc_mc.c"
printf("main-->foo5\n"); 
#line 42 "t1mc_mc.c"
foo5(); 
#line 43 "t1mc_mc.c"

# 348 "t1mc.c"
retValue_acc = 0;
# 350 "t1mc.c"
return (int )retValue_acc;
 
# 353 "t1mc.c"

}

# 357 "t1mc.c"
return (int )retValue_acc;

# 360 "t1mc.c"

}
  void __utac_acc__t1ac__3 (void);
int __utac__cflow_t1ac_0(int, int);

  void __utac_acc__t1ac__4 (void);
int __utac__cflow_t1ac_2(int, int);

  void __utac_acc__t1ac__5 (void);
int __utac__cflow_t1ac_1(int, int);

  int foo (char* a  ) ; 

# 374 "t1mc.c"
static inline int  foo__t1mc__5 (char* a  ) {

# 377 "t1mc.c"
int retValue_acc;

# 380 "t1mc.c"
retValue_acc = foo ( a ) ;  

{
if( __utac__cflow_t1ac_0(3,0) ) { 
__utac_acc__t1ac__3();
 } 

}

{
if( __utac__cflow_t1ac_2(3,0) ) { 
__utac_acc__t1ac__4();
 } 

}

{
if( __utac__cflow_t1ac_1(3,0) ) { 
__utac_acc__t1ac__5();
 } 

}

# 404 "t1mc.c"
return (int )retValue_acc;
}
int __utac__cflow_t1ac_2 ( int , int);

int __utac__cflow_t1ac_2 ( int , int);

  void foo2 (char* s  ) ; 

# 413 "t1mc.c"
static inline void  foo2__t1mc__4 (char* s  ) {

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t1ac_2, __utac__cflow_t1ac_2(3,0)); } 
 } 
__utac__cflow_t1ac_2 ( 1, 0 ) ; 

}
foo2 ( s ) ;  

{
__utac__cflow_t1ac_2 ( 2, 0 ) ; 

}
}
int __utac__cflow_t1ac_1 ( int , int);

int __utac__cflow_t1ac_1 ( int , int);

  void foo4 () ; 

# 438 "t1mc.c"
static inline void  foo4__t1mc__3 (void) {

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t1ac_1, __utac__cflow_t1ac_1(3,0)); } 
 } 
__utac__cflow_t1ac_1 ( 1, 0 ) ; 

}
foo4 ( ) ;  

{
__utac__cflow_t1ac_1 ( 2, 0 ) ; 

}
}
 
