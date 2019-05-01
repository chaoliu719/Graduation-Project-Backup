
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
int main()  {

#line 4 "t1ac_ac.c"

#line 4 "t1ac_ac.c"
int k;
#line 6 "t1ac_ac.c"
 __asm ("ABC"); 
#line 7 "t1ac_ac.c"
 __asm volatile ("ABC"); 
#line 8 "t1ac_ac.c"
 __asm ("DDD" : "ekekre"(kkekrek),"kkkere"(erew)); 
#line 9 "t1ac_ac.c"
 __asm ("DDD" : "ekekre"(kkekrek),"kkkere"(erew) : "ekekre"(kkekrek),"kkkere"(erew)); 
#line 10 "t1ac_ac.c"
 __asm ("DDD" : "ekekre"(kkekrek),"kkkere"(erew) : "ekekre"(kkekrek),"kkkere"(erew) : "clob1","clob2"); 
#line 13 "t1ac_ac.c"
k = __alignof__ (int ); 
#line 16 "t1ac_ac.c"
k = 3 + 0x80000000; 
#line 18 "t1ac_ac.c"
k = 3E-2; 
#line 19 "t1ac_ac.c"
k = 3e+2; 
#line 21 "t1ac_ac.c"
return 0; }
 ; 



