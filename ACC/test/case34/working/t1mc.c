
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
long long foo(int a, long long b, long long d, int c)  
# 36 "t1mc.c"
{
# 38 "t1mc.c"
long long retValue_acc;




# 44 "t1mc.c"
{

#line 2 "t1mc_mc.c"
printf("in foo\n"); 
# 49 "t1mc.c"

}

# 53 "t1mc.c"
return (long long )retValue_acc;

# 56 "t1mc.c"

}
 
static inline long long  foo__t1mc__0 (int a ,long long b ,long long d ,int c  )  ; 

  long long foo (int a ,long long b ,long long d ,int c  ) ; 
void ** foo_utac__call__wrapper_t1mc_0 (struct JoinPoint * this);  
 

# 66 "t1mc.c"
void ** foo_utac__call__wrapper_t1mc_0 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
long long * a1  = ( long long *) (this->args[ 1 ]); 
  
long long * a2  = ( long long *) (this->args[ 2 ]); 
  
int * a3  = ( int *) (this->args[ 3 ]); 
  
long long **  rp = (  long long **)(this->retValue); 
long long  temp ;  
temp =  foo ( *a0 , *a1 , *a2 , *a3 ); 
** rp = temp ;  
return this->retValue; 
} 


#line 5 "t1mc_mc.c"
int main()  
# 87 "t1mc.c"
{
# 89 "t1mc.c"
int retValue_acc;




# 95 "t1mc.c"
{

#line 6 "t1mc_mc.c"
foo__t1mc__0(3, 4, 5, 6); 
#line 7 "t1mc_mc.c"

# 102 "t1mc.c"
retValue_acc = 0;
# 104 "t1mc.c"
return (int )retValue_acc;
 
# 107 "t1mc.c"

}

# 111 "t1mc.c"
return (int )retValue_acc;

# 114 "t1mc.c"

}
  void __utac_acc__t1ac__1 (void);

  long long __utac_acc__t1ac__2 (  struct JoinPoint * );

  long long foo (int a ,long long b ,long long d ,int c  ) ; 

# 123 "t1mc.c"
static inline long long  foo__t1mc__0 (int a ,long long b ,long long d ,int c  ) {

# 126 "t1mc.c"
long long retValue_acc;

{
__utac_acc__t1ac__1();

}
 { 
 struct JoinPoint this; 
int* __utac__arg0 = &a; 
const char * __utac__argtype0 = "int"; 
long long* __utac__arg1 = &b; 
const char * __utac__argtype1 = "long long"; 
long long* __utac__arg2 = &d; 
const char * __utac__argtype2 = "long long"; 
int* __utac__arg3 = &c; 
const char * __utac__argtype3 = "int"; 
 void * __utac__args[4]; 
 const char * __utac__argstype[4];
this.argsCount = 4 ; 
 void * __utac__retp[1]; 
long long __utac__ret ;
__utac__args[0] = (void*)(__utac__arg0);
__utac__argstype[0] = __utac__argtype0;
__utac__args[1] = (void*)(__utac__arg1);
__utac__argstype[1] = __utac__argtype1;
__utac__args[2] = (void*)(__utac__arg2);
__utac__argstype[2] = __utac__argtype2;
__utac__args[3] = (void*)(__utac__arg3);
__utac__argstype[3] = __utac__argtype3;
*__utac__retp  = (void *)(&__utac__ret);
this.args = __utac__args; 
this.argsType = __utac__argstype; 
{ extern void * __utac__get_this_arg (int, struct JoinPoint *)  ; 
  extern const char * __utac__get_this_argtype (int, struct JoinPoint *)  ; 
this.arg = __utac__get_this_arg ; 
this.argType= __utac__get_this_argtype ; } 
this.fp = &(foo_utac__call__wrapper_t1mc_0);
this.retValue = __utac__retp ; 
this.retType ="long long" ; 
 { 
retValue_acc = __utac_acc__t1ac__2(&this );
 
 } 
 } 

# 172 "t1mc.c"
return (long long )retValue_acc;
}
 
