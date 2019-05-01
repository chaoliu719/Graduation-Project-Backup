
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
# 2 "t1mc_mc.c" 
int foo(int x)  
# 36 "t1mc.c"
{
# 38 "t1mc.c"
int retValue_acc;




# 44 "t1mc.c"
{

#line 3 "t1mc_mc.c"
printf("core program: x = %d \n", x); 
#line 4 "t1mc_mc.c"

# 51 "t1mc.c"
retValue_acc = x;
# 53 "t1mc.c"
return (int )retValue_acc;
 
# 56 "t1mc.c"

}

# 60 "t1mc.c"
return (int )retValue_acc;

# 63 "t1mc.c"

}
 
static inline int  foo__t1mc__0 (int x  )  ; 

  int foo (int x  ) ; 
void ** foo_utac__call__wrapper_t1mc_2 (struct JoinPoint * this);  
 

# 73 "t1mc.c"
void ** foo_utac__call__wrapper_t1mc_2 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo ( *a0 ); 
** rp = temp ;  
return this->retValue; 
} 
void ** foo_utac__call__wrapper_t1mc_1 (struct JoinPoint * this);  
 
  int __utac_acc__t1ac__3 (int x  , struct JoinPoint * );

void ** foo_utac__call__wrapper_t1mc_1 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( foo_utac__call__wrapper_t1mc_2 ) ; 
temp = __utac_acc__t1ac__3( * ( int *) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  
void ** foo_utac__call__wrapper_t1mc_0 (struct JoinPoint * this);  
 
  int __utac_acc__t1ac__2 (int x  , struct JoinPoint * );

void ** foo_utac__call__wrapper_t1mc_0 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( foo_utac__call__wrapper_t1mc_1 ) ; 
temp = __utac_acc__t1ac__2( * ( int *) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  


#line 7 "t1mc_mc.c"
void foo2()  
# 114 "t1mc.c"
{



# 119 "t1mc.c"
{

#line 8 "t1mc_mc.c"
printf("call foo(30) in foo2\n"); 
#line 9 "t1mc_mc.c"
foo__t1mc__0(30); 
# 126 "t1mc.c"

}

# 130 "t1mc.c"

}
  int __utac_acc__t1ac__1 (int x  );
int __utac__cflow_t1ac_0(int, int);

  int __utac_acc__t1ac__2 (int x  , struct JoinPoint * );

  int __utac_acc__t1ac__3 (int x  , struct JoinPoint * );

  int foo (int x  ) ; 

# 142 "t1mc.c"
static inline int  foo__t1mc__0 (int x  ) {

# 145 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
int* __utac__arg0 = &x; 
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
this.fp = &(foo_utac__call__wrapper_t1mc_0);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
int __utac__ad__arg1 = x ; 
if( __utac__cflow_t1ac_0(3,0) ) { 
retValue_acc = __utac_acc__t1ac__1(__utac__ad__arg1 );
 } 

 else { 

# 176 "t1mc.c"
retValue_acc = (** (int **)foo_utac__call__wrapper_t1mc_0(&this ) ); 
 } 
 
 } 
 } 

# 183 "t1mc.c"
return (int )retValue_acc;
}
 
static inline void  foo2__t1mc__2 (void)  ; 

static inline int  foo__t1mc__1 (int x  )  ; 

  int foo (int x  ) ; 
void ** foo_utac__call__wrapper_t1mc_5 (struct JoinPoint * this);  
 

# 195 "t1mc.c"
void ** foo_utac__call__wrapper_t1mc_5 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo ( *a0 ); 
** rp = temp ;  
return this->retValue; 
} 
void ** foo_utac__call__wrapper_t1mc_4 (struct JoinPoint * this);  
 
  int __utac_acc__t1ac__3 (int x  , struct JoinPoint * );

void ** foo_utac__call__wrapper_t1mc_4 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( foo_utac__call__wrapper_t1mc_5 ) ; 
temp = __utac_acc__t1ac__3( * ( int *) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  
void ** foo_utac__call__wrapper_t1mc_3 (struct JoinPoint * this);  
 
  int __utac_acc__t1ac__2 (int x  , struct JoinPoint * );

void ** foo_utac__call__wrapper_t1mc_3 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( foo_utac__call__wrapper_t1mc_4 ) ; 
temp = __utac_acc__t1ac__2( * ( int *) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  


#line 12 "t1mc_mc.c"
int main()  
# 236 "t1mc.c"
{
# 238 "t1mc.c"
int retValue_acc;




# 244 "t1mc.c"
{

#line 13 "t1mc_mc.c"
printf("call foo(30) in main\n"); 
#line 14 "t1mc_mc.c"
foo__t1mc__1(30); 
#line 15 "t1mc_mc.c"
printf("---------\n"); 
#line 16 "t1mc_mc.c"
printf("call foo2 in main\n"); 
#line 17 "t1mc_mc.c"
foo2__t1mc__2(); 
#line 18 "t1mc_mc.c"

# 259 "t1mc.c"
retValue_acc = 0;
# 261 "t1mc.c"
return (int )retValue_acc;
 
# 264 "t1mc.c"

}

# 268 "t1mc.c"
return (int )retValue_acc;

# 271 "t1mc.c"

}
int __utac__cflow_t1ac_0 ( int , int);

int __utac__cflow_t1ac_0 ( int , int);

  void foo2 () ; 

# 280 "t1mc.c"
static inline void  foo2__t1mc__2 (void) {

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t1ac_0, __utac__cflow_t1ac_0(3,0)); } 
 } 
__utac__cflow_t1ac_0 ( 1, 0 ) ; 

}
foo2 ( ) ;  

{
__utac__cflow_t1ac_0 ( 2, 0 ) ; 

}
}
  int __utac_acc__t1ac__1 (int x  );
int __utac__cflow_t1ac_0(int, int);

  int __utac_acc__t1ac__2 (int x  , struct JoinPoint * );

  int __utac_acc__t1ac__3 (int x  , struct JoinPoint * );

  int foo (int x  ) ; 

# 308 "t1mc.c"
static inline int  foo__t1mc__1 (int x  ) {

# 311 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
int* __utac__arg0 = &x; 
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
this.fp = &(foo_utac__call__wrapper_t1mc_3);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
int __utac__ad__arg1 = x ; 
if( __utac__cflow_t1ac_0(3,0) ) { 
retValue_acc = __utac_acc__t1ac__1(__utac__ad__arg1 );
 } 

 else { 

# 342 "t1mc.c"
retValue_acc = (** (int **)foo_utac__call__wrapper_t1mc_3(&this ) ); 
 } 
 
 } 
 } 

# 349 "t1mc.c"
return (int )retValue_acc;
}
 
