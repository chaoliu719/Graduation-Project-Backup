
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

  int foo (char* a  ) ; 
void ** foo_utac__call__wrapper_t1mc_0 (struct JoinPoint * this);  
 

# 73 "t1mc.c"
void ** foo_utac__call__wrapper_t1mc_0 (struct JoinPoint * this) { 
 
char* * a0  = ( char* *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo ( *a0 ); 
** rp = temp ;  
return this->retValue; 
} 


#line 6 "t1mc_mc.c"
void foo2(char *s)  
# 88 "t1mc.c"
{



# 93 "t1mc.c"
{

#line 7 "t1mc_mc.c"
printf("foo2-->foo\n"); 
#line 8 "t1mc_mc.c"
foo__t1mc__0("call foo from foo2\n"); 
# 100 "t1mc.c"

}

# 104 "t1mc.c"

}
  int __utac_acc__t1ac__3 (char* x  );
int __utac__cflow_t1ac_1(int, int);

  int foo (char* a  ) ; 

# 112 "t1mc.c"
static inline int  foo__t1mc__0 (char* a  ) {

# 115 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
char** __utac__arg0 = &a; 
const char * __utac__argtype0 = "char*"; 
 void * __utac__args[1]; 
 const char * __utac__argstype[1];
this.argsCount = 1 ; 
 void * __utac__retp[1]; 
int __utac__ret ;
__utac__args[0] = (void*)(__utac__arg0);
__utac__argstype[0] = __utac__argtype0;
*__utac__retp  = (void *)(&__utac__ret);
this.args = __utac__args; 
this.argsType = __utac__argstype; 
{ extern void * __utac__get_this_arg (int, struct JoinPoint *)  ; 
  extern const char * __utac__get_this_argtype (int, struct JoinPoint *)  ; 
this.arg = __utac__get_this_arg ; 
this.argType= __utac__get_this_argtype ; } 
this.fp = &(foo_utac__call__wrapper_t1mc_0);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
char* __utac__ad__arg1 = a ; 
if( __utac__cflow_t1ac_1(3,0) ) { 
retValue_acc = __utac_acc__t1ac__3(__utac__ad__arg1 );
 } 

 else { 

# 146 "t1mc.c"
retValue_acc = (** (int **)foo_utac__call__wrapper_t1mc_0(&this ) ); 
 } 
 
 } 
 } 

# 153 "t1mc.c"
return (int )retValue_acc;
}
 
int __utac__cflow_t1ac_0 ( int , int);


int __utac__cflow_t1ac_0 ( int , int);


static inline void  foo2__t1mc__2 (char* s  )  ; 

  void foo2 (char* s  ) ; 
void ** foo2_utac__call__wrapper_t1mc_1 (struct JoinPoint * this);  
 

# 169 "t1mc.c"
void ** foo2_utac__call__wrapper_t1mc_1 (struct JoinPoint * this) { 
 
char* * a0  = ( char* *) (this->args[ 0 ]); 
  
foo2 ( *a0 ); 
return this->retValue; 
} 


static inline int  foo__t1mc__1 (char* a  )  ; 

  int foo (char* a  ) ; 
void ** foo_utac__call__wrapper_t1mc_2 (struct JoinPoint * this);  
 

# 185 "t1mc.c"
void ** foo_utac__call__wrapper_t1mc_2 (struct JoinPoint * this) { 
 
char* * a0  = ( char* *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo ( *a0 ); 
** rp = temp ;  
return this->retValue; 
} 


#line 11 "t1mc_mc.c"
void foo3()  
# 200 "t1mc.c"
{



{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t1ac_0, __utac__cflow_t1ac_0(3,0)); } 
 } 
__utac__cflow_t1ac_0 ( 1, 0 ) ; 

}

# 215 "t1mc.c"
{

#line 12 "t1mc_mc.c"
printf("foo3-->foo\n"); 
#line 13 "t1mc_mc.c"
foo__t1mc__1("call foo directly from foo3\n"); 
#line 14 "t1mc_mc.c"
printf("foo3-->foo2\n"); 
#line 15 "t1mc_mc.c"
foo2__t1mc__2("call foo2 from foo3\n"); 
# 226 "t1mc.c"

}

{
__utac__cflow_t1ac_0 ( 2, 0 ) ; 

}

# 235 "t1mc.c"

}
int __utac__cflow_t1ac_1 ( int , int);

int __utac__cflow_t1ac_1 ( int , int);

  void __utac_acc__t1ac__2 (char* s  );
int __utac__cflow_t1ac_0(int, int);

  void foo2 (char* s  ) ; 

# 247 "t1mc.c"
static inline void  foo2__t1mc__2 (char* s  ) {

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t1ac_1, __utac__cflow_t1ac_1(3,0)); } 
 } 
__utac__cflow_t1ac_1 ( 1, 0 ) ; 

}
 { 
 struct JoinPoint this; 
char** __utac__arg0 = &s; 
const char * __utac__argtype0 = "char*"; 
 void * __utac__args[1]; 
 const char * __utac__argstype[1];
this.argsCount = 1 ; 
 void * __utac__retp[1]; 
__utac__args[0] = (void*)(__utac__arg0);
__utac__argstype[0] = __utac__argtype0;
this.args = __utac__args; 
this.argsType = __utac__argstype; 
{ extern void * __utac__get_this_arg (int, struct JoinPoint *)  ; 
  extern const char * __utac__get_this_argtype (int, struct JoinPoint *)  ; 
this.arg = __utac__get_this_arg ; 
this.argType= __utac__get_this_argtype ; } 
this.fp = &(foo2_utac__call__wrapper_t1mc_1);
this.retValue = __utac__retp ; 
this.retType ="void" ; 
 { 
char* __utac__ad__arg1 = s ; 
if( __utac__cflow_t1ac_0(3,0) ) { 
__utac_acc__t1ac__2(__utac__ad__arg1 );
 } 

 else { 
foo2_utac__call__wrapper_t1mc_1(&this ) ; 
 } 
 
 } 
 } 

{
__utac__cflow_t1ac_1 ( 2, 0 ) ; 

}
}
  int __utac_acc__t1ac__3 (char* x  );
int __utac__cflow_t1ac_1(int, int);

  int foo (char* a  ) ; 

# 301 "t1mc.c"
static inline int  foo__t1mc__1 (char* a  ) {

# 304 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
char** __utac__arg0 = &a; 
const char * __utac__argtype0 = "char*"; 
 void * __utac__args[1]; 
 const char * __utac__argstype[1];
this.argsCount = 1 ; 
 void * __utac__retp[1]; 
int __utac__ret ;
__utac__args[0] = (void*)(__utac__arg0);
__utac__argstype[0] = __utac__argtype0;
*__utac__retp  = (void *)(&__utac__ret);
this.args = __utac__args; 
this.argsType = __utac__argstype; 
{ extern void * __utac__get_this_arg (int, struct JoinPoint *)  ; 
  extern const char * __utac__get_this_argtype (int, struct JoinPoint *)  ; 
this.arg = __utac__get_this_arg ; 
this.argType= __utac__get_this_argtype ; } 
this.fp = &(foo_utac__call__wrapper_t1mc_2);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
char* __utac__ad__arg1 = a ; 
if( __utac__cflow_t1ac_1(3,0) ) { 
retValue_acc = __utac_acc__t1ac__3(__utac__ad__arg1 );
 } 

 else { 

# 335 "t1mc.c"
retValue_acc = (** (int **)foo_utac__call__wrapper_t1mc_2(&this ) ); 
 } 
 
 } 
 } 

# 342 "t1mc.c"
return (int )retValue_acc;
}
 
#line 18 "t1mc_mc.c"
int foo4()  
# 348 "t1mc.c"
{
# 350 "t1mc.c"
int retValue_acc;




# 356 "t1mc.c"
{

#line 19 "t1mc_mc.c"
printf("foo4-->foo3\n"); 
#line 20 "t1mc_mc.c"
foo3(); 
#line 21 "t1mc_mc.c"

# 365 "t1mc.c"
retValue_acc = 9;
# 367 "t1mc.c"
return (int )retValue_acc;
 
# 370 "t1mc.c"

}

# 374 "t1mc.c"
return (int )retValue_acc;

# 377 "t1mc.c"

}
 
int __utac__cflow_t1ac_2 ( int , int);


int __utac__cflow_t1ac_2 ( int , int);


static inline int  foo4__t1mc__3 (void)  ; 

  int foo4 () ; 
void ** foo4_utac__call__wrapper_t1mc_3 (struct JoinPoint * this);  
 

# 393 "t1mc.c"
void ** foo4_utac__call__wrapper_t1mc_3 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo4 ( ); 
** rp = temp ;  
return this->retValue; 
} 


#line 24 "t1mc_mc.c"
void foo5()  
# 406 "t1mc.c"
{



{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t1ac_2, __utac__cflow_t1ac_2(3,0)); } 
 } 
__utac__cflow_t1ac_2 ( 1, 0 ) ; 

}

# 421 "t1mc.c"
{

#line 25 "t1mc_mc.c"
printf("foo5-->foo4\n"); 
#line 26 "t1mc_mc.c"
foo4__t1mc__3(); 
# 428 "t1mc.c"

}

{
__utac__cflow_t1ac_2 ( 2, 0 ) ; 

}

# 437 "t1mc.c"

}
  int __utac_acc__t1ac__4 (  struct JoinPoint * );
int __utac__cflow_t1ac_2(int, int);

  int foo4 () ; 

# 445 "t1mc.c"
static inline int  foo4__t1mc__3 (void) {

# 448 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
 void * __utac__args[0]; 
 const char * __utac__argstype[0];
this.argsCount = 0 ; 
 void * __utac__retp[1]; 
int __utac__ret ;
*__utac__retp  = (void *)(&__utac__ret);
this.args = __utac__args; 
this.argsType = __utac__argstype; 
{ extern void * __utac__get_this_arg (int, struct JoinPoint *)  ; 
  extern const char * __utac__get_this_argtype (int, struct JoinPoint *)  ; 
this.arg = __utac__get_this_arg ; 
this.argType= __utac__get_this_argtype ; } 
this.fp = &(foo4_utac__call__wrapper_t1mc_3);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
if( __utac__cflow_t1ac_2(3,0) ) { 
retValue_acc = __utac_acc__t1ac__4(&this );
 } 

 else { 

# 474 "t1mc.c"
retValue_acc = (** (int **)foo4_utac__call__wrapper_t1mc_3(&this ) ); 
 } 
 
 } 
 } 

# 481 "t1mc.c"
return (int )retValue_acc;
}
 
static inline int  foo__t1mc__6 (char* a  )  ; 

  int foo (char* a  ) ; 
void ** foo_utac__call__wrapper_t1mc_4 (struct JoinPoint * this);  
 

# 491 "t1mc.c"
void ** foo_utac__call__wrapper_t1mc_4 (struct JoinPoint * this) { 
 
char* * a0  = ( char* *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo ( *a0 ); 
** rp = temp ;  
return this->retValue; 
} 


static inline void  foo2__t1mc__5 (char* s  )  ; 

  void foo2 (char* s  ) ; 
void ** foo2_utac__call__wrapper_t1mc_5 (struct JoinPoint * this);  
 

# 510 "t1mc.c"
void ** foo2_utac__call__wrapper_t1mc_5 (struct JoinPoint * this) { 
 
char* * a0  = ( char* *) (this->args[ 0 ]); 
  
foo2 ( *a0 ); 
return this->retValue; 
} 


static inline int  foo4__t1mc__4 (void)  ; 

  int foo4 () ; 
void ** foo4_utac__call__wrapper_t1mc_6 (struct JoinPoint * this);  
 

# 526 "t1mc.c"
void ** foo4_utac__call__wrapper_t1mc_6 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo4 ( ); 
** rp = temp ;  
return this->retValue; 
} 


#line 29 "t1mc_mc.c"
int main()  
# 539 "t1mc.c"
{
# 541 "t1mc.c"
int retValue_acc;




# 547 "t1mc.c"
{

#line 30 "t1mc_mc.c"
printf("main-->foo4\n"); 
#line 31 "t1mc_mc.c"
foo4__t1mc__4(); 
#line 32 "t1mc_mc.c"
printf("--------------\n"); 
#line 33 "t1mc_mc.c"
printf("main-->foo3\n"); 
#line 34 "t1mc_mc.c"
foo3(); 
#line 35 "t1mc_mc.c"
printf("--------------\n"); 
#line 36 "t1mc_mc.c"
printf("main-->foo2\n"); 
#line 37 "t1mc_mc.c"
foo2__t1mc__5("call foo2 in main\n"); 
#line 38 "t1mc_mc.c"
printf("--------------\n"); 
#line 39 "t1mc_mc.c"
printf("main-->foo\n"); 
#line 40 "t1mc_mc.c"
foo__t1mc__6("call foo in main\n"); 
#line 41 "t1mc_mc.c"
printf("--------------\n"); 
#line 42 "t1mc_mc.c"
printf("main-->foo5\n"); 
#line 43 "t1mc_mc.c"
foo5(); 
#line 44 "t1mc_mc.c"

# 580 "t1mc.c"
retValue_acc = 0;
# 582 "t1mc.c"
return (int )retValue_acc;
 
# 585 "t1mc.c"

}

# 589 "t1mc.c"
return (int )retValue_acc;

# 592 "t1mc.c"

}
  int __utac_acc__t1ac__3 (char* x  );
int __utac__cflow_t1ac_1(int, int);

  int foo (char* a  ) ; 

# 600 "t1mc.c"
static inline int  foo__t1mc__6 (char* a  ) {

# 603 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
char** __utac__arg0 = &a; 
const char * __utac__argtype0 = "char*"; 
 void * __utac__args[1]; 
 const char * __utac__argstype[1];
this.argsCount = 1 ; 
 void * __utac__retp[1]; 
int __utac__ret ;
__utac__args[0] = (void*)(__utac__arg0);
__utac__argstype[0] = __utac__argtype0;
*__utac__retp  = (void *)(&__utac__ret);
this.args = __utac__args; 
this.argsType = __utac__argstype; 
{ extern void * __utac__get_this_arg (int, struct JoinPoint *)  ; 
  extern const char * __utac__get_this_argtype (int, struct JoinPoint *)  ; 
this.arg = __utac__get_this_arg ; 
this.argType= __utac__get_this_argtype ; } 
this.fp = &(foo_utac__call__wrapper_t1mc_4);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
char* __utac__ad__arg1 = a ; 
if( __utac__cflow_t1ac_1(3,0) ) { 
retValue_acc = __utac_acc__t1ac__3(__utac__ad__arg1 );
 } 

 else { 

# 634 "t1mc.c"
retValue_acc = (** (int **)foo_utac__call__wrapper_t1mc_4(&this ) ); 
 } 
 
 } 
 } 

# 641 "t1mc.c"
return (int )retValue_acc;
}
int __utac__cflow_t1ac_1 ( int , int);

int __utac__cflow_t1ac_1 ( int , int);

  void __utac_acc__t1ac__2 (char* s  );
int __utac__cflow_t1ac_0(int, int);

  void foo2 (char* s  ) ; 

# 653 "t1mc.c"
static inline void  foo2__t1mc__5 (char* s  ) {

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t1ac_1, __utac__cflow_t1ac_1(3,0)); } 
 } 
__utac__cflow_t1ac_1 ( 1, 0 ) ; 

}
 { 
 struct JoinPoint this; 
char** __utac__arg0 = &s; 
const char * __utac__argtype0 = "char*"; 
 void * __utac__args[1]; 
 const char * __utac__argstype[1];
this.argsCount = 1 ; 
 void * __utac__retp[1]; 
__utac__args[0] = (void*)(__utac__arg0);
__utac__argstype[0] = __utac__argtype0;
this.args = __utac__args; 
this.argsType = __utac__argstype; 
{ extern void * __utac__get_this_arg (int, struct JoinPoint *)  ; 
  extern const char * __utac__get_this_argtype (int, struct JoinPoint *)  ; 
this.arg = __utac__get_this_arg ; 
this.argType= __utac__get_this_argtype ; } 
this.fp = &(foo2_utac__call__wrapper_t1mc_5);
this.retValue = __utac__retp ; 
this.retType ="void" ; 
 { 
char* __utac__ad__arg1 = s ; 
if( __utac__cflow_t1ac_0(3,0) ) { 
__utac_acc__t1ac__2(__utac__ad__arg1 );
 } 

 else { 
foo2_utac__call__wrapper_t1mc_5(&this ) ; 
 } 
 
 } 
 } 

{
__utac__cflow_t1ac_1 ( 2, 0 ) ; 

}
}
  int __utac_acc__t1ac__4 (  struct JoinPoint * );
int __utac__cflow_t1ac_2(int, int);

  int foo4 () ; 

# 707 "t1mc.c"
static inline int  foo4__t1mc__4 (void) {

# 710 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
 void * __utac__args[0]; 
 const char * __utac__argstype[0];
this.argsCount = 0 ; 
 void * __utac__retp[1]; 
int __utac__ret ;
*__utac__retp  = (void *)(&__utac__ret);
this.args = __utac__args; 
this.argsType = __utac__argstype; 
{ extern void * __utac__get_this_arg (int, struct JoinPoint *)  ; 
  extern const char * __utac__get_this_argtype (int, struct JoinPoint *)  ; 
this.arg = __utac__get_this_arg ; 
this.argType= __utac__get_this_argtype ; } 
this.fp = &(foo4_utac__call__wrapper_t1mc_6);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
if( __utac__cflow_t1ac_2(3,0) ) { 
retValue_acc = __utac_acc__t1ac__4(&this );
 } 

 else { 

# 736 "t1mc.c"
retValue_acc = (** (int **)foo4_utac__call__wrapper_t1mc_6(&this ) ); 
 } 
 
 } 
 } 

# 743 "t1mc.c"
return (int )retValue_acc;
}
 
