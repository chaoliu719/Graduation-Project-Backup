
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
 
  int __utac_acc__t2ac__3 (int x  , struct JoinPoint * );

void ** foo_utac__call__wrapper_t1mc_1 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( foo_utac__call__wrapper_t1mc_2 ) ; 
temp = __utac_acc__t2ac__3( * ( int *) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  
void ** foo_utac__call__wrapper_t1mc_0 (struct JoinPoint * this);  
 
  int __utac_acc__t2ac__2 (int x  , struct JoinPoint * );
int __utac__cflow_t2ac_0(int, int);

void ** foo_utac__call__wrapper_t1mc_0 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( foo_utac__call__wrapper_t1mc_1 ) ; 
if( __utac__cflow_t2ac_0(3,0) ) { 
temp = __utac_acc__t2ac__2( * ( int *) (this->args[ 0 ]) , this  ); 
  } else { 
temp = (** (int **)foo_utac__call__wrapper_t1mc_1 ( this ) ); 
 } 
** rp = temp ;  
return this->retValue; 
  }  


#line 7 "t1mc_mc.c"
int foo2()  
# 119 "t1mc.c"
{
# 121 "t1mc.c"
int retValue_acc;




# 127 "t1mc.c"
{

#line 8 "t1mc_mc.c"
printf("call foo(40) inside foo2\n"); 
#line 9 "t1mc_mc.c"

# 134 "t1mc.c"
retValue_acc = foo__t1mc__0(40);
# 136 "t1mc.c"
return (int )retValue_acc;
 
# 139 "t1mc.c"

}

# 143 "t1mc.c"
return (int )retValue_acc;

# 146 "t1mc.c"

}
  int __utac_acc__t2ac__1 (int x  , struct JoinPoint * );

  int __utac_acc__t2ac__2 (int x  , struct JoinPoint * );
int __utac__cflow_t2ac_0(int, int);

  int __utac_acc__t2ac__3 (int x  , struct JoinPoint * );

  int foo (int x  ) ; 

# 158 "t1mc.c"
static inline int  foo__t1mc__0 (int x  ) {

# 161 "t1mc.c"
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
retValue_acc = __utac_acc__t2ac__1(__utac__ad__arg1 ,&this );
 
 } 
 } 

# 191 "t1mc.c"
return (int )retValue_acc;
}
 
static inline int  foo2__t1mc__2 (void)  ; 

static inline int  foo__t1mc__1 (int x  )  ; 

  int foo (int x  ) ; 
void ** foo_utac__call__wrapper_t1mc_5 (struct JoinPoint * this);  
 

# 203 "t1mc.c"
void ** foo_utac__call__wrapper_t1mc_5 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo ( *a0 ); 
** rp = temp ;  
return this->retValue; 
} 
void ** foo_utac__call__wrapper_t1mc_4 (struct JoinPoint * this);  
 
  int __utac_acc__t2ac__3 (int x  , struct JoinPoint * );

void ** foo_utac__call__wrapper_t1mc_4 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( foo_utac__call__wrapper_t1mc_5 ) ; 
temp = __utac_acc__t2ac__3( * ( int *) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  
void ** foo_utac__call__wrapper_t1mc_3 (struct JoinPoint * this);  
 
  int __utac_acc__t2ac__2 (int x  , struct JoinPoint * );
int __utac__cflow_t2ac_0(int, int);

void ** foo_utac__call__wrapper_t1mc_3 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( foo_utac__call__wrapper_t1mc_4 ) ; 
if( __utac__cflow_t2ac_0(3,0) ) { 
temp = __utac_acc__t2ac__2( * ( int *) (this->args[ 0 ]) , this  ); 
  } else { 
temp = (** (int **)foo_utac__call__wrapper_t1mc_4 ( this ) ); 
 } 
** rp = temp ;  
return this->retValue; 
  }  


#line 14 "t1mc_mc.c"
int main()  
# 249 "t1mc.c"
{
# 251 "t1mc.c"
int retValue_acc;




# 257 "t1mc.c"
{

#line 15 "t1mc_mc.c"

#line 15 "t1mc_mc.c"
int result;
#line 16 "t1mc_mc.c"
printf("call foo(40) in main\n"); 
#line 17 "t1mc_mc.c"
result = foo__t1mc__1(40); 
#line 18 "t1mc_mc.c"
printf("result = %d\n", result); 
#line 19 "t1mc_mc.c"
printf("-------------\n"); 
#line 20 "t1mc_mc.c"
printf("call foo2() in main\n"); 
#line 21 "t1mc_mc.c"
result = foo2__t1mc__2(); 
#line 22 "t1mc_mc.c"
printf("result = %d\n\n", result); 
#line 23 "t1mc_mc.c"

# 280 "t1mc.c"
retValue_acc = 0;
# 282 "t1mc.c"
return (int )retValue_acc;
 
# 285 "t1mc.c"

}

# 289 "t1mc.c"
return (int )retValue_acc;

# 292 "t1mc.c"

}
int __utac__cflow_t2ac_0 ( int , int);

int __utac__cflow_t2ac_0 ( int , int);

  int foo2 () ; 

# 301 "t1mc.c"
static inline int  foo2__t1mc__2 (void) {

# 304 "t1mc.c"
int retValue_acc;

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t2ac_0, __utac__cflow_t2ac_0(3,0)); } 
 } 
__utac__cflow_t2ac_0 ( 1, 0 ) ; 

}

# 317 "t1mc.c"
retValue_acc = foo2 ( ) ;  

{
__utac__cflow_t2ac_0 ( 2, 0 ) ; 

}

# 325 "t1mc.c"
return (int )retValue_acc;
}
  int __utac_acc__t2ac__1 (int x  , struct JoinPoint * );

  int __utac_acc__t2ac__2 (int x  , struct JoinPoint * );
int __utac__cflow_t2ac_0(int, int);

  int __utac_acc__t2ac__3 (int x  , struct JoinPoint * );

  int foo (int x  ) ; 

# 337 "t1mc.c"
static inline int  foo__t1mc__1 (int x  ) {

# 340 "t1mc.c"
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
retValue_acc = __utac_acc__t2ac__1(__utac__ad__arg1 ,&this );
 
 } 
 } 

# 370 "t1mc.c"
return (int )retValue_acc;
}
 
