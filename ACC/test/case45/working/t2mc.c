
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


# 1 "t2mc_mc.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "t2mc_mc.c" 
extern void foo(int ); 
#line 3 "t2mc_mc.c"
void foo2(char *s)  
# 38 "t2mc.c"
{



# 43 "t2mc.c"
{

#line 4 "t2mc_mc.c"
printf("inside foo2, s = %s\n", s); 
#line 5 "t2mc_mc.c"
foo(3); 
# 50 "t2mc.c"

}

# 54 "t2mc.c"

}
 
