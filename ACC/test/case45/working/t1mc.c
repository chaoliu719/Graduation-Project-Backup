
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
extern void foo2(char *c); 
#line 3 "t1mc_mc.c"
void foo(int a)  
# 38 "t1mc.c"
{



# 43 "t1mc.c"
{

#line 4 "t1mc_mc.c"
printf("inside foo\n"); 
# 48 "t1mc.c"

}

# 52 "t1mc.c"

}
 
#line 7 "t1mc_mc.c"
int foo3(char *s, int b)  
# 58 "t1mc.c"
{
# 60 "t1mc.c"
int retValue_acc;




# 66 "t1mc.c"
{

#line 8 "t1mc_mc.c"
printf("inside foo3, s =%s, b = %d\n", s, b); 
#line 9 "t1mc_mc.c"
foo2("call foo2 in foo3\n"); 
#line 10 "t1mc_mc.c"

# 75 "t1mc.c"
retValue_acc = 9;
# 77 "t1mc.c"
return (int )retValue_acc;
 
# 80 "t1mc.c"

}

# 84 "t1mc.c"
return (int )retValue_acc;

# 87 "t1mc.c"

}
 
int __utac__cflow_t1ac_0 ( int , int);


int __utac__cflow_t1ac_0 ( int , int);


int __utac__cflow_t1ac_0 ( int , int);


static inline int  foo3__t1mc__0 (char* s ,int b  )  ; 

  int foo3 (char* s ,int b  ) ; 
void ** foo3_utac__call__wrapper_t1mc_0 (struct JoinPoint * this);  
 

# 106 "t1mc.c"
void ** foo3_utac__call__wrapper_t1mc_0 (struct JoinPoint * this) { 
 
char* * a0  = ( char* *) (this->args[ 0 ]); 
  
int * a1  = ( int *) (this->args[ 1 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo3 ( *a0 , *a1 ); 
** rp = temp ;  
return this->retValue; 
} 


#line 12 "t1mc_mc.c"
int main()  
# 123 "t1mc.c"
{
# 125 "t1mc.c"
int retValue_acc;




{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t1ac_0, __utac__cflow_t1ac_0(3,0)); } 
 } 
__utac__cflow_t1ac_0 ( 1, 0 ) ; 

}

# 141 "t1mc.c"
{

#line 13 "t1mc_mc.c"
foo(4); 
#line 14 "t1mc_mc.c"
printf("---------\n"); 
#line 15 "t1mc_mc.c"
foo3__t1mc__0("abc", 3); 
#line 16 "t1mc_mc.c"

# 152 "t1mc.c"
retValue_acc = 0;
{
__utac__cflow_t1ac_0 ( 2, 0 ) ; 

}

# 159 "t1mc.c"
return (int )retValue_acc;
 
# 162 "t1mc.c"

}

{
__utac__cflow_t1ac_0 ( 2, 0 ) ; 

}

# 171 "t1mc.c"
return (int )retValue_acc;

# 174 "t1mc.c"

}
  int __utac_acc__t1ac__1 (char* x ,int y  , struct JoinPoint * );
int __utac__cflow_t1ac_0(int, int);

  int foo3 (char* s ,int b  ) ; 

# 182 "t1mc.c"
static inline int  foo3__t1mc__0 (char* s ,int b  ) {

# 185 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
char** __utac__arg0 = &s; 
const char * __utac__argtype0 = "char*"; 
int* __utac__arg1 = &b; 
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
this.fp = &(foo3_utac__call__wrapper_t1mc_0);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
this.funcName = "main"; 
this.targetName = "foo3"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "call"; 
 { 
char* __utac__ad__arg1 = s ; 
int __utac__ad__arg2 = b ; 
if( __utac__cflow_t1ac_0(3,0) ) { 
retValue_acc = __utac_acc__t1ac__1(__utac__ad__arg1 ,__utac__ad__arg2 ,&this );
 } 

 else { 

# 225 "t1mc.c"
retValue_acc = (** (int **)foo3_utac__call__wrapper_t1mc_0(&this ) ); 
 } 
 
 } 
 } 

# 232 "t1mc.c"
return (int )retValue_acc;
}
 
