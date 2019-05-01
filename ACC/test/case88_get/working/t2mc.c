
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


#line 2 "t2mc.mc"
int a = 99; 
static inline int  a__t2mc__0 (int __utac__para0  )  ; 

void ** a_utac__exec__wrapper_t2mc_2 (struct JoinPoint * this);  
 

# 38 "t2mc.c"
void ** a_utac__exec__wrapper_t2mc_2 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  (*a0 ); 
** rp = temp ;  
return this->retValue; 
} 
void ** a_utac__exec__wrapper_t2mc_1 (struct JoinPoint * this);  
 
  int __utac_acc__t2a2__3 (int* j  , struct JoinPoint * );

void ** a_utac__exec__wrapper_t2mc_1 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( a_utac__exec__wrapper_t2mc_2 ) ; 
temp = __utac_acc__t2a2__3(  ( int* ) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  
void ** a_utac__exec__wrapper_t2mc_0 (struct JoinPoint * this);  
 
  int __utac_acc__t2a2__2 (int j  , struct JoinPoint * );

void ** a_utac__exec__wrapper_t2mc_0 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( a_utac__exec__wrapper_t2mc_1 ) ; 
temp = __utac_acc__t2a2__2( * ( int *) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  


#line 4 "t2mc.mc"
void foo2()  
# 79 "t2mc.c"
{



# 84 "t2mc.c"
{

#line 6 "t2mc.mc"
printf("in foo2, assign a be 2\n"); 
#line 7 "t2mc.mc"
a = a = 2; 
#line 9 "t2mc.mc"
(a__t2mc__0(a  )?4:5); 
#line 11 "t2mc.mc"
printf("end of foo2\n"); 
# 95 "t2mc.c"

}

# 99 "t2mc.c"

}
int __utac__cflow_t2a2_0 ( int , int);

int __utac__cflow_t2a2_0 ( int , int);

  int __utac_acc__t2a2__1 (  struct JoinPoint * );

  int __utac_acc__t2a2__2 (int j  , struct JoinPoint * );

  int __utac_acc__t2a2__3 (int* j  , struct JoinPoint * );


# 113 "t2mc.c"
static inline int  a__t2mc__0 (int __utac__para0  ) {

# 116 "t2mc.c"
int retValue_acc;

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t2a2_0, __utac__cflow_t2a2_0(3,0)); } 
 } 
__utac__cflow_t2a2_0 ( 1, 0 ) ; 

}
 { 
 struct JoinPoint this; 
int* __utac__arg0 = &__utac__para0; 
const char * __utac__argtype0 = "int"; 
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
this.fp = &(a_utac__exec__wrapper_t2mc_0);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
retValue_acc = __utac_acc__t2a2__1(&this );
 
 } 
 } 

{
__utac__cflow_t2a2_0 ( 2, 0 ) ; 

}

# 160 "t2mc.c"
return (int )retValue_acc;
}
 
#line 14 "t2mc.mc"
void foo1()  
# 166 "t2mc.c"
{



# 171 "t2mc.c"
{

#line 15 "t2mc.mc"

#line 15 "t2mc.mc"
int a = 1;
#line 16 "t2mc.mc"
printf("in foo1, local a shadows global a \n"); 
#line 17 "t2mc.mc"
printf("a = %d\n", a); 
#line 18 "t2mc.mc"
printf("end of foo1\n"); 
# 184 "t2mc.c"

}

# 188 "t2mc.c"

}
 
static inline int  a__t2mc__1 (int __utac__para0  )  ; 

void ** a_utac__exec__wrapper_t2mc_6 (struct JoinPoint * this);  
 

# 197 "t2mc.c"
void ** a_utac__exec__wrapper_t2mc_6 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  (*a0 ); 
** rp = temp ;  
return this->retValue; 
} 
void ** a_utac__exec__wrapper_t2mc_5 (struct JoinPoint * this);  
 
  int __utac_acc__t2a2__5 (  struct JoinPoint * );

void ** a_utac__exec__wrapper_t2mc_5 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( a_utac__exec__wrapper_t2mc_6 ) ; 
temp = __utac_acc__t2a2__5( this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  
void ** a_utac__exec__wrapper_t2mc_4 (struct JoinPoint * this);  
 
  int __utac_acc__t2a2__3 (int* j  , struct JoinPoint * );

void ** a_utac__exec__wrapper_t2mc_4 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( a_utac__exec__wrapper_t2mc_5 ) ; 
temp = __utac_acc__t2a2__3(  ( int* ) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  
void ** a_utac__exec__wrapper_t2mc_3 (struct JoinPoint * this);  
 
  int __utac_acc__t2a2__2 (int j  , struct JoinPoint * );

void ** a_utac__exec__wrapper_t2mc_3 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( a_utac__exec__wrapper_t2mc_4 ) ; 
temp = __utac_acc__t2a2__2( * ( int *) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  


#line 22 "t2mc.mc"
void foo()  
# 251 "t2mc.c"
{



# 256 "t2mc.c"
{

#line 23 "t2mc.mc"
printf("in foo\n"); 
#line 24 "t2mc.mc"
printf("a = %d\n", a__t2mc__1(a  )); 
#line 25 "t2mc.mc"
printf("end of foo\n"); 
# 265 "t2mc.c"

}

# 269 "t2mc.c"

}
int __utac__cflow_t2a2_0 ( int , int);

int __utac__cflow_t2a2_0 ( int , int);

  int __utac_acc__t2a2__1 (  struct JoinPoint * );

  int __utac_acc__t2a2__2 (int j  , struct JoinPoint * );

  int __utac_acc__t2a2__3 (int* j  , struct JoinPoint * );

  int __utac_acc__t2a2__5 (  struct JoinPoint * );


# 285 "t2mc.c"
static inline int  a__t2mc__1 (int __utac__para0  ) {

# 288 "t2mc.c"
int retValue_acc;

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t2a2_0, __utac__cflow_t2a2_0(3,0)); } 
 } 
__utac__cflow_t2a2_0 ( 1, 0 ) ; 

}
 { 
 struct JoinPoint this; 
int* __utac__arg0 = &__utac__para0; 
const char * __utac__argtype0 = "int"; 
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
this.fp = &(a_utac__exec__wrapper_t2mc_3);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
retValue_acc = __utac_acc__t2a2__1(&this );
 
 } 
 } 

{
__utac__cflow_t2a2_0 ( 2, 0 ) ; 

}

# 332 "t2mc.c"
return (int )retValue_acc;
}
 
static inline int  a__t2mc__6 (int __utac__para0  )  ; 

void ** a_utac__exec__wrapper_t2mc_10 (struct JoinPoint * this);  
 

# 341 "t2mc.c"
void ** a_utac__exec__wrapper_t2mc_10 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  (*a0 ); 
** rp = temp ;  
return this->retValue; 
} 
void ** a_utac__exec__wrapper_t2mc_9 (struct JoinPoint * this);  
 
  int __utac_acc__t2a2__6 (  struct JoinPoint * );

void ** a_utac__exec__wrapper_t2mc_9 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( a_utac__exec__wrapper_t2mc_10 ) ; 
temp = __utac_acc__t2a2__6( this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  
void ** a_utac__exec__wrapper_t2mc_8 (struct JoinPoint * this);  
 
  int __utac_acc__t2a2__3 (int* j  , struct JoinPoint * );

void ** a_utac__exec__wrapper_t2mc_8 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( a_utac__exec__wrapper_t2mc_9 ) ; 
temp = __utac_acc__t2a2__3(  ( int* ) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  
void ** a_utac__exec__wrapper_t2mc_7 (struct JoinPoint * this);  
 
  int __utac_acc__t2a2__2 (int j  , struct JoinPoint * );

void ** a_utac__exec__wrapper_t2mc_7 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( a_utac__exec__wrapper_t2mc_8 ) ; 
temp = __utac_acc__t2a2__2( * ( int *) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  


static inline void  foo__t2mc__5 (void)  ; 

static inline void  foo2__t2mc__4 (void)  ; 

static inline void  foo1__t2mc__3 (void)  ; 

static inline void  foo__t2mc__2 (void)  ; 

#line 28 "t2mc.mc"
int main()  
# 403 "t2mc.c"
{
# 405 "t2mc.c"
int retValue_acc;




# 411 "t2mc.c"
{

#line 29 "t2mc.mc"
foo__t2mc__2(); 
#line 30 "t2mc.mc"
foo1__t2mc__3(); 
#line 31 "t2mc.mc"
foo2__t2mc__4(); 
#line 32 "t2mc.mc"
foo__t2mc__5(); 
#line 33 "t2mc.mc"
printf("get value of a in main , a = %d\n", a__t2mc__6(a  )); 
#line 34 "t2mc.mc"

# 426 "t2mc.c"
retValue_acc = 0;
# 428 "t2mc.c"
return (int )retValue_acc;
 
# 431 "t2mc.c"

}

# 435 "t2mc.c"
return (int )retValue_acc;

# 438 "t2mc.c"

}
int __utac__cflow_t2a2_0 ( int , int);

int __utac__cflow_t2a2_0 ( int , int);

  int __utac_acc__t2a2__1 (  struct JoinPoint * );

  int __utac_acc__t2a2__2 (int j  , struct JoinPoint * );

  int __utac_acc__t2a2__3 (int* j  , struct JoinPoint * );

  int __utac_acc__t2a2__6 (  struct JoinPoint * );


# 454 "t2mc.c"
static inline int  a__t2mc__6 (int __utac__para0  ) {

# 457 "t2mc.c"
int retValue_acc;

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t2a2_0, __utac__cflow_t2a2_0(3,0)); } 
 } 
__utac__cflow_t2a2_0 ( 1, 0 ) ; 

}
 { 
 struct JoinPoint this; 
int* __utac__arg0 = &__utac__para0; 
const char * __utac__argtype0 = "int"; 
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
this.fp = &(a_utac__exec__wrapper_t2mc_7);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
retValue_acc = __utac_acc__t2a2__1(&this );
 
 } 
 } 

{
__utac__cflow_t2a2_0 ( 2, 0 ) ; 

}

# 501 "t2mc.c"
return (int )retValue_acc;
}
  void __utac_acc__t2a2__4 (void);
int __utac__cflow_t2a2_0(int, int);

  void foo () ; 

# 509 "t2mc.c"
static inline void  foo__t2mc__5 (void) {

{
if( __utac__cflow_t2a2_0(3,0) ) { 
__utac_acc__t2a2__4();
 } 

}
foo ( ) ;  
}
  void __utac_acc__t2a2__4 (void);
int __utac__cflow_t2a2_0(int, int);

  void foo2 () ; 

# 525 "t2mc.c"
static inline void  foo2__t2mc__4 (void) {

{
if( __utac__cflow_t2a2_0(3,0) ) { 
__utac_acc__t2a2__4();
 } 

}
foo2 ( ) ;  
}
  void __utac_acc__t2a2__4 (void);
int __utac__cflow_t2a2_0(int, int);

  void foo1 () ; 

# 541 "t2mc.c"
static inline void  foo1__t2mc__3 (void) {

{
if( __utac__cflow_t2a2_0(3,0) ) { 
__utac_acc__t2a2__4();
 } 

}
foo1 ( ) ;  
}
  void __utac_acc__t2a2__4 (void);
int __utac__cflow_t2a2_0(int, int);

  void foo () ; 

# 557 "t2mc.c"
static inline void  foo__t2mc__2 (void) {

{
if( __utac__cflow_t2a2_0(3,0) ) { 
__utac_acc__t2a2__4();
 } 

}
foo ( ) ;  
}
 
