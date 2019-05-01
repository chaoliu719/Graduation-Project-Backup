
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
# 2 "t1mc_mc.c" 
int foo3()  
# 36 "t1mc.c"
{
# 38 "t1mc.c"
int retValue_acc;




# 44 "t1mc.c"
{

#line 3 "t1mc_mc.c"
printf("inside foo3\n"); 
#line 4 "t1mc_mc.c"

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
 
#line 7 "t1mc_mc.c"
int foo4()  
# 69 "t1mc.c"
{
# 71 "t1mc.c"
int retValue_acc;




# 77 "t1mc.c"
{

#line 8 "t1mc_mc.c"
printf("call foo3 inside foo4\n"); 
#line 9 "t1mc_mc.c"
foo3(); 
#line 10 "t1mc_mc.c"
printf("end of call foo3 inside foo4\n"); 
# 86 "t1mc.c"

}

# 90 "t1mc.c"
return (int )retValue_acc;

# 93 "t1mc.c"

}
 
static inline int  foo3__t1mc__0 (void)  ; 

#line 14 "t1mc_mc.c"
int main()  
# 101 "t1mc.c"
{
# 103 "t1mc.c"
int retValue_acc;




# 109 "t1mc.c"
{

#line 18 "t1mc_mc.c"
printf("call foo3 inside main\n"); 
#line 20 "t1mc_mc.c"
foo3__t1mc__0(); 
#line 22 "t1mc_mc.c"
printf("end of calling foo3 inside main\n"); 
#line 24 "t1mc_mc.c"
foo4(); 
#line 26 "t1mc_mc.c"

# 122 "t1mc.c"
retValue_acc = 0;
# 124 "t1mc.c"
return (int )retValue_acc;
 
# 127 "t1mc.c"

}

# 131 "t1mc.c"
return (int )retValue_acc;

# 134 "t1mc.c"

}
  void __utac_acc__t1ac__1 (void);

  int foo3 () ; 

# 141 "t1mc.c"
static inline int  foo3__t1mc__0 (void) {

# 144 "t1mc.c"
int retValue_acc;

{
__utac_acc__t1ac__1();

}

# 152 "t1mc.c"
retValue_acc = foo3 ( ) ;  

# 155 "t1mc.c"
return (int )retValue_acc;
}
 
