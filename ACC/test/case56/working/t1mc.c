
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
# 3 "t1mc_mc.c" 
struct X {int a; 



int b;



int c;
}; 
#line 5 "t1mc_mc.c"
int foo1(int a[])  
# 47 "t1mc.c"
{
# 49 "t1mc.c"
int retValue_acc;




# 55 "t1mc.c"
{

#line 6 "t1mc_mc.c"
printf("inside foo1, a[0] = %d, a[1] = %d\n", a[0], a[1]); 
#line 7 "t1mc_mc.c"

# 62 "t1mc.c"
retValue_acc = 0;
# 64 "t1mc.c"
return (int )retValue_acc;
 
# 67 "t1mc.c"

}

# 71 "t1mc.c"
return (int )retValue_acc;

# 74 "t1mc.c"

}
 
static inline int  foo1__t1mc__0 (int* a  )  ; 

  int foo1 (int* a  ) ; 
void ** foo1_utac__call__wrapper_t1mc_0 (struct JoinPoint * this);  
 

# 84 "t1mc.c"
void ** foo1_utac__call__wrapper_t1mc_0 (struct JoinPoint * this) { 
 
int* * a0  = ( int* *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo1 ( *a0 ); 
** rp = temp ;  
return this->retValue; 
} 


#line 11 "t1mc_mc.c"
int main()  
# 99 "t1mc.c"
{
# 101 "t1mc.c"
int retValue_acc;




# 107 "t1mc.c"
{

#line 12 "t1mc_mc.c"

#line 12 "t1mc_mc.c"
int a[3] = {1,2,3};
#line 13 "t1mc_mc.c"
foo1__t1mc__0(a); 
#line 14 "t1mc_mc.c"

# 118 "t1mc.c"
retValue_acc = 0;
# 120 "t1mc.c"
return (int )retValue_acc;
 
# 123 "t1mc.c"

}

# 127 "t1mc.c"
return (int )retValue_acc;

# 130 "t1mc.c"

}
  int __utac_acc__t1ac__1 (int* p  , struct JoinPoint * );

  int foo1 (int* a  ) ; 

# 137 "t1mc.c"
static inline int  foo1__t1mc__0 (int* a  ) {

# 140 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
int** __utac__arg0 = &a; 
const char * __utac__argtype0 = "int*"; 
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
this.fp = &(foo1_utac__call__wrapper_t1mc_0);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
this.funcName = "main"; 
this.targetName = "foo1"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "call"; 
 { 
int* __utac__ad__arg1 = a ; 
retValue_acc = __utac_acc__t1ac__1(__utac__ad__arg1 ,&this );
 
 } 
 } 

# 174 "t1mc.c"
return (int )retValue_acc;
}
 
