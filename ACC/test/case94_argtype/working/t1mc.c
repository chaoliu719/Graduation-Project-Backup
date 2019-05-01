
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


#line 3 "t1mc.mc"
struct A {int b; 
}; 
#line 7 "t1mc.mc"
void foo(int a, char b, char *c)  
# 36 "t1mc.c"
{



# 41 "t1mc.c"
{

# 44 "t1mc.c"

}

# 48 "t1mc.c"

}
 
#line 12 "t1mc.mc"
char *foo2(double a, char *b)  
# 54 "t1mc.c"
{
# 56 "t1mc.c"
char* retValue_acc;




# 62 "t1mc.c"
{

# 65 "t1mc.c"

}

# 69 "t1mc.c"
return (char* )retValue_acc;

# 72 "t1mc.c"

}
 
#line 17 "t1mc.mc"
struct A *foo3(const char a, const char *c)  
# 78 "t1mc.c"
{
# 80 "t1mc.c"
struct A * retValue_acc;




# 86 "t1mc.c"
{

# 89 "t1mc.c"

}

# 93 "t1mc.c"
return (struct A * )retValue_acc;

# 96 "t1mc.c"

}
 
#line 21 "t1mc.mc"
double foo4(struct A *a)  
# 102 "t1mc.c"
{
# 104 "t1mc.c"
double retValue_acc;




# 110 "t1mc.c"
{

# 113 "t1mc.c"

}

# 117 "t1mc.c"
return (double )retValue_acc;

# 120 "t1mc.c"

}
 
static inline double  foo4__t1mc__3 (struct A * a  )  ; 

static inline struct A *  foo3__t1mc__2 (char const a ,char const* c  )  ; 

static inline char*  foo2__t1mc__1 (double a ,char* b  )  ; 

static inline void  foo__t1mc__0 (int a ,char b ,char* c  )  ; 

#line 27 "t1mc.mc"
int main()  
# 134 "t1mc.c"
{
# 136 "t1mc.c"
int retValue_acc;




# 142 "t1mc.c"
{

#line 29 "t1mc.mc"

#line 29 "t1mc.mc"
struct A a;
#line 30 "t1mc.mc"
foo__t1mc__0(3, 4, "abc"); 
#line 33 "t1mc.mc"
foo2__t1mc__1(3, "c"); 
#line 35 "t1mc.mc"
foo3__t1mc__2('3', "ac"); 
#line 38 "t1mc.mc"
foo4__t1mc__3((&a)); 
#line 40 "t1mc.mc"

# 159 "t1mc.c"
retValue_acc = 0;
# 161 "t1mc.c"
return (int )retValue_acc;
 
# 164 "t1mc.c"

}

# 168 "t1mc.c"
return (int )retValue_acc;

# 171 "t1mc.c"

}
  void __utac_acc__t1ac__1 (  struct JoinPoint * );

  double foo4 (struct A * a  ) ; 

# 178 "t1mc.c"
static inline double  foo4__t1mc__3 (struct A * a  ) {

# 181 "t1mc.c"
double retValue_acc;
 { 
 struct JoinPoint this; 
struct A ** __utac__arg0 = &a; 
const char * __utac__argtype0 = "struct A *"; 
 void * __utac__args[1]; 
 const char * __utac__argstype[1];
this.argsCount = 1 ; 
 void * __utac__retp[1]; 
double __utac__ret ;
__utac__args[0] = (void*)(__utac__arg0);
__utac__argstype[0] = __utac__argtype0;
*__utac__retp  = (void *)(&__utac__ret);
this.args = __utac__args; 
this.argsType = __utac__argstype; 
{ extern void * __utac__get_this_arg (int, struct JoinPoint *)  ; 
  extern const char * __utac__get_this_argtype (int, struct JoinPoint *)  ; 
this.arg = __utac__get_this_arg ; 
this.argType= __utac__get_this_argtype ; } 
this.retValue = __utac__retp ; 
this.retType ="double" ; 
this.funcName = "main"; 
this.targetName = "foo4"; 
this.fileName = "t1mc.mc"; 
this.kind = "call"; 
 { 
__utac_acc__t1ac__1(&this );
 
 } 
 } 

# 213 "t1mc.c"
retValue_acc = foo4 ( a ) ;  

# 216 "t1mc.c"
return (double )retValue_acc;
}
  void __utac_acc__t1ac__1 (  struct JoinPoint * );

  struct A * foo3 (char const a ,char const* c  ) ; 

# 223 "t1mc.c"
static inline struct A *  foo3__t1mc__2 (char const a ,char const* c  ) {

# 226 "t1mc.c"
struct A * retValue_acc;
 { 
 struct JoinPoint this; 
char const* __utac__arg0 = &a; 
const char * __utac__argtype0 = "char const"; 
char const** __utac__arg1 = &c; 
const char * __utac__argtype1 = "char const*"; 
 void * __utac__args[2]; 
 const char * __utac__argstype[2];
this.argsCount = 2 ; 
 void * __utac__retp[1]; 
struct A * __utac__ret ;
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
this.retValue = __utac__retp ; 
this.retType ="struct A *" ; 
this.funcName = "main"; 
this.targetName = "foo3"; 
this.fileName = "t1mc.mc"; 
this.kind = "call"; 
 { 
__utac_acc__t1ac__1(&this );
 
 } 
 } 

# 262 "t1mc.c"
retValue_acc = foo3 ( a , c ) ;  

# 265 "t1mc.c"
return (struct A * )retValue_acc;
}
  void __utac_acc__t1ac__1 (  struct JoinPoint * );

  char* foo2 (double a ,char* b  ) ; 

# 272 "t1mc.c"
static inline char*  foo2__t1mc__1 (double a ,char* b  ) {

# 275 "t1mc.c"
char* retValue_acc;
 { 
 struct JoinPoint this; 
double* __utac__arg0 = &a; 
const char * __utac__argtype0 = "double"; 
char** __utac__arg1 = &b; 
const char * __utac__argtype1 = "char*"; 
 void * __utac__args[2]; 
 const char * __utac__argstype[2];
this.argsCount = 2 ; 
 void * __utac__retp[1]; 
char* __utac__ret ;
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
this.retValue = __utac__retp ; 
this.retType ="char*" ; 
this.funcName = "main"; 
this.targetName = "foo2"; 
this.fileName = "t1mc.mc"; 
this.kind = "call"; 
 { 
__utac_acc__t1ac__1(&this );
 
 } 
 } 

# 311 "t1mc.c"
retValue_acc = foo2 ( a , b ) ;  

# 314 "t1mc.c"
return (char* )retValue_acc;
}
  void __utac_acc__t1ac__1 (  struct JoinPoint * );

  void foo (int a ,char b ,char* c  ) ; 

# 321 "t1mc.c"
static inline void  foo__t1mc__0 (int a ,char b ,char* c  ) {
 { 
 struct JoinPoint this; 
int* __utac__arg0 = &a; 
const char * __utac__argtype0 = "int"; 
char* __utac__arg1 = &b; 
const char * __utac__argtype1 = "char"; 
char** __utac__arg2 = &c; 
const char * __utac__argtype2 = "char*"; 
 void * __utac__args[3]; 
 const char * __utac__argstype[3];
this.argsCount = 3 ; 
 void * __utac__retp[1]; 
__utac__args[0] = (void*)(__utac__arg0);
__utac__argstype[0] = __utac__argtype0;
__utac__args[1] = (void*)(__utac__arg1);
__utac__argstype[1] = __utac__argtype1;
__utac__args[2] = (void*)(__utac__arg2);
__utac__argstype[2] = __utac__argtype2;
this.args = __utac__args; 
this.argsType = __utac__argstype; 
{ extern void * __utac__get_this_arg (int, struct JoinPoint *)  ; 
  extern const char * __utac__get_this_argtype (int, struct JoinPoint *)  ; 
this.arg = __utac__get_this_arg ; 
this.argType= __utac__get_this_argtype ; } 
this.retValue = __utac__retp ; 
this.retType ="void" ; 
this.funcName = "main"; 
this.targetName = "foo"; 
this.fileName = "t1mc.mc"; 
this.kind = "call"; 
 { 
__utac_acc__t1ac__1(&this );
 
 } 
 } 
foo ( a , b , c ) ;  
}
 
