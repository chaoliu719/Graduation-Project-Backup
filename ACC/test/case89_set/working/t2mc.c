
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
static inline int  a__t2mc__1 (int* __utac__para0 ,int __utac__para1  )  ; 

void ** a_utac__exec__wrapper_t2mc_2 (struct JoinPoint * this);  
 

# 38 "t2mc.c"
void ** a_utac__exec__wrapper_t2mc_2 (struct JoinPoint * this) { 
 
int* * a0  = ( int* *) (this->args[ 0 ]); 
  
int * a1  = ( int *) (this->args[ 1 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  (**a0 = *a1); 
** rp = temp ;  
return this->retValue; 
} 
void ** a_utac__exec__wrapper_t2mc_1 (struct JoinPoint * this);  
 
  int __utac_acc__t2a2__3 (int* j  , struct JoinPoint * );

void ** a_utac__exec__wrapper_t2mc_1 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( a_utac__exec__wrapper_t2mc_2 ) ; 
temp = __utac_acc__t2a2__3(  ( int* ) (this->args[ 1 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  
void ** a_utac__exec__wrapper_t2mc_0 (struct JoinPoint * this);  
 
  int __utac_acc__t2a2__2 (int j  , struct JoinPoint * );

void ** a_utac__exec__wrapper_t2mc_0 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( a_utac__exec__wrapper_t2mc_1 ) ; 
temp = __utac_acc__t2a2__2( * ( int *) (this->args[ 1 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  


static inline int  a__t2mc__0 (int* __utac__para0 ,int __utac__para1  )  ; 

void ** a_utac__exec__wrapper_t2mc_5 (struct JoinPoint * this);  
 

# 84 "t2mc.c"
void ** a_utac__exec__wrapper_t2mc_5 (struct JoinPoint * this) { 
 
int* * a0  = ( int* *) (this->args[ 0 ]); 
  
int * a1  = ( int *) (this->args[ 1 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  (**a0 = *a1); 
** rp = temp ;  
return this->retValue; 
} 
void ** a_utac__exec__wrapper_t2mc_4 (struct JoinPoint * this);  
 
  int __utac_acc__t2a2__3 (int* j  , struct JoinPoint * );

void ** a_utac__exec__wrapper_t2mc_4 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( a_utac__exec__wrapper_t2mc_5 ) ; 
temp = __utac_acc__t2a2__3(  ( int* ) (this->args[ 1 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  
void ** a_utac__exec__wrapper_t2mc_3 (struct JoinPoint * this);  
 
  int __utac_acc__t2a2__2 (int j  , struct JoinPoint * );

void ** a_utac__exec__wrapper_t2mc_3 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( a_utac__exec__wrapper_t2mc_4 ) ; 
temp = __utac_acc__t2a2__2( * ( int *) (this->args[ 1 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  


#line 4 "t2mc.mc"
void foo2()  
# 127 "t2mc.c"
{



# 132 "t2mc.c"
{

#line 6 "t2mc.mc"
printf("in foo2, assign a be 2\n"); 
#line 8 "t2mc.mc"
a__t2mc__0(&a,(a__t2mc__1(&a,(2)))); 
#line 10 "t2mc.mc"
(a?4:5); 
#line 12 "t2mc.mc"
printf("end of foo2, a = %d \n", a); 
# 143 "t2mc.c"

}

# 147 "t2mc.c"

}
int __utac__cflow_t2a2_0 ( int , int);

int __utac__cflow_t2a2_0 ( int , int);

  int __utac_acc__t2a2__1 (  struct JoinPoint * );

  int __utac_acc__t2a2__2 (int j  , struct JoinPoint * );

  int __utac_acc__t2a2__3 (int* j  , struct JoinPoint * );


# 161 "t2mc.c"
static inline int  a__t2mc__1 (int* __utac__para0 ,int __utac__para1  ) {

# 164 "t2mc.c"
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
int** __utac__arg0 = &__utac__para0; 
const char * __utac__argtype0 = "int*"; 
int* __utac__arg1 = &__utac__para1; 
const char * __utac__argtype1 = "int"; 
 void * __utac__args[2]; 
 const char * __utac__argstype[2];
this.argsCount = 2 ; 
 void * __utac__retp[1]; 
int __utac__ret ;
__utac__args[0] = (void*)(__utac__arg0);
__utac__argstype[0] = __utac__argtype0;
__utac__args[1] = (void*)(__utac__arg1);
__utac__argstype[1] = __utac__argtype1;
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

# 212 "t2mc.c"
return (int )retValue_acc;
}
int __utac__cflow_t2a2_0 ( int , int);

int __utac__cflow_t2a2_0 ( int , int);

  int __utac_acc__t2a2__1 (  struct JoinPoint * );

  int __utac_acc__t2a2__2 (int j  , struct JoinPoint * );

  int __utac_acc__t2a2__3 (int* j  , struct JoinPoint * );


# 226 "t2mc.c"
static inline int  a__t2mc__0 (int* __utac__para0 ,int __utac__para1  ) {

# 229 "t2mc.c"
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
int** __utac__arg0 = &__utac__para0; 
const char * __utac__argtype0 = "int*"; 
int* __utac__arg1 = &__utac__para1; 
const char * __utac__argtype1 = "int"; 
 void * __utac__args[2]; 
 const char * __utac__argstype[2];
this.argsCount = 2 ; 
 void * __utac__retp[1]; 
int __utac__ret ;
__utac__args[0] = (void*)(__utac__arg0);
__utac__argstype[0] = __utac__argtype0;
__utac__args[1] = (void*)(__utac__arg1);
__utac__argstype[1] = __utac__argtype1;
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

# 277 "t2mc.c"
return (int )retValue_acc;
}
 
#line 15 "t2mc.mc"
void foo1()  
# 283 "t2mc.c"
{



# 288 "t2mc.c"
{

#line 16 "t2mc.mc"

#line 16 "t2mc.mc"
int a = 1;
#line 17 "t2mc.mc"
printf("in foo1, local a shadows global a \n"); 
#line 18 "t2mc.mc"
a = 34; 
#line 19 "t2mc.mc"
printf("a = %d\n", a); 
#line 20 "t2mc.mc"
printf("end of foo1\n"); 
# 303 "t2mc.c"

}

# 307 "t2mc.c"

}
 
static inline int  a__t2mc__2 (int* __utac__para0 ,int __utac__para1  )  ; 

void ** a_utac__exec__wrapper_t2mc_9 (struct JoinPoint * this);  
 

# 316 "t2mc.c"
void ** a_utac__exec__wrapper_t2mc_9 (struct JoinPoint * this) { 
 
int* * a0  = ( int* *) (this->args[ 0 ]); 
  
int * a1  = ( int *) (this->args[ 1 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  (**a0 = *a1); 
** rp = temp ;  
return this->retValue; 
} 
void ** a_utac__exec__wrapper_t2mc_8 (struct JoinPoint * this);  
 
  int __utac_acc__t2a2__5 (  struct JoinPoint * );

void ** a_utac__exec__wrapper_t2mc_8 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( a_utac__exec__wrapper_t2mc_9 ) ; 
temp = __utac_acc__t2a2__5( this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  
void ** a_utac__exec__wrapper_t2mc_7 (struct JoinPoint * this);  
 
  int __utac_acc__t2a2__3 (int* j  , struct JoinPoint * );

void ** a_utac__exec__wrapper_t2mc_7 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( a_utac__exec__wrapper_t2mc_8 ) ; 
temp = __utac_acc__t2a2__3(  ( int* ) (this->args[ 1 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  
void ** a_utac__exec__wrapper_t2mc_6 (struct JoinPoint * this);  
 
  int __utac_acc__t2a2__2 (int j  , struct JoinPoint * );

void ** a_utac__exec__wrapper_t2mc_6 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( a_utac__exec__wrapper_t2mc_7 ) ; 
temp = __utac_acc__t2a2__2( * ( int *) (this->args[ 1 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  


#line 24 "t2mc.mc"
void foo()  
# 372 "t2mc.c"
{



# 377 "t2mc.c"
{

#line 25 "t2mc.mc"

#line 25 "t2mc.mc"
int b;
#line 26 "t2mc.mc"
printf("in foo, b = a = 0\n"); 
#line 27 "t2mc.mc"
b = a__t2mc__2(&a,(0)); 
#line 28 "t2mc.mc"
printf("a = %d, b = %d \n", a, b); 
#line 29 "t2mc.mc"
printf("end of foo\n"); 
# 392 "t2mc.c"

}

# 396 "t2mc.c"

}
int __utac__cflow_t2a2_0 ( int , int);

int __utac__cflow_t2a2_0 ( int , int);

  int __utac_acc__t2a2__1 (  struct JoinPoint * );

  int __utac_acc__t2a2__2 (int j  , struct JoinPoint * );

  int __utac_acc__t2a2__3 (int* j  , struct JoinPoint * );

  int __utac_acc__t2a2__5 (  struct JoinPoint * );


# 412 "t2mc.c"
static inline int  a__t2mc__2 (int* __utac__para0 ,int __utac__para1  ) {

# 415 "t2mc.c"
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
int** __utac__arg0 = &__utac__para0; 
const char * __utac__argtype0 = "int*"; 
int* __utac__arg1 = &__utac__para1; 
const char * __utac__argtype1 = "int"; 
 void * __utac__args[2]; 
 const char * __utac__argstype[2];
this.argsCount = 2 ; 
 void * __utac__retp[1]; 
int __utac__ret ;
__utac__args[0] = (void*)(__utac__arg0);
__utac__argstype[0] = __utac__argtype0;
__utac__args[1] = (void*)(__utac__arg1);
__utac__argstype[1] = __utac__argtype1;
*__utac__retp  = (void *)(&__utac__ret);
this.args = __utac__args; 
this.argsType = __utac__argstype; 
{ extern void * __utac__get_this_arg (int, struct JoinPoint *)  ; 
  extern const char * __utac__get_this_argtype (int, struct JoinPoint *)  ; 
this.arg = __utac__get_this_arg ; 
this.argType= __utac__get_this_argtype ; } 
this.fp = &(a_utac__exec__wrapper_t2mc_6);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
retValue_acc = __utac_acc__t2a2__1(&this );
 
 } 
 } 

{
__utac__cflow_t2a2_0 ( 2, 0 ) ; 

}

# 463 "t2mc.c"
return (int )retValue_acc;
}
 
static inline int  a__t2mc__7 (int* __utac__para0 ,int __utac__para1  )  ; 

void ** a_utac__exec__wrapper_t2mc_13 (struct JoinPoint * this);  
 

# 472 "t2mc.c"
void ** a_utac__exec__wrapper_t2mc_13 (struct JoinPoint * this) { 
 
int* * a0  = ( int* *) (this->args[ 0 ]); 
  
int * a1  = ( int *) (this->args[ 1 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  (**a0 = *a1); 
** rp = temp ;  
return this->retValue; 
} 
void ** a_utac__exec__wrapper_t2mc_12 (struct JoinPoint * this);  
 
  int __utac_acc__t2a2__6 (  struct JoinPoint * );

void ** a_utac__exec__wrapper_t2mc_12 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( a_utac__exec__wrapper_t2mc_13 ) ; 
temp = __utac_acc__t2a2__6( this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  
void ** a_utac__exec__wrapper_t2mc_11 (struct JoinPoint * this);  
 
  int __utac_acc__t2a2__3 (int* j  , struct JoinPoint * );

void ** a_utac__exec__wrapper_t2mc_11 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( a_utac__exec__wrapper_t2mc_12 ) ; 
temp = __utac_acc__t2a2__3(  ( int* ) (this->args[ 1 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  
void ** a_utac__exec__wrapper_t2mc_10 (struct JoinPoint * this);  
 
  int __utac_acc__t2a2__2 (int j  , struct JoinPoint * );

void ** a_utac__exec__wrapper_t2mc_10 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( a_utac__exec__wrapper_t2mc_11 ) ; 
temp = __utac_acc__t2a2__2( * ( int *) (this->args[ 1 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  


static inline void  foo__t2mc__6 (void)  ; 

static inline void  foo2__t2mc__5 (void)  ; 

static inline void  foo1__t2mc__4 (void)  ; 

static inline void  foo__t2mc__3 (void)  ; 

#line 32 "t2mc.mc"
int main()  
# 536 "t2mc.c"
{
# 538 "t2mc.c"
int retValue_acc;




# 544 "t2mc.c"
{

#line 33 "t2mc.mc"
foo__t2mc__3(); 
#line 34 "t2mc.mc"
foo1__t2mc__4(); 
#line 35 "t2mc.mc"
foo2__t2mc__5(); 
#line 36 "t2mc.mc"
foo__t2mc__6(); 
#line 37 "t2mc.mc"
printf("assign a in main\n"); 
#line 38 "t2mc.mc"
a__t2mc__7(&a,((-1))); 
#line 39 "t2mc.mc"
printf("in the end of main, a = %d\n", a); 
#line 40 "t2mc.mc"

# 563 "t2mc.c"
retValue_acc = 0;
# 565 "t2mc.c"
return (int )retValue_acc;
 
# 568 "t2mc.c"

}

# 572 "t2mc.c"
return (int )retValue_acc;

# 575 "t2mc.c"

}
int __utac__cflow_t2a2_0 ( int , int);

int __utac__cflow_t2a2_0 ( int , int);

  int __utac_acc__t2a2__1 (  struct JoinPoint * );

  int __utac_acc__t2a2__2 (int j  , struct JoinPoint * );

  int __utac_acc__t2a2__3 (int* j  , struct JoinPoint * );

  int __utac_acc__t2a2__6 (  struct JoinPoint * );


# 591 "t2mc.c"
static inline int  a__t2mc__7 (int* __utac__para0 ,int __utac__para1  ) {

# 594 "t2mc.c"
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
int** __utac__arg0 = &__utac__para0; 
const char * __utac__argtype0 = "int*"; 
int* __utac__arg1 = &__utac__para1; 
const char * __utac__argtype1 = "int"; 
 void * __utac__args[2]; 
 const char * __utac__argstype[2];
this.argsCount = 2 ; 
 void * __utac__retp[1]; 
int __utac__ret ;
__utac__args[0] = (void*)(__utac__arg0);
__utac__argstype[0] = __utac__argtype0;
__utac__args[1] = (void*)(__utac__arg1);
__utac__argstype[1] = __utac__argtype1;
*__utac__retp  = (void *)(&__utac__ret);
this.args = __utac__args; 
this.argsType = __utac__argstype; 
{ extern void * __utac__get_this_arg (int, struct JoinPoint *)  ; 
  extern const char * __utac__get_this_argtype (int, struct JoinPoint *)  ; 
this.arg = __utac__get_this_arg ; 
this.argType= __utac__get_this_argtype ; } 
this.fp = &(a_utac__exec__wrapper_t2mc_10);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
retValue_acc = __utac_acc__t2a2__1(&this );
 
 } 
 } 

{
__utac__cflow_t2a2_0 ( 2, 0 ) ; 

}

# 642 "t2mc.c"
return (int )retValue_acc;
}
  void __utac_acc__t2a2__4 (void);
int __utac__cflow_t2a2_0(int, int);

  void foo () ; 

# 650 "t2mc.c"
static inline void  foo__t2mc__6 (void) {

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

# 666 "t2mc.c"
static inline void  foo2__t2mc__5 (void) {

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

# 682 "t2mc.c"
static inline void  foo1__t2mc__4 (void) {

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

# 698 "t2mc.c"
static inline void  foo__t2mc__3 (void) {

{
if( __utac__cflow_t2a2_0(3,0) ) { 
__utac_acc__t2a2__4();
 } 

}
foo ( ) ;  
}
 
