
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
 inline void __utac_acc__t1ac__1(char x, int y) {



#line 3 "t1ac_ac.c"
printf("aspect1, call in function name start with foo , second param = %c, last param = %d\n", x, y); }

 
#line 6 "t1ac_ac.c"
 inline void __utac_acc__t1ac__2(int x) {



#line 7 "t1ac_ac.c"
printf("aspect2 : call foo5, x = %d\n", x); }

 
#line 11 "t1ac_ac.c"
 inline void __utac_acc__t1ac__3(void) { 



#line 13 "t1ac_ac.c"
printf("aspect3: after call foo5\n"); }

 
#line 16 "t1ac_ac.c"
 inline void __utac_acc__t1ac__4(void) { 



#line 17 "t1ac_ac.c"
printf("aspect4, call foo in function name start with foo \n"); }

 
#line 21 "t1ac_ac.c"
 inline void __utac_acc__t1ac__5(void) { 



#line 22 "t1ac_ac.c"
printf("aspect5, call foo in function name end with n \n"); }

 
#line 25 "t1ac_ac.c"
 inline void __utac_acc__t1ac__6(void) { 



#line 26 "t1ac_ac.c"
printf("aspect6, call foo in functio name start with f, and end with 3 \n"); }

 
#line 29 "t1ac_ac.c"
 inline void __utac_acc__t1ac__7(int i, int j) {



#line 30 "t1ac_ac.c"
printf("aspect7,catch a call function, first parameter value = %d, last parameter value = %d\n", i, j); }

 
#line 33 "t1ac_ac.c"
 inline void __utac_acc__t1ac__8(void) { 



#line 34 "t1ac_ac.c"
printf("aspect8, for c$bc function call\n"); }

 



