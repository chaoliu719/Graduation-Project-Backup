
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
# 1 "t1ac_ac.c" 
 inline void __utac_acc__t1ac__1(void) { 



#line 2 "t1ac_ac.c"
printf("aspect1: before call foo2\n"); }

 
#line 5 "t1ac_ac.c"
 inline void __utac_acc__t1ac__2(void) { 



#line 6 "t1ac_ac.c"
printf("aspect2: before call foo2\n"); }

 
#line 10 "t1ac_ac.c"
 inline void __utac_acc__t1ac__3(int (*p)(char , int *)) {



#line 11 "t1ac_ac.c"

#line 11 "t1ac_ac.c"
int temp = 99;
#line 12 "t1ac_ac.c"
printf("aspect3: before call foo2\n"); 
#line 13 "t1ac_ac.c"
((*p))('B', (&temp)); }

 
#line 16 "t1ac_ac.c"
 inline void __utac_acc__t1ac__4(void) { 



#line 17 "t1ac_ac.c"
printf("aspect4: before call foo2\n"); }

 
#line 20 "t1ac_ac.c"
 inline void __utac_acc__t1ac__5(int (*p)(char )) {



#line 21 "t1ac_ac.c"
printf("aspect5:\n"); }

 
#line 24 "t1ac_ac.c"
 inline void __utac_acc__t1ac__6(void) { 



#line 25 "t1ac_ac.c"
printf("aspect6:\n"); }

 
#line 28 "t1ac_ac.c"
 inline void __utac_acc__t1ac__7(void) { 



#line 29 "t1ac_ac.c"
printf("aspect7:\n"); }

 
#line 32 "t1ac_ac.c"
 
#line 35 "t1ac_ac.c"
 inline void __utac_acc__t1ac__9(void) { 



#line 36 "t1ac_ac.c"
printf("aspect8:\n"); }

 
#line 39 "t1ac_ac.c"
 inline void __utac_acc__t1ac__10(void) { 



#line 40 "t1ac_ac.c"
printf("aspect9:\n"); }

 

 int __utac__cflow_t1ac_1 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t1ac_0 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 


