
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

# 1 "t4mc_mc.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 8 "t4mc_mc.c" 
typedef int before; 
#line 8 "t4mc_mc.c"
 before beforebefore()  {

#line 8 "t4mc_mc.c"
return 1; }
 
#line 9 "t4mc_mc.c"
typedef int after; 
#line 9 "t4mc_mc.c"
 after afterafter()  {

#line 9 "t4mc_mc.c"
return 1; }
 
#line 10 "t4mc_mc.c"
typedef int around; 
#line 10 "t4mc_mc.c"
 around aroundaround()  {

#line 10 "t4mc_mc.c"
return 1; }
 
#line 12 "t4mc_mc.c"
typedef int call; 
#line 12 "t4mc_mc.c"
 call callcall()  {

#line 12 "t4mc_mc.c"
return 1; }
 
#line 13 "t4mc_mc.c"
typedef int execution; 
#line 13 "t4mc_mc.c"
 execution executionexecution()  {

#line 13 "t4mc_mc.c"
return 1; }
 
#line 14 "t4mc_mc.c"
typedef int args; 
#line 14 "t4mc_mc.c"
 args argsargs()  {

#line 14 "t4mc_mc.c"
return 1; }
 
#line 15 "t4mc_mc.c"
typedef int result; 
#line 15 "t4mc_mc.c"
 result resultresult()  {

#line 15 "t4mc_mc.c"
return 1; }
 
#line 16 "t4mc_mc.c"
typedef int infile; 
#line 16 "t4mc_mc.c"
 infile infileinfile()  {

#line 16 "t4mc_mc.c"
return 1; }
 
#line 17 "t4mc_mc.c"
typedef int infunc; 
#line 17 "t4mc_mc.c"
 infunc infuncinfunc()  {

#line 17 "t4mc_mc.c"
return 1; }
 
#line 19 "t4mc_mc.c"
typedef int proceed; 
#line 19 "t4mc_mc.c"
 proceed proceedproceed()  {

#line 19 "t4mc_mc.c"
return 1; }
 



