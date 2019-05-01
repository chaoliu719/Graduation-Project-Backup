
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


#line 1 "t1mc.mc"
int foo3(int a)  
# 33 "t1mc.c"
{
# 35 "t1mc.c"
int retValue_acc;




# 41 "t1mc.c"
{

#line 2 "t1mc.mc"
printf("in foo3, a = %d\n", a); 
#line 3 "t1mc.mc"

# 48 "t1mc.c"
retValue_acc = a * 2;
# 50 "t1mc.c"
return (int )retValue_acc;
 
# 53 "t1mc.c"

}

# 57 "t1mc.c"
return (int )retValue_acc;

# 60 "t1mc.c"

}
 
static inline int  foo3__t1mc__0 (int a  )  ; 

  int foo3 (int a  ) ; 
void ** foo3_utac__call__wrapper_t1mc_0 (struct JoinPoint * this);  
 

# 70 "t1mc.c"
void ** foo3_utac__call__wrapper_t1mc_0 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo3 ( *a0 ); 
** rp = temp ;  
return this->retValue; 
} 


#line 7 "t1mc.mc"
void foo2(int a, int b, int c)  
# 85 "t1mc.c"
{



# 90 "t1mc.c"
{

#line 9 "t1mc.mc"
printf("in foo2, a = %d, b = %d , c = %d \n", a, b, c); 
#line 11 "t1mc.mc"
foo3__t1mc__0(b + c); 
# 97 "t1mc.c"

}

# 101 "t1mc.c"

}
  int __utac_acc__t4ac__1 (int* b ,double a ,int c  );
int __utac__cflow_t4ac_0(int, int);
void * __utac__cflow_t4ac_0_0 (int,int,void*);

  int foo3 (int a  ) ; 

# 110 "t1mc.c"
static inline int  foo3__t1mc__0 (int a  ) {

# 113 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
int* __utac__arg0 = &a; 
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
this.fp = &(foo3_utac__call__wrapper_t1mc_0);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
int* __utac__ad__arg1 =  * (int* * )__utac__cflow_t4ac_0_0 ( 2 , 1, 0 ) ; 
double __utac__ad__arg2 =  * (double * )__utac__cflow_t4ac_0_0 ( 2 , 0, 0 ) ; 
int __utac__ad__arg3 = a ; 
if( __utac__cflow_t4ac_0(3,0) ) { 
retValue_acc = __utac_acc__t4ac__1(__utac__ad__arg1 ,__utac__ad__arg2 ,__utac__ad__arg3 );
 } 

 else { 

# 146 "t1mc.c"
retValue_acc = (** (int **)foo3_utac__call__wrapper_t1mc_0(&this ) ); 
 } 
 
 } 
 } 

# 153 "t1mc.c"
return (int )retValue_acc;
}
 
void * __utac__cflow_t4ac_0_0 (int, int, void *);


int __utac__cflow_t4ac_0 ( int , int);


int __utac__cflow_t4ac_0 ( int , int);


#line 16 "t1mc.mc"
void foo(double a, int b, int c)  
# 168 "t1mc.c"
{



{
double __utac__ad__arg1 = a ; 
int* __utac__ad__arg2 = &b ; 
__utac__cflow_t4ac_0_0(1, 0, (void *)(&__utac__ad__arg1) ); 
__utac__cflow_t4ac_0_0(1, 1, (void *)(&__utac__ad__arg2) ); 

}

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t4ac_0, __utac__cflow_t4ac_0(3,0)); } 
 } 
__utac__cflow_t4ac_0 ( 1, 0 ) ; 

}

# 191 "t1mc.c"
{

#line 17 "t1mc.mc"
printf("in foo, a = %d, b = %d, c = %d \n", ((int )a), b, c); 
#line 18 "t1mc.mc"
foo2(a * b, b * c, c); 
# 198 "t1mc.c"

}

{
__utac__cflow_t4ac_0 ( 2, 0 ) ; 

}

# 207 "t1mc.c"

}
 
#line 21 "t1mc.mc"
int main()  
# 213 "t1mc.c"
{
# 215 "t1mc.c"
int retValue_acc;




# 221 "t1mc.c"
{

#line 23 "t1mc.mc"
printf("call foo(3,4,5) in main\n"); 
#line 24 "t1mc.mc"
foo(3, 4, 5); 
#line 25 "t1mc.mc"
printf("\n---------------------\n"); 
#line 26 "t1mc.mc"
printf("call foo2(3,4,5) in main\n"); 
#line 27 "t1mc.mc"
foo2(3, 4, 5); 
#line 29 "t1mc.mc"

# 236 "t1mc.c"
retValue_acc = 0;
# 238 "t1mc.c"
return (int )retValue_acc;
 
# 241 "t1mc.c"

}

# 245 "t1mc.c"
return (int )retValue_acc;

# 248 "t1mc.c"

}
 
