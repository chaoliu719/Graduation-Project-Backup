
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


  void __utac_acc__t1ac__1 (int* i ,int j  , struct JoinPoint * );


  void foo1 (int* a1 ,int a2 ,int a3  ) ; 
  void foo1utac__exec__ori (int* a1 ,int a2 ,int a3  ) ; 
void ** foo1_utac__exec__wrapper_t1mc_0 (struct JoinPoint * this);  
 

# 39 "t1mc.c"
void ** foo1_utac__exec__wrapper_t1mc_0 (struct JoinPoint * this) { 
 
int* * a0  = ( int* *) (this->args[ 0 ]); 
  
int * a1  = ( int *) (this->args[ 1 ]); 
  
int * a2  = ( int *) (this->args[ 2 ]); 
  
foo1utac__exec__ori ( *a0 , *a1 , *a2 ); 
return this->retValue; 
} 


# 1 "t1mc_mc.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 2 "t1mc_mc.c" 
void foo1(int *a1, int a2, int a3)  
# 58 "t1mc.c"
{


 { 
 struct JoinPoint this; 
int** __utac__arg0 = &a1; 
const char * __utac__argtype0 = "int*"; 
int* __utac__arg1 = &a2; 
const char * __utac__argtype1 = "int"; 
int* __utac__arg2 = &a3; 
const char * __utac__argtype2 = "int"; 
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
this.fp = &(foo1_utac__exec__wrapper_t1mc_0);
this.retValue = __utac__retp ; 
this.retType ="void" ; 
 { 
int* __utac__ad__arg1 = &a2 ; 
int __utac__ad__arg2 = a3 ; 
__utac_acc__t1ac__1(__utac__ad__arg1 ,__utac__ad__arg2 ,&this );
 
 } 
 } 


# 98 "t1mc.c"

}
 

# 103 "t1mc.c"
  void foo1utac__exec__ori (int* a1 ,int a2 ,int a3  ) { 

#line 3 "t1mc_mc.c"
printf("inside foo1, a1 = %d , a2 = %d , a3 = %d \n", (*a1), a2, a3); 
#line 4 "t1mc_mc.c"
printf("sum = %d\n", (*a1) + a2 + a3); 
 } 
#line 8 "t1mc_mc.c"
void foo2(int a1, int *a2, int a3)  
# 113 "t1mc.c"
{



# 118 "t1mc.c"
{

#line 9 "t1mc_mc.c"
printf("inside foo2, a1 = %d, a2 = %d, a3 = %d \n", a1, (*a2), a3); 
# 123 "t1mc.c"

}

# 127 "t1mc.c"

}
 
static inline void  foo2__t1mc__0 (int a1 ,int* a2 ,int a3  )  ; 

  void foo2 (int a1 ,int* a2 ,int a3  ) ; 
void ** foo2_utac__call__wrapper_t1mc_1 (struct JoinPoint * this);  
 

# 137 "t1mc.c"
void ** foo2_utac__call__wrapper_t1mc_1 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int* * a1  = ( int* *) (this->args[ 1 ]); 
  
int * a2  = ( int *) (this->args[ 2 ]); 
  
foo2 ( *a0 , *a1 , *a2 ); 
return this->retValue; 
} 


#line 13 "t1mc_mc.c"
int main()  
# 153 "t1mc.c"
{
# 155 "t1mc.c"
int retValue_acc;




# 161 "t1mc.c"
{

#line 14 "t1mc_mc.c"

#line 14 "t1mc_mc.c"
int n = 3;
#line 15 "t1mc_mc.c"

#line 15 "t1mc_mc.c"
int m = 99;
#line 16 "t1mc_mc.c"
printf("call foo1 in main, argu = %d,%d,%d\n", n, 4, 5); 
#line 17 "t1mc_mc.c"
foo1((&n), 4, 5); 
#line 19 "t1mc_mc.c"
printf("call foo2 in main, argu = %d,%d,%d\n", 1, m, 20); 
#line 20 "t1mc_mc.c"
foo2__t1mc__0(1, (&m), 20); 
#line 23 "t1mc_mc.c"

# 182 "t1mc.c"
retValue_acc = 0;
# 184 "t1mc.c"
return (int )retValue_acc;
 
# 187 "t1mc.c"

}

# 191 "t1mc.c"
return (int )retValue_acc;

# 194 "t1mc.c"

}
  void __utac_acc__t1ac__2 (int** i ,int* j  , struct JoinPoint * );

  void foo2 (int a1 ,int* a2 ,int a3  ) ; 

# 201 "t1mc.c"
static inline void  foo2__t1mc__0 (int a1 ,int* a2 ,int a3  ) {
 { 
 struct JoinPoint this; 
int* __utac__arg0 = &a1; 
const char * __utac__argtype0 = "int"; 
int** __utac__arg1 = &a2; 
const char * __utac__argtype1 = "int*"; 
int* __utac__arg2 = &a3; 
const char * __utac__argtype2 = "int"; 
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
this.fp = &(foo2_utac__call__wrapper_t1mc_1);
this.retValue = __utac__retp ; 
this.retType ="void" ; 
 { 
int** __utac__ad__arg1 = &a2 ; 
int* __utac__ad__arg2 = &a3 ; 
__utac_acc__t1ac__2(__utac__ad__arg1 ,__utac__ad__arg2 ,&this );
 
 } 
 } 
}
 
