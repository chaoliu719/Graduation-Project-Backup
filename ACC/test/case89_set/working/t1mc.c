
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


#line 2 "t1mc.mc"
int a = 99; 
static inline int  a__t1mc__1 (int* __utac__para0 ,int __utac__para1  )  ; 

void ** a_utac__exec__wrapper_t1mc_0 (struct JoinPoint * this);  
 

# 38 "t1mc.c"
void ** a_utac__exec__wrapper_t1mc_0 (struct JoinPoint * this) { 
 
int* * a0  = ( int* *) (this->args[ 0 ]); 
  
int * a1  = ( int *) (this->args[ 1 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  (**a0 = *a1); 
** rp = temp ;  
return this->retValue; 
} 


static inline int  a__t1mc__0 (int* __utac__para0 ,int __utac__para1  )  ; 

void ** a_utac__exec__wrapper_t1mc_1 (struct JoinPoint * this);  
 

# 58 "t1mc.c"
void ** a_utac__exec__wrapper_t1mc_1 (struct JoinPoint * this) { 
 
int* * a0  = ( int* *) (this->args[ 0 ]); 
  
int * a1  = ( int *) (this->args[ 1 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  (**a0 = *a1); 
** rp = temp ;  
return this->retValue; 
} 


#line 4 "t1mc.mc"
void foo2()  
# 75 "t1mc.c"
{



# 80 "t1mc.c"
{

#line 6 "t1mc.mc"
printf("in foo2, assign a be 2\n"); 
#line 8 "t1mc.mc"
a__t1mc__0(&a,(a__t1mc__1(&a,(2)))); 
#line 10 "t1mc.mc"
(a?4:5); 
#line 12 "t1mc.mc"
printf("end of foo2, a = %d \n", a); 
# 91 "t1mc.c"

}

# 95 "t1mc.c"

}
  int __utac_acc__t1a3__1 (  struct JoinPoint * );


# 101 "t1mc.c"
static inline int  a__t1mc__1 (int* __utac__para0 ,int __utac__para1  ) {

# 104 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
int** __utac__arg0 = &__utac__para0; 
const char * __utac__argtype0 = "int*"; 
int* __utac__arg1 = &__utac__para1; 
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
this.fp = &(a_utac__exec__wrapper_t1mc_0);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
retValue_acc = __utac_acc__t1a3__1(&this );
 
 } 
 } 

# 137 "t1mc.c"
return (int )retValue_acc;
}
  int __utac_acc__t1a3__1 (  struct JoinPoint * );


# 143 "t1mc.c"
static inline int  a__t1mc__0 (int* __utac__para0 ,int __utac__para1  ) {

# 146 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
int** __utac__arg0 = &__utac__para0; 
const char * __utac__argtype0 = "int*"; 
int* __utac__arg1 = &__utac__para1; 
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
this.fp = &(a_utac__exec__wrapper_t1mc_1);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
retValue_acc = __utac_acc__t1a3__1(&this );
 
 } 
 } 

# 179 "t1mc.c"
return (int )retValue_acc;
}
 
#line 15 "t1mc.mc"
void foo1()  
# 185 "t1mc.c"
{



# 190 "t1mc.c"
{

#line 16 "t1mc.mc"

#line 16 "t1mc.mc"
int a = 1;
#line 17 "t1mc.mc"
printf("in foo1, local a shadows global a \n"); 
#line 18 "t1mc.mc"
a = 34; 
#line 19 "t1mc.mc"
printf("a = %d\n", a); 
#line 20 "t1mc.mc"
printf("end of foo1\n"); 
# 205 "t1mc.c"

}

# 209 "t1mc.c"

}
 
static inline int  a__t1mc__2 (int* __utac__para0 ,int __utac__para1  )  ; 

void ** a_utac__exec__wrapper_t1mc_2 (struct JoinPoint * this);  
 

# 218 "t1mc.c"
void ** a_utac__exec__wrapper_t1mc_2 (struct JoinPoint * this) { 
 
int* * a0  = ( int* *) (this->args[ 0 ]); 
  
int * a1  = ( int *) (this->args[ 1 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  (**a0 = *a1); 
** rp = temp ;  
return this->retValue; 
} 


#line 24 "t1mc.mc"
void foo()  
# 235 "t1mc.c"
{



# 240 "t1mc.c"
{

#line 25 "t1mc.mc"

#line 25 "t1mc.mc"
int b;
#line 26 "t1mc.mc"
printf("in foo, b = a = 0\n"); 
#line 27 "t1mc.mc"
b = a__t1mc__2(&a,(0)); 
#line 28 "t1mc.mc"
printf("a = %d, b = %d \n", a, b); 
#line 29 "t1mc.mc"
printf("end of foo\n"); 
# 255 "t1mc.c"

}

# 259 "t1mc.c"

}
  int __utac_acc__t1a3__1 (  struct JoinPoint * );


# 265 "t1mc.c"
static inline int  a__t1mc__2 (int* __utac__para0 ,int __utac__para1  ) {

# 268 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
int** __utac__arg0 = &__utac__para0; 
const char * __utac__argtype0 = "int*"; 
int* __utac__arg1 = &__utac__para1; 
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
this.fp = &(a_utac__exec__wrapper_t1mc_2);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
retValue_acc = __utac_acc__t1a3__1(&this );
 
 } 
 } 

# 301 "t1mc.c"
return (int )retValue_acc;
}
 
#line 32 "t1mc.mc"
int main()  
# 307 "t1mc.c"
{
# 309 "t1mc.c"
int retValue_acc;




# 315 "t1mc.c"
{

#line 33 "t1mc.mc"
foo(); 
#line 34 "t1mc.mc"
foo1(); 
#line 35 "t1mc.mc"
foo2(); 
#line 36 "t1mc.mc"
foo(); 
#line 37 "t1mc.mc"

# 328 "t1mc.c"
retValue_acc = 0;
# 330 "t1mc.c"
return (int )retValue_acc;
 
# 333 "t1mc.c"

}

# 337 "t1mc.c"
return (int )retValue_acc;

# 340 "t1mc.c"

}
 
