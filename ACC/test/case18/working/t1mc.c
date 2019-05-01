
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


#line 1 "t1mc.mc"
extern int snprintf(char *__restrict __s, int __maxlen, __const char *__restrict __format, ...) __attribute__  (( __format__ ( __printf__, 3, 4 )  ))  __attribute__  (( __pure__ ))  __attribute__  (( __const  )) ; 
#line 3 "t1mc.mc"
int  __attribute__  (( __cdecl__ )) gcc_attr1(int *); 
#line 4 "t1mc.mc"
int * __attribute__  (( __cdecl__ )) gcc_attr2(int ); 
#line 9 "t1mc.mc"
struct X {int  __attribute__  (( __cdecl__ )) (*abc)(int ); int * __attribute__  (( __cdecl__ )) (*def)(int ); 
}; 
#line 12 "t1mc.mc"
int foo3()  
# 42 "t1mc.c"
{
# 44 "t1mc.c"
int retValue_acc;




# 50 "t1mc.c"
{

#line 13 "t1mc.mc"
printf("inside foo3\n"); 
#line 14 "t1mc.mc"

# 57 "t1mc.c"
retValue_acc = 0;
# 59 "t1mc.c"
return (int )retValue_acc;
 
# 62 "t1mc.c"

}

# 66 "t1mc.c"
return (int )retValue_acc;

# 69 "t1mc.c"

}
 
#line 17 "t1mc.mc"
int foo4()  
# 75 "t1mc.c"
{
# 77 "t1mc.c"
int retValue_acc;




# 83 "t1mc.c"
{

#line 18 "t1mc.mc"
printf("call foo3 inside foo4\n"); 
#line 19 "t1mc.mc"
foo3(); 
#line 20 "t1mc.mc"
printf("end of call foo3 inside foo4\n"); 
# 92 "t1mc.c"

}

# 96 "t1mc.c"
return (int )retValue_acc;

# 99 "t1mc.c"

}
 
static inline int  foo3__t1mc__0 (void)  ; 

#line 24 "t1mc.mc"
int main()  
# 107 "t1mc.c"
{
# 109 "t1mc.c"
int retValue_acc;




# 115 "t1mc.c"
{

#line 28 "t1mc.mc"
printf("call foo3 inside main\n"); 
#line 30 "t1mc.mc"
foo3__t1mc__0(); 
#line 32 "t1mc.mc"
printf("end of calling foo3 inside main\n"); 
#line 34 "t1mc.mc"
foo4(); 
#line 36 "t1mc.mc"

# 128 "t1mc.c"
retValue_acc = 0;
# 130 "t1mc.c"
return (int )retValue_acc;
 
# 133 "t1mc.c"

}

# 137 "t1mc.c"
return (int )retValue_acc;

# 140 "t1mc.c"

}
  void __utac_acc__t1ac__1 (void);

  int foo3 () ; 

# 147 "t1mc.c"
static inline int  foo3__t1mc__0 (void) {

# 150 "t1mc.c"
int retValue_acc;

{
__utac_acc__t1ac__1();

}

# 158 "t1mc.c"
retValue_acc = foo3 ( ) ;  

# 161 "t1mc.c"
return (int )retValue_acc;
}
 
