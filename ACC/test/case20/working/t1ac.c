
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

extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val) ; 
extern void __utac__exception__cf_handler_free(void * exception);
extern void __utac__exception__cf_handler_reset(void * exception) ; 
extern void * __utac__error_stack_mgt(void * env , int mode, int count) ;

# 1 "t1ac_ac.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 2 "t1ac_ac.c" 
int foo(int call); 
#line 3 "t1ac_ac.c"
int foo2(int execution); 
#line 4 "t1ac_ac.c"
int foo33(int before); 
#line 5 "t1ac_ac.c"
int foo44444(int after); 
#line 6 "t1ac_ac.c"
int foo5(int around); 
#line 7 "t1ac_ac.c"
int foo6(int args); 
#line 8 "t1ac_ac.c"
int foo7(int result); 
#line 9 "t1ac_ac.c"
int foo8(int proceed); 
#line 10 "t1ac_ac.c"
int foo9(int infile); 
#line 11 "t1ac_ac.c"
int foo10(int infunc)  {

#line 12 "t1ac_ac.c"
return 3; }
 
#line 18 "t1ac_ac.c"
struct S1 {int call; 
}; 
#line 22 "t1ac_ac.c"
struct S2 {int execution; 
}; 
#line 26 "t1ac_ac.c"
struct S3 {int before; 
}; 
#line 30 "t1ac_ac.c"
struct S4 {int after; 
}; 
#line 34 "t1ac_ac.c"
struct S5 {int around; 
}; 
#line 38 "t1ac_ac.c"
struct S6 {int args; 
}; 
#line 42 "t1ac_ac.c"
struct S7 {int result; 
}; 
#line 47 "t1ac_ac.c"
struct S8 {int proceed; 
}; 
#line 51 "t1ac_ac.c"
struct S9 {int infile; 
}; 
#line 55 "t1ac_ac.c"
struct S10 {int infunc; 
}; 
#line 59 "t1ac_ac.c"
int call(); 
#line 60 "t1ac_ac.c"
int execution(); 
#line 61 "t1ac_ac.c"
int before(); 
#line 62 "t1ac_ac.c"
int after(); 
#line 63 "t1ac_ac.c"
int around(); 
#line 64 "t1ac_ac.c"
int args(); 
#line 65 "t1ac_ac.c"
int result(); 
#line 66 "t1ac_ac.c"
int proceed(); 
#line 67 "t1ac_ac.c"
int infile(); 
#line 68 "t1ac_ac.c"
int infunc(); 
#line 72 "t1ac_ac.c"
 inline void __utac_acc__t1ac__1(void) { 



#line 73 "t1ac_ac.c"
printf("match all foo3 in main of t1mc.c \n"); }

 
#line 77 "t1ac_ac.c"
 inline void __utac_acc__t1ac__2(void) { 



#line 78 "t1ac_ac.c"
printf("match call foo3 in t2mc.c\n"); }

 



