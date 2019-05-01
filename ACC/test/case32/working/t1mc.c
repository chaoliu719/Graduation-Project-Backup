
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


#line 4 "abc.h"
struct A {int *(*foo)(); 
}; 
#line 6 "abc.h"
void foo(); 
#line 8 "abc.h"
void foo()  
# 38 "t1mc.c"
{



# 43 "t1mc.c"
{

#line 9 "abc.h"
printf("inside foo\n"); 
# 48 "t1mc.c"

}

# 52 "t1mc.c"

}
 
static inline void  foo__t1mc__0 (void)  ; 

#line 12 "abc.h"
int main()  
# 60 "t1mc.c"
{
# 62 "t1mc.c"
int retValue_acc;




# 68 "t1mc.c"
{

#line 14 "abc.h"
foo__t1mc__0(); 
#line 15 "abc.h"

# 75 "t1mc.c"
retValue_acc = 0;
# 77 "t1mc.c"
return (int )retValue_acc;
 
# 80 "t1mc.c"

}

# 84 "t1mc.c"
return (int )retValue_acc;

# 87 "t1mc.c"

}
  void __utac_acc__t1ac__1 (void);

  void foo () ; 

# 94 "t1mc.c"
static inline void  foo__t1mc__0 (void) {

{
__utac_acc__t1ac__1();

}
foo ( ) ;  
}
 
