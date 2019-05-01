
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
int foo1(char *a, char *b, int c)  
# 36 "t1mc.c"
{
# 38 "t1mc.c"
int retValue_acc;




# 44 "t1mc.c"
{

#line 2 "t1mc_mc.c"
printf("inside foo1, b = %s\n", b); 
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
 
#line 6 "t1mc_mc.c"
int foo2(int a, int b, int c, char *d, char e)  
# 69 "t1mc.c"
{
# 71 "t1mc.c"
int retValue_acc;




# 77 "t1mc.c"
{

#line 7 "t1mc_mc.c"
printf("inside foo2, d = %s\n", d); 
# 82 "t1mc.c"

}

# 86 "t1mc.c"
return (int )retValue_acc;

# 89 "t1mc.c"

}
 
static inline int  foo2__t1mc__3 (int a ,int b ,int c ,char* d ,char e  )  ; 

  int foo2 (int a ,int b ,int c ,char* d ,char e  ) ; 
void ** foo2_utac__call__wrapper_t1mc_0 (struct JoinPoint * this);  
 

# 99 "t1mc.c"
void ** foo2_utac__call__wrapper_t1mc_0 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int * a1  = ( int *) (this->args[ 1 ]); 
  
int * a2  = ( int *) (this->args[ 2 ]); 
  
char* * a3  = ( char* *) (this->args[ 3 ]); 
  
char * a4  = ( char *) (this->args[ 4 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo2 ( *a0 , *a1 , *a2 , *a3 , *a4 ); 
** rp = temp ;  
return this->retValue; 
} 


static inline int  foo1__t1mc__2 (char* a ,char* b ,int c  )  ; 

  int foo1 (char* a ,char* b ,int c  ) ; 
void ** foo1_utac__call__wrapper_t1mc_1 (struct JoinPoint * this);  
 

# 126 "t1mc.c"
void ** foo1_utac__call__wrapper_t1mc_1 (struct JoinPoint * this) { 
 
char* * a0  = ( char* *) (this->args[ 0 ]); 
  
char* * a1  = ( char* *) (this->args[ 1 ]); 
  
int * a2  = ( int *) (this->args[ 2 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo1 ( *a0 , *a1 , *a2 ); 
** rp = temp ;  
return this->retValue; 
} 


static inline int  foo2__t1mc__1 (int a ,int b ,int c ,char* d ,char e  )  ; 

  int foo2 (int a ,int b ,int c ,char* d ,char e  ) ; 
void ** foo2_utac__call__wrapper_t1mc_2 (struct JoinPoint * this);  
 

# 149 "t1mc.c"
void ** foo2_utac__call__wrapper_t1mc_2 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int * a1  = ( int *) (this->args[ 1 ]); 
  
int * a2  = ( int *) (this->args[ 2 ]); 
  
char* * a3  = ( char* *) (this->args[ 3 ]); 
  
char * a4  = ( char *) (this->args[ 4 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo2 ( *a0 , *a1 , *a2 , *a3 , *a4 ); 
** rp = temp ;  
return this->retValue; 
} 


static inline int  foo1__t1mc__0 (char* a ,char* b ,int c  )  ; 

  int foo1 (char* a ,char* b ,int c  ) ; 
void ** foo1_utac__call__wrapper_t1mc_3 (struct JoinPoint * this);  
 

# 176 "t1mc.c"
void ** foo1_utac__call__wrapper_t1mc_3 (struct JoinPoint * this) { 
 
char* * a0  = ( char* *) (this->args[ 0 ]); 
  
char* * a1  = ( char* *) (this->args[ 1 ]); 
  
int * a2  = ( int *) (this->args[ 2 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo1 ( *a0 , *a1 , *a2 ); 
** rp = temp ;  
return this->retValue; 
} 


#line 10 "t1mc_mc.c"
int main()  
# 195 "t1mc.c"
{
# 197 "t1mc.c"
int retValue_acc;




# 203 "t1mc.c"
{

#line 11 "t1mc_mc.c"
foo1__t1mc__0("abc", "call foo1", 3); 
#line 12 "t1mc_mc.c"
foo2__t1mc__1(1, 2, 3, "call foo2", 'c'); 
#line 13 "t1mc_mc.c"
foo1__t1mc__2("abc", 0, 4); 
#line 14 "t1mc_mc.c"
foo2__t1mc__3(1, 2, 3, 0, 'd'); 
#line 15 "t1mc_mc.c"

# 216 "t1mc.c"
retValue_acc = 0;
# 218 "t1mc.c"
return (int )retValue_acc;
 
# 221 "t1mc.c"

}

# 225 "t1mc.c"
return (int )retValue_acc;

# 228 "t1mc.c"

}
  int __utac_acc__t1ac__1 (char* x  , struct JoinPoint * );

  int foo2 (int a ,int b ,int c ,char* d ,char e  ) ; 

# 235 "t1mc.c"
static inline int  foo2__t1mc__3 (int a ,int b ,int c ,char* d ,char e  ) {

# 238 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
int* __utac__arg0 = &a; 
const char * __utac__argtype0 = "int"; 
int* __utac__arg1 = &b; 
const char * __utac__argtype1 = "int"; 
int* __utac__arg2 = &c; 
const char * __utac__argtype2 = "int"; 
char** __utac__arg3 = &d; 
const char * __utac__argtype3 = "char*"; 
char* __utac__arg4 = &e; 
const char * __utac__argtype4 = "char"; 
 void * __utac__args[5]; 
 const char * __utac__argstype[5];
this.argsCount = 5 ; 
 void * __utac__retp[1]; 
int __utac__ret ;
__utac__args[0] = (void*)(__utac__arg0);
__utac__argstype[0] = __utac__argtype0;
__utac__args[1] = (void*)(__utac__arg1);
__utac__argstype[1] = __utac__argtype1;
__utac__args[2] = (void*)(__utac__arg2);
__utac__argstype[2] = __utac__argtype2;
__utac__args[3] = (void*)(__utac__arg3);
__utac__argstype[3] = __utac__argtype3;
__utac__args[4] = (void*)(__utac__arg4);
__utac__argstype[4] = __utac__argtype4;
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
char* __utac__ad__arg1 = d ; 
retValue_acc = __utac_acc__t1ac__1(__utac__ad__arg1 ,&this );
 
 } 
 } 

# 284 "t1mc.c"
return (int )retValue_acc;
}
  int __utac_acc__t1ac__1 (char* x  , struct JoinPoint * );

  int foo1 (char* a ,char* b ,int c  ) ; 

# 291 "t1mc.c"
static inline int  foo1__t1mc__2 (char* a ,char* b ,int c  ) {

# 294 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
char** __utac__arg0 = &a; 
const char * __utac__argtype0 = "char*"; 
char** __utac__arg1 = &b; 
const char * __utac__argtype1 = "char*"; 
int* __utac__arg2 = &c; 
const char * __utac__argtype2 = "int"; 
 void * __utac__args[3]; 
 const char * __utac__argstype[3];
this.argsCount = 3 ; 
 void * __utac__retp[1]; 
int __utac__ret ;
__utac__args[0] = (void*)(__utac__arg0);
__utac__argstype[0] = __utac__argtype0;
__utac__args[1] = (void*)(__utac__arg1);
__utac__argstype[1] = __utac__argtype1;
__utac__args[2] = (void*)(__utac__arg2);
__utac__argstype[2] = __utac__argtype2;
*__utac__retp  = (void *)(&__utac__ret);
this.args = __utac__args; 
this.argsType = __utac__argstype; 
{ extern void * __utac__get_this_arg (int, struct JoinPoint *)  ; 
  extern const char * __utac__get_this_argtype (int, struct JoinPoint *)  ; 
this.arg = __utac__get_this_arg ; 
this.argType= __utac__get_this_argtype ; } 
this.fp = &(foo1_utac__call__wrapper_t1mc_1);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
char* __utac__ad__arg1 = b ; 
retValue_acc = __utac_acc__t1ac__1(__utac__ad__arg1 ,&this );
 
 } 
 } 

# 332 "t1mc.c"
return (int )retValue_acc;
}
  int __utac_acc__t1ac__1 (char* x  , struct JoinPoint * );

  int foo2 (int a ,int b ,int c ,char* d ,char e  ) ; 

# 339 "t1mc.c"
static inline int  foo2__t1mc__1 (int a ,int b ,int c ,char* d ,char e  ) {

# 342 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
int* __utac__arg0 = &a; 
const char * __utac__argtype0 = "int"; 
int* __utac__arg1 = &b; 
const char * __utac__argtype1 = "int"; 
int* __utac__arg2 = &c; 
const char * __utac__argtype2 = "int"; 
char** __utac__arg3 = &d; 
const char * __utac__argtype3 = "char*"; 
char* __utac__arg4 = &e; 
const char * __utac__argtype4 = "char"; 
 void * __utac__args[5]; 
 const char * __utac__argstype[5];
this.argsCount = 5 ; 
 void * __utac__retp[1]; 
int __utac__ret ;
__utac__args[0] = (void*)(__utac__arg0);
__utac__argstype[0] = __utac__argtype0;
__utac__args[1] = (void*)(__utac__arg1);
__utac__argstype[1] = __utac__argtype1;
__utac__args[2] = (void*)(__utac__arg2);
__utac__argstype[2] = __utac__argtype2;
__utac__args[3] = (void*)(__utac__arg3);
__utac__argstype[3] = __utac__argtype3;
__utac__args[4] = (void*)(__utac__arg4);
__utac__argstype[4] = __utac__argtype4;
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
char* __utac__ad__arg1 = d ; 
retValue_acc = __utac_acc__t1ac__1(__utac__ad__arg1 ,&this );
 
 } 
 } 

# 388 "t1mc.c"
return (int )retValue_acc;
}
  int __utac_acc__t1ac__1 (char* x  , struct JoinPoint * );

  int foo1 (char* a ,char* b ,int c  ) ; 

# 395 "t1mc.c"
static inline int  foo1__t1mc__0 (char* a ,char* b ,int c  ) {

# 398 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
char** __utac__arg0 = &a; 
const char * __utac__argtype0 = "char*"; 
char** __utac__arg1 = &b; 
const char * __utac__argtype1 = "char*"; 
int* __utac__arg2 = &c; 
const char * __utac__argtype2 = "int"; 
 void * __utac__args[3]; 
 const char * __utac__argstype[3];
this.argsCount = 3 ; 
 void * __utac__retp[1]; 
int __utac__ret ;
__utac__args[0] = (void*)(__utac__arg0);
__utac__argstype[0] = __utac__argtype0;
__utac__args[1] = (void*)(__utac__arg1);
__utac__argstype[1] = __utac__argtype1;
__utac__args[2] = (void*)(__utac__arg2);
__utac__argstype[2] = __utac__argtype2;
*__utac__retp  = (void *)(&__utac__ret);
this.args = __utac__args; 
this.argsType = __utac__argstype; 
{ extern void * __utac__get_this_arg (int, struct JoinPoint *)  ; 
  extern const char * __utac__get_this_argtype (int, struct JoinPoint *)  ; 
this.arg = __utac__get_this_arg ; 
this.argType= __utac__get_this_argtype ; } 
this.fp = &(foo1_utac__call__wrapper_t1mc_3);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
char* __utac__ad__arg1 = b ; 
retValue_acc = __utac_acc__t1ac__1(__utac__ad__arg1 ,&this );
 
 } 
 } 

# 436 "t1mc.c"
return (int )retValue_acc;
}
 
