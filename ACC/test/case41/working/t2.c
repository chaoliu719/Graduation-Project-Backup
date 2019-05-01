
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


#line 3 "t2.mc"
typedef struct {int a[2]; 
}mystr; 
  void __utac_acc__t2_a1__1 (  struct JoinPoint * );
int __utac__cflow_t2_a1_0(int, int);


  int __utac_acc__t2_a3__1 (  struct JoinPoint * );
int __utac__cflow_t2_a1_0(int, int);


  void foo2 () ; 
  void foo2utac__exec__ori () ; 
void ** foo2_utac__exec__wrapper_t2_0 (struct JoinPoint * this);  
 

# 47 "t2.c"
void ** foo2_utac__exec__wrapper_t2_0 (struct JoinPoint * this) { 
 
foo2utac__exec__ori ( ); 
return this->retValue; 
} 


  void __utac_acc__t2_a2__1 (  struct JoinPoint * );
int __utac__cflow_t2_a1_0(int, int);


#line 7 "t2.mc"
void foo2()  
# 61 "t2.c"
{


 { 
 struct JoinPoint this; 
this.funcName = "foo2"; 
this.targetName = "foo2"; 
this.fileName = "t2.mc"; 
this.kind = "execution"; 
 { 
if( __utac__cflow_t2_a1_0(3,0) ) { 
__utac_acc__t2_a1__1(&this );
 } 
 
 } 
 } 
 { 
 struct JoinPoint this; 
 void * __utac__args[0]; 
 const char * __utac__argstype[0];
this.argsCount = 0 ; 
 void * __utac__retp[1]; 
this.args = __utac__args; 
this.argsType = __utac__argstype; 
{ extern void * __utac__get_this_arg (int, struct JoinPoint *)  ; 
  extern const char * __utac__get_this_argtype (int, struct JoinPoint *)  ; 
this.arg = __utac__get_this_arg ; 
this.argType= __utac__get_this_argtype ; } 
this.fp = &(foo2_utac__exec__wrapper_t2_0);
this.retValue = __utac__retp ; 
this.retType ="void" ; 
this.funcName = "foo2"; 
this.targetName = "foo2"; 
this.fileName = "t2.mc"; 
this.kind = "execution"; 
 { 
if( __utac__cflow_t2_a1_0(3,0) ) { 
__utac_acc__t2_a3__1(&this );
 } 

 else { 
foo2_utac__exec__wrapper_t2_0(&this ) ; 
 } 
 
 } 
 } 

 { 
 struct JoinPoint this; 
this.funcName = "foo2"; 
this.targetName = "foo2"; 
this.fileName = "t2.mc"; 
this.kind = "execution"; 
 { 
if( __utac__cflow_t2_a1_0(3,0) ) { 
__utac_acc__t2_a2__1(&this );
 } 
 
 } 
 } 

# 123 "t2.c"

}
 

# 128 "t2.c"
  void foo2utac__exec__ori () { 

#line 8 "t2.mc"
printf("in foo2\n"); 
 } 
  void __utac_acc__t2_a1__1 (  struct JoinPoint * );
int __utac__cflow_t2_a1_0(int, int);


  int __utac_acc__t2_a3__1 (  struct JoinPoint * );
int __utac__cflow_t2_a1_0(int, int);


  int foo () ; 
  int fooutac__exec__ori () ; 
void ** foo_utac__exec__wrapper_t2_1 (struct JoinPoint * this);  
 

# 147 "t2.c"
void ** foo_utac__exec__wrapper_t2_1 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  fooutac__exec__ori ( ); 
** rp = temp ;  
return this->retValue; 
} 


  void __utac_acc__t2_a2__1 (  struct JoinPoint * );
int __utac__cflow_t2_a1_0(int, int);


  void __utac_acc__t2_a2__1 (  struct JoinPoint * );
int __utac__cflow_t2_a1_0(int, int);


static inline void  foo2__t2__0 (void)  ; 

  void foo2 () ; 
void ** foo2_utac__call__wrapper_t2_2 (struct JoinPoint * this);  
 

# 172 "t2.c"
void ** foo2_utac__call__wrapper_t2_2 (struct JoinPoint * this) { 
 
foo2 ( ); 
return this->retValue; 
} 


#line 11 "t2.mc"
int foo()  
# 182 "t2.c"
{
# 184 "t2.c"
int retValue_acc;



 { 
 struct JoinPoint this; 
this.funcName = "foo"; 
this.targetName = "foo"; 
this.fileName = "t2.mc"; 
this.kind = "execution"; 
 { 
if( __utac__cflow_t2_a1_0(3,0) ) { 
__utac_acc__t2_a1__1(&this );
 } 
 
 } 
 } 
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
this.fp = &(foo_utac__exec__wrapper_t2_1);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
this.funcName = "foo"; 
this.targetName = "foo"; 
this.fileName = "t2.mc"; 
this.kind = "execution"; 
 { 
if( __utac__cflow_t2_a1_0(3,0) ) { 
retValue_acc = __utac_acc__t2_a3__1(&this );
 } 

 else { 

# 230 "t2.c"
retValue_acc = (** (int **)foo_utac__exec__wrapper_t2_1(&this ) ); 
 } 
 
 } 
 } 

 { 
 struct JoinPoint this; 
this.funcName = "foo"; 
this.targetName = "foo"; 
this.fileName = "t2.mc"; 
this.kind = "execution"; 
 { 
if( __utac__cflow_t2_a1_0(3,0) ) { 
__utac_acc__t2_a2__1(&this );
 } 
 
 } 
 } 

# 251 "t2.c"
return (int )retValue_acc;

# 254 "t2.c"

}
int __utac__cflow_t2_a1_0 ( int , int);

  void __utac_acc__t2_a1__1 (  struct JoinPoint * );
int __utac__cflow_t2_a1_0(int, int);

  void __utac_acc__t2_a2__1 (  struct JoinPoint * );
int __utac__cflow_t2_a1_0(int, int);

int __utac__cflow_t2_a1_0 ( int , int);

  int __utac_acc__t2_a3__1 (  struct JoinPoint * );
int __utac__cflow_t2_a1_0(int, int);

  void foo2 () ; 

# 272 "t2.c"
static inline void  foo2__t2__0 (void) {

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t2_a1_0, __utac__cflow_t2_a1_0(3,0)); } 
 } 
__utac__cflow_t2_a1_0 ( 1, 0 ) ; 

}
 { 
 struct JoinPoint this; 
this.funcName = "foo"; 
this.targetName = "foo2"; 
this.fileName = "t2.mc"; 
this.kind = "call"; 
 { 
if( __utac__cflow_t2_a1_0(3,0) ) { 
__utac_acc__t2_a1__1(&this );
 } 
 
 } 
 } 
 { 
 struct JoinPoint this; 
 void * __utac__args[0]; 
 const char * __utac__argstype[0];
this.argsCount = 0 ; 
 void * __utac__retp[1]; 
this.args = __utac__args; 
this.argsType = __utac__argstype; 
{ extern void * __utac__get_this_arg (int, struct JoinPoint *)  ; 
  extern const char * __utac__get_this_argtype (int, struct JoinPoint *)  ; 
this.arg = __utac__get_this_arg ; 
this.argType= __utac__get_this_argtype ; } 
this.fp = &(foo2_utac__call__wrapper_t2_2);
this.retValue = __utac__retp ; 
this.retType ="void" ; 
this.funcName = "foo"; 
this.targetName = "foo2"; 
this.fileName = "t2.mc"; 
this.kind = "call"; 
 { 
if( __utac__cflow_t2_a1_0(3,0) ) { 
__utac_acc__t2_a3__1(&this );
 } 

 else { 
foo2_utac__call__wrapper_t2_2(&this ) ; 
 } 
 
 } 
 } 
 { 
 struct JoinPoint this; 
this.funcName = "foo"; 
this.targetName = "foo2"; 
this.fileName = "t2.mc"; 
this.kind = "call"; 
 { 
if( __utac__cflow_t2_a1_0(3,0) ) { 
__utac_acc__t2_a2__1(&this );
 } 
 
 } 
 } 

{
__utac__cflow_t2_a1_0 ( 2, 0 ) ; 

}
}
 

# 348 "t2.c"
  int fooutac__exec__ori () { 

# 351 "t2.c"
int retValue_acc;

#line 12 "t2.mc"
printf("in foo\n"); 
#line 13 "t2.mc"
foo2__t2__0(); 
#line 14 "t2.mc"

# 360 "t2.c"
retValue_acc = 0; { 
 struct JoinPoint this; 
this.funcName = "foo"; 
this.targetName = "foo"; 
this.fileName = "t2.mc"; 
this.kind = "execution"; 
 { 
if( __utac__cflow_t2_a1_0(3,0) ) { 
__utac_acc__t2_a2__1(&this );
 } 
 
 } 
 } 

# 375 "t2.c"
return (int )retValue_acc;
 
 } 
  void __utac_acc__t2_a1__1 (  struct JoinPoint * );
int __utac__cflow_t2_a1_0(int, int);


  int __utac_acc__t2_a3__1 (  struct JoinPoint * );
int __utac__cflow_t2_a1_0(int, int);


  int main () ; 
  int mainutac__exec__ori () ; 
void ** main_utac__exec__wrapper_t2_3 (struct JoinPoint * this);  
 

# 392 "t2.c"
void ** main_utac__exec__wrapper_t2_3 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  mainutac__exec__ori ( ); 
** rp = temp ;  
return this->retValue; 
} 


  void __utac_acc__t2_a2__1 (  struct JoinPoint * );
int __utac__cflow_t2_a1_0(int, int);


  void __utac_acc__t2_a2__1 (  struct JoinPoint * );
int __utac__cflow_t2_a1_0(int, int);


static inline int  foo__t2__1 (void)  ; 

  int foo () ; 
void ** foo_utac__call__wrapper_t2_4 (struct JoinPoint * this);  
 

# 417 "t2.c"
void ** foo_utac__call__wrapper_t2_4 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo ( ); 
** rp = temp ;  
return this->retValue; 
} 


#line 17 "t2.mc"
int main()  
# 430 "t2.c"
{
# 432 "t2.c"
int retValue_acc;



 { 
 struct JoinPoint this; 
this.funcName = "main"; 
this.targetName = "main"; 
this.fileName = "t2.mc"; 
this.kind = "execution"; 
 { 
if( __utac__cflow_t2_a1_0(3,0) ) { 
__utac_acc__t2_a1__1(&this );
 } 
 
 } 
 } 
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
this.fp = &(main_utac__exec__wrapper_t2_3);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
this.funcName = "main"; 
this.targetName = "main"; 
this.fileName = "t2.mc"; 
this.kind = "execution"; 
 { 
if( __utac__cflow_t2_a1_0(3,0) ) { 
retValue_acc = __utac_acc__t2_a3__1(&this );
 } 

 else { 

# 478 "t2.c"
retValue_acc = (** (int **)main_utac__exec__wrapper_t2_3(&this ) ); 
 } 
 
 } 
 } 

 { 
 struct JoinPoint this; 
this.funcName = "main"; 
this.targetName = "main"; 
this.fileName = "t2.mc"; 
this.kind = "execution"; 
 { 
if( __utac__cflow_t2_a1_0(3,0) ) { 
__utac_acc__t2_a2__1(&this );
 } 
 
 } 
 } 

# 499 "t2.c"
return (int )retValue_acc;

# 502 "t2.c"

}
int __utac__cflow_t2_a1_0 ( int , int);

  void __utac_acc__t2_a1__1 (  struct JoinPoint * );
int __utac__cflow_t2_a1_0(int, int);

  void __utac_acc__t2_a2__1 (  struct JoinPoint * );
int __utac__cflow_t2_a1_0(int, int);

int __utac__cflow_t2_a1_0 ( int , int);

  int __utac_acc__t2_a3__1 (  struct JoinPoint * );
int __utac__cflow_t2_a1_0(int, int);

  int foo () ; 

# 520 "t2.c"
static inline int  foo__t2__1 (void) {

# 523 "t2.c"
int retValue_acc;

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t2_a1_0, __utac__cflow_t2_a1_0(3,0)); } 
 } 
__utac__cflow_t2_a1_0 ( 1, 0 ) ; 

}
 { 
 struct JoinPoint this; 
this.funcName = "main"; 
this.targetName = "foo"; 
this.fileName = "t2.mc"; 
this.kind = "call"; 
 { 
if( __utac__cflow_t2_a1_0(3,0) ) { 
__utac_acc__t2_a1__1(&this );
 } 
 
 } 
 } 
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
this.fp = &(foo_utac__call__wrapper_t2_4);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
this.funcName = "main"; 
this.targetName = "foo"; 
this.fileName = "t2.mc"; 
this.kind = "call"; 
 { 
if( __utac__cflow_t2_a1_0(3,0) ) { 
retValue_acc = __utac_acc__t2_a3__1(&this );
 } 

 else { 

# 576 "t2.c"
retValue_acc = (** (int **)foo_utac__call__wrapper_t2_4(&this ) ); 
 } 
 
 } 
 } 
 { 
 struct JoinPoint this; 
this.funcName = "main"; 
this.targetName = "foo"; 
this.fileName = "t2.mc"; 
this.kind = "call"; 
 { 
if( __utac__cflow_t2_a1_0(3,0) ) { 
__utac_acc__t2_a2__1(&this );
 } 
 
 } 
 } 

{
__utac__cflow_t2_a1_0 ( 2, 0 ) ; 

}

# 601 "t2.c"
return (int )retValue_acc;
}
 

# 606 "t2.c"
  int mainutac__exec__ori () { 

# 609 "t2.c"
int retValue_acc;

#line 18 "t2.mc"
printf("in main\n"); 
#line 19 "t2.mc"
foo__t2__1(); 
#line 20 "t2.mc"

# 618 "t2.c"
retValue_acc = 0; { 
 struct JoinPoint this; 
this.funcName = "main"; 
this.targetName = "main"; 
this.fileName = "t2.mc"; 
this.kind = "execution"; 
 { 
if( __utac__cflow_t2_a1_0(3,0) ) { 
__utac_acc__t2_a2__1(&this );
 } 
 
 } 
 } 

# 633 "t2.c"
return (int )retValue_acc;
 
 } 
