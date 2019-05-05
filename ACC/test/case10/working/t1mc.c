
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


# 1 "t1mc.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 2 "t1mc.c" 
int foo3(char k)  
# 36 "t1mc.c"
{
# 38 "t1mc.c"
int retValue_acc;




# 44 "t1mc.c"
{

#line 3 "t1mc.c"
printf("inside foo3, parameter =  %d, return 99 \n", k); 
#line 4 "t1mc.c"

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
 
#line 7 "t1mc.c"
int foo4(int a, int b)  
# 69 "t1mc.c"
{
# 71 "t1mc.c"
int retValue_acc;




# 77 "t1mc.c"
{

#line 8 "t1mc.c"
printf("inside foo4, parameter = %d + %d \n", a, b); 
#line 9 "t1mc.c"

# 84 "t1mc.c"
retValue_acc = a * b;
# 86 "t1mc.c"
return (int )retValue_acc;
 
# 89 "t1mc.c"

}

# 93 "t1mc.c"
return (int )retValue_acc;

# 96 "t1mc.c"

}
 
static inline int  foo4__t1mc__1 (int a ,int b  )  ; 

  int foo4 (int a ,int b  ) ; 
void ** foo4_utac__call__wrapper_t1mc_0 (struct JoinPoint * this);  
 

# 106 "t1mc.c"
void ** foo4_utac__call__wrapper_t1mc_0 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int * a1  = ( int *) (this->args[ 1 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo4 ( *a0 , *a1 ); 
** rp = temp ;  
return this->retValue; 
} 


static inline int  foo3__t1mc__0 (char k  )  ; 

  int foo3 (char k  ) ; 
void ** foo3_utac__call__wrapper_t1mc_1 (struct JoinPoint * this);  
 

# 127 "t1mc.c"
void ** foo3_utac__call__wrapper_t1mc_1 (struct JoinPoint * this) { 
 
char * a0  = ( char *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  foo3 ( *a0 ); 
** rp = temp ;  
return this->retValue; 
} 


#line 14 "t1mc.c"
int main()  
# 142 "t1mc.c"
{
# 144 "t1mc.c"
int retValue_acc;




# 150 "t1mc.c"
{

#line 16 "t1mc.c"
printf("result of foo3 = %d\n", foo3__t1mc__0(3)); 
#line 19 "t1mc.c"
printf("result of foo4 = %d\n", foo4__t1mc__1(3, 8)); 
#line 21 "t1mc.c"

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
  int __utac_acc__t1ac__1 (  struct JoinPoint * );

  int foo4 (int a ,int b  ) ; 

# 178 "t1mc.c"
static inline int  foo4__t1mc__1 (int a ,int b  ) {

# 181 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
int* __utac__arg0 = &a; 
const char * __utac__argtype0 = "int"; 
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
this.fp = &(foo4_utac__call__wrapper_t1mc_0);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
retValue_acc = __utac_acc__t1ac__1(&this );
 
 } 
 } 

# 214 "t1mc.c"
return (int )retValue_acc;
}
  int __utac_acc__t1ac__1 (  struct JoinPoint * );

  int foo3 (char k  ) ; 

# 221 "t1mc.c"
static inline int  foo3__t1mc__0 (char k  ) {

# 224 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
char* __utac__arg0 = &k; 
const char * __utac__argtype0 = "char"; 
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
this.fp = &(foo3_utac__call__wrapper_t1mc_1);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
retValue_acc = __utac_acc__t1ac__1(&this );
 
 } 
 } 

# 253 "t1mc.c"
return (int )retValue_acc;
}
 
