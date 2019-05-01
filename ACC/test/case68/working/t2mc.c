
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
int foo3()  
# 36 "t2mc.c"
{
# 38 "t2mc.c"
int retValue_acc;




# 44 "t2mc.c"
{

#line 2 "t2mc_mc.c"
printf("in foo3\n"); 
#line 3 "t2mc_mc.c"

# 51 "t2mc.c"
retValue_acc = 3;
# 53 "t2mc.c"
return (int )retValue_acc;
 
# 56 "t2mc.c"

}

# 60 "t2mc.c"
return (int )retValue_acc;

# 63 "t2mc.c"

}
 
