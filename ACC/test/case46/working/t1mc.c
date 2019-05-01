
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
int foo(int x)  
# 36 "t1mc.c"
{
# 38 "t1mc.c"
int retValue_acc;




# 44 "t1mc.c"
{

#line 2 "t1mc_mc.c"
printf("foo1, core program: x = %d \n", x); 
#line 3 "t1mc_mc.c"

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
 
#line 6 "t1mc_mc.c"
int foo2(int x)  
# 69 "t1mc.c"
{
# 71 "t1mc.c"
int retValue_acc;




# 77 "t1mc.c"
{

#line 7 "t1mc_mc.c"
printf("foo2, core program: x = %d \n", x); 
#line 8 "t1mc_mc.c"

# 84 "t1mc.c"
retValue_acc = x;
# 86 "t1mc.c"
return (int )retValue_acc;
 
# 89 "t1mc.c"

}

# 93 "t1mc.c"
return (int )retValue_acc;

# 96 "t1mc.c"

}
 
static inline int  foo2__t1mc__4 (int x  )  ; 

  int foo2 (int x  ) ; 
void ** foo2_utac__call__wrapper_t1mc_1 (struct JoinPoint * this);  
 

# 106 "t1mc.c"
void ** foo2_utac__call__wrapper_t1mc_1 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo2 ( *a0 ); 
** rp = temp ;  
return this->retValue; 
} 
void ** foo2_utac__call__wrapper_t1mc_0 (struct JoinPoint * this);  
 
  int __utac_acc__t2ac__2 (int x  );

void ** foo2_utac__call__wrapper_t1mc_0 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( foo2_utac__call__wrapper_t1mc_1 ) ; 
temp = __utac_acc__t2ac__2( * ( int *) (this->args[ 0 ])  ); 
 ** rp = temp ;  
return this->retValue; 
  }  


static inline int  foo__t1mc__3 (int x  )  ; 

  int foo (int x  ) ; 
void ** foo_utac__call__wrapper_t1mc_4 (struct JoinPoint * this);  
 

# 138 "t1mc.c"
void ** foo_utac__call__wrapper_t1mc_4 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo ( *a0 ); 
** rp = temp ;  
return this->retValue; 
} 
void ** foo_utac__call__wrapper_t1mc_3 (struct JoinPoint * this);  
 
  int __utac_acc__t1ac__3 (int x  , struct JoinPoint * );

void ** foo_utac__call__wrapper_t1mc_3 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( foo_utac__call__wrapper_t1mc_4 ) ; 
temp = __utac_acc__t1ac__3( * ( int *) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  
void ** foo_utac__call__wrapper_t1mc_2 (struct JoinPoint * this);  
 
  int __utac_acc__t1ac__2 (int x  , struct JoinPoint * );

void ** foo_utac__call__wrapper_t1mc_2 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( foo_utac__call__wrapper_t1mc_3 ) ; 
temp = __utac_acc__t1ac__2( * ( int *) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  


static inline int  foo__t1mc__2 (int x  )  ; 

  int foo (int x  ) ; 
void ** foo_utac__call__wrapper_t1mc_7 (struct JoinPoint * this);  
 

# 183 "t1mc.c"
void ** foo_utac__call__wrapper_t1mc_7 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo ( *a0 ); 
** rp = temp ;  
return this->retValue; 
} 
void ** foo_utac__call__wrapper_t1mc_6 (struct JoinPoint * this);  
 
  int __utac_acc__t1ac__3 (int x  , struct JoinPoint * );

void ** foo_utac__call__wrapper_t1mc_6 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( foo_utac__call__wrapper_t1mc_7 ) ; 
temp = __utac_acc__t1ac__3( * ( int *) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  
void ** foo_utac__call__wrapper_t1mc_5 (struct JoinPoint * this);  
 
  int __utac_acc__t1ac__2 (int x  , struct JoinPoint * );

void ** foo_utac__call__wrapper_t1mc_5 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( foo_utac__call__wrapper_t1mc_6 ) ; 
temp = __utac_acc__t1ac__2( * ( int *) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  


static inline int  foo__t1mc__1 (int x  )  ; 

  int foo (int x  ) ; 
void ** foo_utac__call__wrapper_t1mc_10 (struct JoinPoint * this);  
 

# 228 "t1mc.c"
void ** foo_utac__call__wrapper_t1mc_10 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo ( *a0 ); 
** rp = temp ;  
return this->retValue; 
} 
void ** foo_utac__call__wrapper_t1mc_9 (struct JoinPoint * this);  
 
  int __utac_acc__t1ac__3 (int x  , struct JoinPoint * );

void ** foo_utac__call__wrapper_t1mc_9 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( foo_utac__call__wrapper_t1mc_10 ) ; 
temp = __utac_acc__t1ac__3( * ( int *) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  
void ** foo_utac__call__wrapper_t1mc_8 (struct JoinPoint * this);  
 
  int __utac_acc__t1ac__2 (int x  , struct JoinPoint * );

void ** foo_utac__call__wrapper_t1mc_8 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( foo_utac__call__wrapper_t1mc_9 ) ; 
temp = __utac_acc__t1ac__2( * ( int *) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  


static inline int  foo__t1mc__0 (int x  )  ; 

  int foo (int x  ) ; 
void ** foo_utac__call__wrapper_t1mc_13 (struct JoinPoint * this);  
 

# 273 "t1mc.c"
void ** foo_utac__call__wrapper_t1mc_13 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo ( *a0 ); 
** rp = temp ;  
return this->retValue; 
} 
void ** foo_utac__call__wrapper_t1mc_12 (struct JoinPoint * this);  
 
  int __utac_acc__t1ac__3 (int x  , struct JoinPoint * );

void ** foo_utac__call__wrapper_t1mc_12 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( foo_utac__call__wrapper_t1mc_13 ) ; 
temp = __utac_acc__t1ac__3( * ( int *) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  
void ** foo_utac__call__wrapper_t1mc_11 (struct JoinPoint * this);  
 
  int __utac_acc__t1ac__2 (int x  , struct JoinPoint * );

void ** foo_utac__call__wrapper_t1mc_11 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( foo_utac__call__wrapper_t1mc_12 ) ; 
temp = __utac_acc__t1ac__2( * ( int *) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  


#line 12 "t1mc_mc.c"
int main()  
# 314 "t1mc.c"
{
# 316 "t1mc.c"
int retValue_acc;




# 322 "t1mc.c"
{

#line 13 "t1mc_mc.c"

#line 13 "t1mc_mc.c"
int result;
#line 14 "t1mc_mc.c"
printf("foo(1) in main \n"); 
#line 15 "t1mc_mc.c"
result = foo__t1mc__0(1); 
#line 16 "t1mc_mc.c"
printf("result = %d\n", result); 
#line 17 "t1mc_mc.c"
printf("-------------\n"); 
#line 19 "t1mc_mc.c"
printf("foo(4) in main \n"); 
#line 20 "t1mc_mc.c"
result = foo__t1mc__1(4); 
#line 21 "t1mc_mc.c"
printf("result = %d\n", result); 
#line 22 "t1mc_mc.c"
printf("-------------\n"); 
#line 25 "t1mc_mc.c"
printf("foo(10) in main \n"); 
#line 26 "t1mc_mc.c"
result = foo__t1mc__2(10); 
#line 27 "t1mc_mc.c"
printf("result = %d\n", result); 
#line 28 "t1mc_mc.c"
printf("-------------\n"); 
#line 30 "t1mc_mc.c"
printf("foo(21) in main \n"); 
#line 31 "t1mc_mc.c"
result = foo__t1mc__3(21); 
#line 32 "t1mc_mc.c"
printf("result = %d\n", result); 
#line 33 "t1mc_mc.c"
printf("-------------\n"); 
#line 36 "t1mc_mc.c"
printf("foo2(21) in main \n"); 
#line 37 "t1mc_mc.c"
result = foo2__t1mc__4(21); 
#line 38 "t1mc_mc.c"
printf("result = %d\n", result); 
#line 39 "t1mc_mc.c"
printf("-------------\n"); 
#line 41 "t1mc_mc.c"

# 371 "t1mc.c"
retValue_acc = 0;
# 373 "t1mc.c"
return (int )retValue_acc;
 
# 376 "t1mc.c"

}

# 380 "t1mc.c"
return (int )retValue_acc;

# 383 "t1mc.c"

}
  int __utac_acc__t2ac__1 (int x  , struct JoinPoint * );

  int __utac_acc__t2ac__2 (int x  );

  int __utac_acc__t2ac__3 (int x  );

  int foo2 (int x  ) ; 

# 394 "t1mc.c"
static inline int  foo2__t1mc__4 (int x  ) {

# 397 "t1mc.c"
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
this.fp = &(foo2_utac__call__wrapper_t1mc_0);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
int __utac__ad__arg1 = x ; 
retValue_acc = __utac_acc__t2ac__1(__utac__ad__arg1 ,&this );
 
 } 
 } 

# 427 "t1mc.c"
return (int )retValue_acc;
}
  int __utac_acc__t1ac__1 (int x  , struct JoinPoint * );

  int __utac_acc__t1ac__2 (int x  , struct JoinPoint * );

  int __utac_acc__t1ac__3 (int x  , struct JoinPoint * );

  int foo (int x  ) ; 

# 438 "t1mc.c"
static inline int  foo__t1mc__3 (int x  ) {

# 441 "t1mc.c"
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
this.fp = &(foo_utac__call__wrapper_t1mc_2);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
int __utac__ad__arg1 = x ; 
retValue_acc = __utac_acc__t1ac__1(__utac__ad__arg1 ,&this );
 
 } 
 } 

# 471 "t1mc.c"
return (int )retValue_acc;
}
  int __utac_acc__t1ac__1 (int x  , struct JoinPoint * );

  int __utac_acc__t1ac__2 (int x  , struct JoinPoint * );

  int __utac_acc__t1ac__3 (int x  , struct JoinPoint * );

  int foo (int x  ) ; 

# 482 "t1mc.c"
static inline int  foo__t1mc__2 (int x  ) {

# 485 "t1mc.c"
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
this.fp = &(foo_utac__call__wrapper_t1mc_5);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
int __utac__ad__arg1 = x ; 
retValue_acc = __utac_acc__t1ac__1(__utac__ad__arg1 ,&this );
 
 } 
 } 

# 515 "t1mc.c"
return (int )retValue_acc;
}
  int __utac_acc__t1ac__1 (int x  , struct JoinPoint * );

  int __utac_acc__t1ac__2 (int x  , struct JoinPoint * );

  int __utac_acc__t1ac__3 (int x  , struct JoinPoint * );

  int foo (int x  ) ; 

# 526 "t1mc.c"
static inline int  foo__t1mc__1 (int x  ) {

# 529 "t1mc.c"
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
this.fp = &(foo_utac__call__wrapper_t1mc_8);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
int __utac__ad__arg1 = x ; 
retValue_acc = __utac_acc__t1ac__1(__utac__ad__arg1 ,&this );
 
 } 
 } 

# 559 "t1mc.c"
return (int )retValue_acc;
}
  int __utac_acc__t1ac__1 (int x  , struct JoinPoint * );

  int __utac_acc__t1ac__2 (int x  , struct JoinPoint * );

  int __utac_acc__t1ac__3 (int x  , struct JoinPoint * );

  int foo (int x  ) ; 

# 570 "t1mc.c"
static inline int  foo__t1mc__0 (int x  ) {

# 573 "t1mc.c"
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
this.fp = &(foo_utac__call__wrapper_t1mc_11);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
int __utac__ad__arg1 = x ; 
retValue_acc = __utac_acc__t1ac__1(__utac__ad__arg1 ,&this );
 
 } 
 } 

# 603 "t1mc.c"
return (int )retValue_acc;
}
 
