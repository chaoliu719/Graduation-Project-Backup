
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


# 1 "t1mc_mc.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 2 "t1mc_mc.c" 
void foo(int a, int b, int c)  
# 36 "t1mc.c"
{



# 41 "t1mc.c"
{

#line 4 "t1mc_mc.c"
printf("in""si""de ""foo\n"); 
# 46 "t1mc.c"

}

# 50 "t1mc.c"

}
 
static inline void  foo__t1mc__0 (int a ,int b ,int c  )  ; 

#line 10 "t1mc_mc.c"
int main()  
# 58 "t1mc.c"
{
# 60 "t1mc.c"
int retValue_acc;




# 66 "t1mc.c"
{

#line 12 "t1mc_mc.c"
foo__t1mc__0(3, 4, 5); 
#line 15 "t1mc_mc.c"

# 73 "t1mc.c"
retValue_acc = 0;
# 75 "t1mc.c"
return (int )retValue_acc;
 
# 78 "t1mc.c"

}

# 82 "t1mc.c"
return (int )retValue_acc;

# 85 "t1mc.c"

}
  void __utac_acc__t1ac__1 (void);

  void foo (int a ,int b ,int c  ) ; 

# 92 "t1mc.c"
static inline void  foo__t1mc__0 (int a ,int b ,int c  ) {

{
__utac_acc__t1ac__1();

}
foo ( a , b , c ) ;  
}
 
