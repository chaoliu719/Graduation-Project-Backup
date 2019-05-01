
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
 
#line 3 "t1ac_ac.c"
 inline void __utac_acc__t1ac__2(char *s) {



#line 4 "t1ac_ac.c"
printf("****aspect 1: around call foo2 in the control flow of foo3, argument = %s \n", s); }

 
#line 7 "t1ac_ac.c"
 inline int __utac_acc__t1ac__3(char *x) {



#line 8 "t1ac_ac.c"
printf("****aspect 2: around call foo in the control flow of foo2, argument = %s \n", x); }

 


#line 11 "t1ac_ac.c"
 inline int __utac_acc__t1ac__4(   struct JoinPoint *  this  )  {
 


#line 12 "t1ac_ac.c"

#line 12 "t1ac_ac.c"
int result;
#line 13 "t1ac_ac.c"
printf("****aspect 3: around call foo4 under foo5, start\n"); 
#line 14 "t1ac_ac.c"
result = (** (int **)(this->fp(this)) ) ; 
#line 15 "t1ac_ac.c"
printf("****aspect 3: around call foo4 under foo5, end, result = %d \n", result); }

 

 int __utac__cflow_t1ac_2 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
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


