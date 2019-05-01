
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
 inline void __utac_acc__t1ac__1(   struct JoinPoint *  this  )  {
 


#line 2 "t1ac_ac.c"
printf("aspect1: call %s by a function pointer in function %s \n", (this->targetName), (this->funcName)); }

 
#line 7 "t1ac_ac.c"
 inline void __utac_acc__t1ac__2(void) { 



#line 8 "t1ac_ac.c"
printf("aspect2: call foo by a function pointer in the cflow of foo2\n"); }

 
#line 11 "t1ac_ac.c"
 inline void __utac_acc__t1ac__3(void) { 



#line 12 "t1ac_ac.c"
printf("aspect3: callp && args\n"); }

 
#line 15 "t1ac_ac.c"
 inline void __utac_acc__t1ac__4(void) { 



#line 16 "t1ac_ac.c"
printf("aspect3: failed\n"); }

 
#line 19 "t1ac_ac.c"
 inline void __utac_acc__t1ac__5(void) { 



#line 20 "t1ac_ac.c"
printf("aspect4: callp && result\n"); }

 
#line 23 "t1ac_ac.c"
 inline void __utac_acc__t1ac__6(void) { 



#line 24 "t1ac_ac.c"
printf("aspect4: failed\n"); }

 
#line 28 "t1ac_ac.c"
 inline void __utac_acc__t1ac__7(void) { 



#line 29 "t1ac_ac.c"
printf("aspect5: callp && infile\n"); }

 
#line 32 "t1ac_ac.c"
 inline void __utac_acc__t1ac__8(void) { 



#line 33 "t1ac_ac.c"
printf("aspect5: failed\n"); }

 
#line 36 "t1ac_ac.c"
 inline void __utac_acc__t1ac__9(void) { 



#line 37 "t1ac_ac.c"
printf("aspect6: callp && infunc\n"); }

 
#line 40 "t1ac_ac.c"
 inline void __utac_acc__t1ac__10(void) { 



#line 41 "t1ac_ac.c"
printf("aspect6: failed\n"); }

 

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


