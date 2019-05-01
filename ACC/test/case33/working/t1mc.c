
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
void pointcut()  
# 36 "t1mc.c"
{



# 41 "t1mc.c"
{

#line 2 "t1mc_mc.c"
printf("here is function poincut\n"); 
# 46 "t1mc.c"

}

# 50 "t1mc.c"

}
 
#line 6 "t1mc_mc.c"
void foo2()  
# 56 "t1mc.c"
{



# 61 "t1mc.c"
{

#line 7 "t1mc_mc.c"
printf("inside foo2\n"); 
# 66 "t1mc.c"

}

# 70 "t1mc.c"

}
 
  void __utac_acc__t1ac__7 (void);


static inline void  foo2__t1mc__0 (void)  ; 

#line 11 "t1mc_mc.c"
int foo1(int *a1, int a2, int a3)  
# 81 "t1mc.c"
{
# 83 "t1mc.c"
int retValue_acc;




{
__utac_acc__t1ac__7();

}

# 94 "t1mc.c"
{

#line 12 "t1mc_mc.c"
printf("inside foo1, a1 = %d , a2 = %d , a3 = %d \n", (*a1), a2, a3); 
#line 13 "t1mc_mc.c"
foo2__t1mc__0(); 
#line 14 "t1mc_mc.c"

# 103 "t1mc.c"
retValue_acc = (*a1) + a2 + a3;
# 105 "t1mc.c"
return (int )retValue_acc;
 
# 108 "t1mc.c"

}

# 112 "t1mc.c"
return (int )retValue_acc;

# 115 "t1mc.c"

}
  void __utac_acc__t1ac__12 (void);

  void foo2 () ; 

# 122 "t1mc.c"
static inline void  foo2__t1mc__0 (void) {

{
__utac_acc__t1ac__12();

}
foo2 ( ) ;  
}
 
  void __utac_acc__t1ac__13 (  struct JoinPoint * );


  void foo3 () ; 
  void foo3utac__exec__ori () ; 
void ** foo3_utac__exec__wrapper_t1mc_0 (struct JoinPoint * this);  
 

# 140 "t1mc.c"
void ** foo3_utac__exec__wrapper_t1mc_0 (struct JoinPoint * this) { 
 
foo3utac__exec__ori ( ); 
return this->retValue; 
} 


#line 18 "t1mc_mc.c"
void foo3()  
# 150 "t1mc.c"
{


 { 
 struct JoinPoint this; 
 void * __utac__args[0]; 
 const char * __utac__argstype[0];
this.argsCount = 0 ; 
 void * __utac__retp[1]; 
this.args = __utac__args; 
this.argsType = __utac__argstype; 
{ extern void * __utac__get_this_arg (int, struct JoinPoint *)  ; 
  extern const char * __utac__get_this_argtype (int, struct JoinPoint *)  ; 
this.arg = __utac__get_this_arg ; 
this.argType= __utac__get_this_argtype ; } 
this.fp = &(foo3_utac__exec__wrapper_t1mc_0);
this.retValue = __utac__retp ; 
this.retType ="void" ; 
 { 
__utac_acc__t1ac__13(&this );
 
 } 
 } 


# 176 "t1mc.c"

}
 

# 181 "t1mc.c"
  void foo3utac__exec__ori () { 

#line 19 "t1mc_mc.c"
printf("inside foo3\n"); 
 } 
static inline void  foo2__t1mc__2 (void)  ; 

static inline int  foo1__t1mc__1 (int* a1 ,int a2 ,int a3  )  ; 

#line 23 "t1mc_mc.c"
int main()  
# 193 "t1mc.c"
{
# 195 "t1mc.c"
int retValue_acc;




# 201 "t1mc.c"
{

#line 24 "t1mc_mc.c"

#line 24 "t1mc_mc.c"
int n = 3;
#line 25 "t1mc_mc.c"

#line 25 "t1mc_mc.c"
int m = 99;
#line 26 "t1mc_mc.c"
printf("call foo1 in main, argu = %d,%d,%d\n", n, 4, 5); 
#line 27 "t1mc_mc.c"
foo1__t1mc__1((&n), 4, 5); 
#line 29 "t1mc_mc.c"
printf("call foo2 in main\n"); 
#line 30 "t1mc_mc.c"
foo2__t1mc__2(); 
#line 32 "t1mc_mc.c"
foo3(); 
#line 34 "t1mc_mc.c"

# 224 "t1mc.c"
retValue_acc = 0;
# 226 "t1mc.c"
return (int )retValue_acc;
 
# 229 "t1mc.c"

}

# 233 "t1mc.c"
return (int )retValue_acc;

# 236 "t1mc.c"

}
  void __utac_acc__t1ac__11 (void);

  void foo2 () ; 

# 243 "t1mc.c"
static inline void  foo2__t1mc__2 (void) {

{
__utac_acc__t1ac__11();

}
foo2 ( ) ;  
}
  void __utac_acc__t1ac__8 (int j ,int k  );

  void __utac_acc__t1ac__10 (int j ,int m  );

  int foo1 (int* a1 ,int a2 ,int a3  ) ; 

# 258 "t1mc.c"
static inline int  foo1__t1mc__1 (int* a1 ,int a2 ,int a3  ) {

# 261 "t1mc.c"
int retValue_acc;

{
int __utac__ad__arg1 = a2 ; 
int __utac__ad__arg2 = a3 ; 
__utac_acc__t1ac__8(__utac__ad__arg1 ,__utac__ad__arg2 );

}

# 271 "t1mc.c"
retValue_acc = foo1 ( a1 , a2 , a3 ) ;  

{
int __utac__ad__arg1 = a2 ; 
int __utac__ad__arg2 = retValue_acc ; 
__utac_acc__t1ac__10(__utac__ad__arg1 ,__utac__ad__arg2 );

}

# 281 "t1mc.c"
return (int )retValue_acc;
}
 
