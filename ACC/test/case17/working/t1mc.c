
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
int foo3()  
# 36 "t1mc.c"
{
# 38 "t1mc.c"
int retValue_acc;




# 44 "t1mc.c"
{

#line 6 "t1mc_mc.c"
printf("inside foo3\n"); 
#line 7 "t1mc_mc.c"

# 51 "t1mc.c"
retValue_acc = 0;
# 53 "t1mc.c"
return (int )retValue_acc;
 
# 56 "t1mc.c"

}

# 60 "t1mc.c"
return (int )retValue_acc;

# 63 "t1mc.c"

}
 
#line 10 "t1mc_mc.c"
int foo4()  
# 69 "t1mc.c"
{
# 71 "t1mc.c"
int retValue_acc;




# 77 "t1mc.c"
{

#line 11 "t1mc_mc.c"
printf("call foo3 inside foo4\n"); 
#line 12 "t1mc_mc.c"
foo3(); 
#line 13 "t1mc_mc.c"
printf("end of call foo3 inside foo4\n"); 
# 86 "t1mc.c"

}

# 90 "t1mc.c"
return (int )retValue_acc;

# 93 "t1mc.c"

}
 
static inline int  foo3__t1mc__0 (void)  ; 

#line 17 "t1mc_mc.c"
int main()  
# 101 "t1mc.c"
{
# 103 "t1mc.c"
int retValue_acc;




# 109 "t1mc.c"
{

#line 19 "t1mc_mc.c"

#line 19 "t1mc_mc.c"
int a = 1ul + 1uL + 1u + 1Ul + 1UL + 1U + 1l + 1L + 1;
#line 21 "t1mc_mc.c"
printf("call foo3 inside main, a= %d \n", a); 
#line 23 "t1mc_mc.c"
foo3__t1mc__0(); 
#line 25 "t1mc_mc.c"
printf("end of calling foo3 inside main\n"); 
#line 27 "t1mc_mc.c"
foo4(); 
#line 29 "t1mc_mc.c"

# 126 "t1mc.c"
retValue_acc = 0;
# 128 "t1mc.c"
return (int )retValue_acc;
 
# 131 "t1mc.c"

}

# 135 "t1mc.c"
return (int )retValue_acc;

# 138 "t1mc.c"

}
  void __utac_acc__t1ac__1 (void);

  int foo3 () ; 

# 145 "t1mc.c"
static inline int  foo3__t1mc__0 (void) {

# 148 "t1mc.c"
int retValue_acc;

{
__utac_acc__t1ac__1();

}

# 156 "t1mc.c"
retValue_acc = foo3 ( ) ;  

# 159 "t1mc.c"
return (int )retValue_acc;
}
 
