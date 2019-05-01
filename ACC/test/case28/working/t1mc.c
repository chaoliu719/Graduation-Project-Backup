
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


  void __utac_acc__t1ac__1 (int i  , struct JoinPoint * );


  void foo1 (int info  ) ; 
  void foo1utac__exec__ori (int info  ) ; 
void ** foo1_utac__exec__wrapper_t1mc_0 (struct JoinPoint * this);  
 

# 39 "t1mc.c"
void ** foo1_utac__exec__wrapper_t1mc_0 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
foo1utac__exec__ori ( *a0 ); 
return this->retValue; 
} 


# 1 "t1mc_mc.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 2 "t1mc_mc.c" 
void foo1(int info)  
# 54 "t1mc.c"
{


 { 
 struct JoinPoint this; 
int* __utac__arg0 = &info; 
const char * __utac__argtype0 = "int"; 
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
this.fp = &(foo1_utac__exec__wrapper_t1mc_0);
this.retValue = __utac__retp ; 
this.retType ="void" ; 
 { 
int __utac__ad__arg1 = info ; 
__utac_acc__t1ac__1(__utac__ad__arg1 ,&this );
 
 } 
 } 


# 85 "t1mc.c"

}
 

# 90 "t1mc.c"
  void foo1utac__exec__ori (int info  ) { 

#line 3 "t1mc_mc.c"
printf("inside foo1, info = %d\n", info); 
 } 
  int __utac_acc__t1ac__2 (int i  , struct JoinPoint * );


  int foo2 (int info  ) ; 
  int foo2utac__exec__ori (int info  ) ; 
void ** foo2_utac__exec__wrapper_t1mc_1 (struct JoinPoint * this);  
 

# 104 "t1mc.c"
void ** foo2_utac__exec__wrapper_t1mc_1 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo2utac__exec__ori ( *a0 ); 
** rp = temp ;  
return this->retValue; 
} 


#line 6 "t1mc_mc.c"
int foo2(int info)  
# 119 "t1mc.c"
{
# 121 "t1mc.c"
int retValue_acc;



 { 
 struct JoinPoint this; 
int* __utac__arg0 = &info; 
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
this.fp = &(foo2_utac__exec__wrapper_t1mc_1);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
int __utac__ad__arg1 = info ; 
retValue_acc = __utac_acc__t1ac__2(__utac__ad__arg1 ,&this );
 
 } 
 } 


# 155 "t1mc.c"
return (int )retValue_acc;

# 158 "t1mc.c"

}
 

# 163 "t1mc.c"
  int foo2utac__exec__ori (int info  ) { 

# 166 "t1mc.c"
int retValue_acc;

#line 7 "t1mc_mc.c"
printf("inside foo2, info = %d\n", info); 
#line 8 "t1mc_mc.c"

# 173 "t1mc.c"
retValue_acc = info * 2;
# 175 "t1mc.c"
return (int )retValue_acc;
 
 } 
static inline int  foo2__t1mc__3 (int info  )  ; 

  int foo2 (int info  ) ; 
void ** foo2_utac__call__wrapper_t1mc_2 (struct JoinPoint * this);  
 

# 185 "t1mc.c"
void ** foo2_utac__call__wrapper_t1mc_2 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo2 ( *a0 ); 
** rp = temp ;  
return this->retValue; 
} 


static inline void  foo1__t1mc__2 (int info  )  ; 

  void foo1 (int info  ) ; 
void ** foo1_utac__call__wrapper_t1mc_3 (struct JoinPoint * this);  
 

# 204 "t1mc.c"
void ** foo1_utac__call__wrapper_t1mc_3 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
foo1 ( *a0 ); 
return this->retValue; 
} 


static inline int  foo2__t1mc__1 (int info  )  ; 

  int foo2 (int info  ) ; 
void ** foo2_utac__call__wrapper_t1mc_4 (struct JoinPoint * this);  
 

# 220 "t1mc.c"
void ** foo2_utac__call__wrapper_t1mc_4 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo2 ( *a0 ); 
** rp = temp ;  
return this->retValue; 
} 


static inline void  foo1__t1mc__0 (int info  )  ; 

  void foo1 (int info  ) ; 
void ** foo1_utac__call__wrapper_t1mc_5 (struct JoinPoint * this);  
 

# 239 "t1mc.c"
void ** foo1_utac__call__wrapper_t1mc_5 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
foo1 ( *a0 ); 
return this->retValue; 
} 


#line 11 "t1mc_mc.c"
int main()  
# 251 "t1mc.c"
{
# 253 "t1mc.c"
int retValue_acc;




# 259 "t1mc.c"
{

#line 13 "t1mc_mc.c"
foo1__t1mc__0(3); 
#line 15 "t1mc_mc.c"
foo2__t1mc__1(9); 
#line 18 "t1mc_mc.c"
foo1__t1mc__2(4); 
#line 20 "t1mc_mc.c"
foo2__t1mc__3((-2)); 
#line 22 "t1mc_mc.c"

# 272 "t1mc.c"
retValue_acc = 0;
# 274 "t1mc.c"
return (int )retValue_acc;
 
# 277 "t1mc.c"

}

# 281 "t1mc.c"
return (int )retValue_acc;

# 284 "t1mc.c"

}
  int __utac_acc__t1ac__4 (int i  , struct JoinPoint * );

  int foo2 (int info  ) ; 

# 291 "t1mc.c"
static inline int  foo2__t1mc__3 (int info  ) {

# 294 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
int* __utac__arg0 = &info; 
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
this.fp = &(foo2_utac__call__wrapper_t1mc_2);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
int __utac__ad__arg1 = info ; 
retValue_acc = __utac_acc__t1ac__4(__utac__ad__arg1 ,&this );
 
 } 
 } 

# 324 "t1mc.c"
return (int )retValue_acc;
}
  void __utac_acc__t1ac__3 (int i  , struct JoinPoint * );

  void foo1 (int info  ) ; 

# 331 "t1mc.c"
static inline void  foo1__t1mc__2 (int info  ) {
 { 
 struct JoinPoint this; 
int* __utac__arg0 = &info; 
const char * __utac__argtype0 = "int"; 
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
this.fp = &(foo1_utac__call__wrapper_t1mc_3);
this.retValue = __utac__retp ; 
this.retType ="void" ; 
 { 
int __utac__ad__arg1 = info ; 
__utac_acc__t1ac__3(__utac__ad__arg1 ,&this );
 
 } 
 } 
}
  int __utac_acc__t1ac__4 (int i  , struct JoinPoint * );

  int foo2 (int info  ) ; 

# 363 "t1mc.c"
static inline int  foo2__t1mc__1 (int info  ) {

# 366 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
int* __utac__arg0 = &info; 
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
this.fp = &(foo2_utac__call__wrapper_t1mc_4);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
int __utac__ad__arg1 = info ; 
retValue_acc = __utac_acc__t1ac__4(__utac__ad__arg1 ,&this );
 
 } 
 } 

# 396 "t1mc.c"
return (int )retValue_acc;
}
  void __utac_acc__t1ac__3 (int i  , struct JoinPoint * );

  void foo1 (int info  ) ; 

# 403 "t1mc.c"
static inline void  foo1__t1mc__0 (int info  ) {
 { 
 struct JoinPoint this; 
int* __utac__arg0 = &info; 
const char * __utac__argtype0 = "int"; 
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
this.fp = &(foo1_utac__call__wrapper_t1mc_5);
this.retValue = __utac__retp ; 
this.retType ="void" ; 
 { 
int __utac__ad__arg1 = info ; 
__utac_acc__t1ac__3(__utac__ad__arg1 ,&this );
 
 } 
 } 
}
 
