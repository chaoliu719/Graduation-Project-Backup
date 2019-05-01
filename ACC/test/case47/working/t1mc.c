
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


  int __utac_acc__t1ac__1 (int x  , struct JoinPoint * );


  int foo (int x  ) ; 
  int fooutac__exec__ori (int x  ) ; 
void ** foo_utac__exec__wrapper_t1mc_2 (struct JoinPoint * this);  
 

# 39 "t1mc.c"
void ** foo_utac__exec__wrapper_t1mc_2 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  fooutac__exec__ori ( *a0 ); 
** rp = temp ;  
return this->retValue; 
} 
void ** foo_utac__exec__wrapper_t1mc_1 (struct JoinPoint * this);  
 
  int __utac_acc__t1ac__3 (int x  , struct JoinPoint * );

void ** foo_utac__exec__wrapper_t1mc_1 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( foo_utac__exec__wrapper_t1mc_2 ) ; 
temp = __utac_acc__t1ac__3( * ( int *) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  
void ** foo_utac__exec__wrapper_t1mc_0 (struct JoinPoint * this);  
 
  int __utac_acc__t1ac__2 (int x  , struct JoinPoint * );

void ** foo_utac__exec__wrapper_t1mc_0 (struct JoinPoint * this) { 
 
int **  rp = (  int **)(this->retValue); 
int  temp ;  
this->fp = &( foo_utac__exec__wrapper_t1mc_1 ) ; 
temp = __utac_acc__t1ac__2( * ( int *) (this->args[ 0 ]) , this  ); 
 ** rp = temp ;  
return this->retValue; 
  }  


# 1 "t1mc_mc.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "t1mc_mc.c" 
int foo(int x)  
# 83 "t1mc.c"
{
# 85 "t1mc.c"
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
this.fp = &(foo_utac__exec__wrapper_t1mc_0);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
int __utac__ad__arg1 = x ; 
retValue_acc = __utac_acc__t1ac__1(__utac__ad__arg1 ,&this );
 
 } 
 } 


# 119 "t1mc.c"
return (int )retValue_acc;

# 122 "t1mc.c"

}
 

# 127 "t1mc.c"
  int fooutac__exec__ori (int x  ) { 

# 130 "t1mc.c"
int retValue_acc;

#line 2 "t1mc_mc.c"
printf("core program: x = %d \n", x); 
#line 3 "t1mc_mc.c"

# 137 "t1mc.c"
retValue_acc = x;
# 139 "t1mc.c"
return (int )retValue_acc;
 
 } 
#line 6 "t1mc_mc.c"
int main()  
# 145 "t1mc.c"
{
# 147 "t1mc.c"
int retValue_acc;




# 153 "t1mc.c"
{

#line 7 "t1mc_mc.c"

#line 7 "t1mc_mc.c"
int result;
#line 8 "t1mc_mc.c"
printf("foo(1) in main \n"); 
#line 9 "t1mc_mc.c"
result = foo(1); 
#line 10 "t1mc_mc.c"
printf("result = %d\n", result); 
#line 11 "t1mc_mc.c"
printf("-------------\n"); 
#line 13 "t1mc_mc.c"
printf("foo(4) in main \n"); 
#line 14 "t1mc_mc.c"
result = foo(4); 
#line 15 "t1mc_mc.c"
printf("result = %d\n", result); 
#line 16 "t1mc_mc.c"
printf("-------------\n"); 
#line 19 "t1mc_mc.c"
printf("foo(10) in main \n"); 
#line 20 "t1mc_mc.c"
result = foo(10); 
#line 21 "t1mc_mc.c"
printf("result = %d\n", result); 
#line 22 "t1mc_mc.c"
printf("-------------\n"); 
#line 24 "t1mc_mc.c"
printf("foo(21) in main \n"); 
#line 25 "t1mc_mc.c"
result = foo(21); 
#line 26 "t1mc_mc.c"
printf("result = %d\n", result); 
#line 27 "t1mc_mc.c"
printf("-------------\n"); 
#line 29 "t1mc_mc.c"

# 194 "t1mc.c"
retValue_acc = 0;
# 196 "t1mc.c"
return (int )retValue_acc;
 
# 199 "t1mc.c"

}

# 203 "t1mc.c"
return (int )retValue_acc;

# 206 "t1mc.c"

}
 
