
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
static inline int  a__t1mc__0 (int __utac__para0  )  ; 

void ** a_utac__exec__wrapper_t1mc_0 (struct JoinPoint * this);  
 

# 38 "t1mc.c"
void ** a_utac__exec__wrapper_t1mc_0 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  (*a0 ); 
** rp = temp ;  
return this->retValue; 
} 


#line 4 "t1mc.mc"
void foo2()  
# 53 "t1mc.c"
{



# 58 "t1mc.c"
{

#line 6 "t1mc.mc"
printf("in foo2, assign a be 2\n"); 
#line 7 "t1mc.mc"
a = a = 2; 
#line 9 "t1mc.mc"
(a__t1mc__0(a  )?4:5); 
#line 11 "t1mc.mc"
printf("end of foo2\n"); 
# 69 "t1mc.c"

}

# 73 "t1mc.c"

}
  int __utac_acc__t1a3__1 (  struct JoinPoint * );


# 79 "t1mc.c"
static inline int  a__t1mc__0 (int __utac__para0  ) {

# 82 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
int* __utac__arg0 = &__utac__para0; 
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
this.fp = &(a_utac__exec__wrapper_t1mc_0);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
retValue_acc = __utac_acc__t1a3__1(&this );
 
 } 
 } 

# 111 "t1mc.c"
return (int )retValue_acc;
}
 
#line 14 "t1mc.mc"
void foo1()  
# 117 "t1mc.c"
{



# 122 "t1mc.c"
{

#line 15 "t1mc.mc"

#line 15 "t1mc.mc"
int a = 1;
#line 16 "t1mc.mc"
printf("in foo1, local a shadows global a \n"); 
#line 17 "t1mc.mc"
printf("a = %d\n", a); 
#line 18 "t1mc.mc"
printf("end of foo1\n"); 
# 135 "t1mc.c"

}

# 139 "t1mc.c"

}
 
static inline int  a__t1mc__1 (int __utac__para0  )  ; 

void ** a_utac__exec__wrapper_t1mc_1 (struct JoinPoint * this);  
 

# 148 "t1mc.c"
void ** a_utac__exec__wrapper_t1mc_1 (struct JoinPoint * this) { 
 
int * a0  = ( int *) (this->args[ 0 ]); 
  
int **  rp = (  int **)(this->retValue); 
int  temp ;  
temp =  (*a0 ); 
** rp = temp ;  
return this->retValue; 
} 


#line 22 "t1mc.mc"
void foo()  
# 163 "t1mc.c"
{



# 168 "t1mc.c"
{

#line 23 "t1mc.mc"
printf("in foo\n"); 
#line 24 "t1mc.mc"
printf("a = %d\n", a__t1mc__1(a  )); 
#line 25 "t1mc.mc"
printf("end of foo\n"); 
# 177 "t1mc.c"

}

# 181 "t1mc.c"

}
  int __utac_acc__t1a3__1 (  struct JoinPoint * );


# 187 "t1mc.c"
static inline int  a__t1mc__1 (int __utac__para0  ) {

# 190 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
int* __utac__arg0 = &__utac__para0; 
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
this.fp = &(a_utac__exec__wrapper_t1mc_1);
this.retValue = __utac__retp ; 
this.retType ="int" ; 
 { 
retValue_acc = __utac_acc__t1a3__1(&this );
 
 } 
 } 

# 219 "t1mc.c"
return (int )retValue_acc;
}
 
#line 28 "t1mc.mc"
int main()  
# 225 "t1mc.c"
{
# 227 "t1mc.c"
int retValue_acc;




# 233 "t1mc.c"
{

#line 29 "t1mc.mc"
foo(); 
#line 30 "t1mc.mc"
foo1(); 
#line 31 "t1mc.mc"
foo2(); 
#line 32 "t1mc.mc"
foo(); 
#line 33 "t1mc.mc"

# 246 "t1mc.c"
retValue_acc = 0;
# 248 "t1mc.c"
return (int )retValue_acc;
 
# 251 "t1mc.c"

}

# 255 "t1mc.c"
return (int )retValue_acc;

# 258 "t1mc.c"

}
 
