
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

# 1 "t3mc_mc.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "t3mc_mc.c" 
# 9 "t3mc_mc.c" 
struct before {int i; 
}; 
#line 10 "t3mc_mc.c"
struct after {int i; 
}; 
#line 11 "t3mc_mc.c"
struct around {int i; 
}; 
#line 13 "t3mc_mc.c"
struct call {int i; 
}; 
#line 14 "t3mc_mc.c"
struct execution {int i; 
}; 
#line 15 "t3mc_mc.c"
struct args {int i; 
}; 
#line 16 "t3mc_mc.c"
struct result {int i; 
}; 
#line 17 "t3mc_mc.c"
struct infile {int i; 
}; 
#line 18 "t3mc_mc.c"
struct infunc {int i; 
}; 
#line 20 "t3mc_mc.c"
struct proceed {int i; 
}; 



