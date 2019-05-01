
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
# 5 "t1mc_mc.c" 
 __extension__ typedef int myint; 
#line 7 "t1mc_mc.c"
int footemp(__const int b); 
#line 11 "t1mc_mc.c"
struct A {int b; 
}; 
#line 17 "t1mc_mc.c"
typedef struct __gconv_info {int __nsteps;  __extension__ struct A b; 
}*__gconv_t; 
#line 20 "t1mc_mc.c"
int foo3()  
# 46 "t1mc.c"
{
# 48 "t1mc.c"
int retValue_acc;




# 54 "t1mc.c"
{

#line 21 "t1mc_mc.c"
printf("inside foo3\n"); 
#line 22 "t1mc_mc.c"

# 61 "t1mc.c"
retValue_acc = 0;
# 63 "t1mc.c"
return (int )retValue_acc;
 
# 66 "t1mc.c"

}

# 70 "t1mc.c"
return (int )retValue_acc;

# 73 "t1mc.c"

}
 
#line 25 "t1mc_mc.c"
int foo4()  
# 79 "t1mc.c"
{
# 81 "t1mc.c"
int retValue_acc;




# 87 "t1mc.c"
{

#line 26 "t1mc_mc.c"
printf("call foo3 inside foo4\n"); 
#line 27 "t1mc_mc.c"
foo3(); 
#line 28 "t1mc_mc.c"
printf("end of call foo3 inside foo4\n"); 
# 96 "t1mc.c"

}

# 100 "t1mc.c"
return (int )retValue_acc;

# 103 "t1mc.c"

}
 
static inline int  foo3__t1mc__0 (void)  ; 

#line 32 "t1mc_mc.c"
int main()  
# 111 "t1mc.c"
{
# 113 "t1mc.c"
int retValue_acc;




# 119 "t1mc.c"
{

#line 33 "t1mc_mc.c"
printf("call foo3 inside main\n"); 
#line 35 "t1mc_mc.c"
foo3__t1mc__0(); 
#line 37 "t1mc_mc.c"
printf("end of calling foo3 inside main\n"); 
#line 39 "t1mc_mc.c"
foo4(); 
#line 41 "t1mc_mc.c"

# 132 "t1mc.c"
retValue_acc = 0;
# 134 "t1mc.c"
return (int )retValue_acc;
 
# 137 "t1mc.c"

}

# 141 "t1mc.c"
return (int )retValue_acc;

# 144 "t1mc.c"

}
  void __utac_acc__t1ac__1 (void);

  int foo3 () ; 

# 151 "t1mc.c"
static inline int  foo3__t1mc__0 (void) {

# 154 "t1mc.c"
int retValue_acc;

{
__utac_acc__t1ac__1();

}

# 162 "t1mc.c"
retValue_acc = foo3 ( ) ;  

# 165 "t1mc.c"
return (int )retValue_acc;
}
 
