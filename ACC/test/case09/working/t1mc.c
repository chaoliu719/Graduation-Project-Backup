
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


# 1 "t1mc.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "t1mc.c" 
char *foo3(char *x, int pp)  
# 36 "t1mc.c"
{
# 38 "t1mc.c"
char* retValue_acc;




# 44 "t1mc.c"
{

#line 2 "t1mc.c"
printf("inside foo3, parameter = %s, %d\n", x, pp); 
#line 3 "t1mc.c"
printf("return value = %s\n", "abcde"); 
#line 4 "t1mc.c"

# 53 "t1mc.c"
retValue_acc = "abcde";
# 55 "t1mc.c"
return (char* )retValue_acc;
 
# 58 "t1mc.c"

}

# 62 "t1mc.c"
return (char* )retValue_acc;

# 65 "t1mc.c"

}
 
static inline char*  foo3__t1mc__0 (char* x ,int pp  )  ; 

#line 8 "t1mc.c"
int main()  
# 73 "t1mc.c"
{
# 75 "t1mc.c"
int retValue_acc;




# 81 "t1mc.c"
{

#line 10 "t1mc.c"
foo3__t1mc__0("hello", 345); 
#line 12 "t1mc.c"

# 88 "t1mc.c"
retValue_acc = 0;
# 90 "t1mc.c"
return (int )retValue_acc;
 
# 93 "t1mc.c"

}

# 97 "t1mc.c"
return (int )retValue_acc;

# 100 "t1mc.c"

}
  void __utac_acc__t1ac__1 (char* x ,char* y  );

  char* foo3 (char* x ,int pp  ) ; 

# 107 "t1mc.c"
static inline char*  foo3__t1mc__0 (char* x ,int pp  ) {

# 110 "t1mc.c"
char* retValue_acc;

# 113 "t1mc.c"
retValue_acc = foo3 ( x , pp ) ;  

{
char* __utac__ad__arg1 = x ; 
char* __utac__ad__arg2 = retValue_acc ; 
__utac_acc__t1ac__1(__utac__ad__arg1 ,__utac__ad__arg2 );

}

# 123 "t1mc.c"
return (char* )retValue_acc;
}
 
