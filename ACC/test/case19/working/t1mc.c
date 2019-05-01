
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
extern int snprintf(char *__restrict __s, int __maxlen, __const char *__restrict __format, ...) __attribute__  (( __format__ ( __printf__, 3, 4 )  ))  __attribute__  (( __pure__ )) ; 
#line 6 "t1mc_mc.c"
int foo3()  
# 38 "t1mc.c"
{
# 40 "t1mc.c"
int retValue_acc;




# 46 "t1mc.c"
{

#line 7 "t1mc_mc.c"
printf("inside foo3\n"); 
#line 8 "t1mc_mc.c"

# 53 "t1mc.c"
retValue_acc = 0;
# 55 "t1mc.c"
return (int )retValue_acc;
 
# 58 "t1mc.c"

}

# 62 "t1mc.c"
return (int )retValue_acc;

# 65 "t1mc.c"

}
 
#line 11 "t1mc_mc.c"
int foo4()  
# 71 "t1mc.c"
{
# 73 "t1mc.c"
int retValue_acc;




# 79 "t1mc.c"
{

#line 12 "t1mc_mc.c"
printf("call foo3 inside foo4\n"); 
#line 13 "t1mc_mc.c"
foo3(); 
#line 14 "t1mc_mc.c"
printf("end of call foo3 inside foo4\n"); 
# 88 "t1mc.c"

}

# 92 "t1mc.c"
return (int )retValue_acc;

# 95 "t1mc.c"

}
 
static inline int  foo3__t1mc__0 (void)  ; 

#line 18 "t1mc_mc.c"
int main()  
# 103 "t1mc.c"
{
# 105 "t1mc.c"
int retValue_acc;




# 111 "t1mc.c"
{

#line 24 "t1mc_mc.c"
((void )__extension__ ({ 
#line 21 "t1mc_mc.c"

#line 21 "t1mc_mc.c"
int a;
#line 22 "t1mc_mc.c"
a = 3; } )); 
#line 28 "t1mc_mc.c"
printf("call foo3 inside main\n"); 
#line 30 "t1mc_mc.c"
foo3__t1mc__0(); 
#line 32 "t1mc_mc.c"
printf("end of calling foo3 inside main\n"); 
#line 34 "t1mc_mc.c"
foo4(); 
#line 36 "t1mc_mc.c"

# 132 "t1mc.c"
retValue_acc = 0;
# 134 "t1mc.c"
return (int )retValue_acc;
 
# 137 "t1mc.c"

}

# 141 "t1mc.c"
return (int )retValue_acc;

# 144 "t1mc.c"

}
  void __utac_acc__t1ac__1 (void);

  int foo3 () ; 

# 151 "t1mc.c"
static inline int  foo3__t1mc__0 (void) {

# 154 "t1mc.c"
int retValue_acc;

{
__utac_acc__t1ac__1();

}

# 162 "t1mc.c"
retValue_acc = foo3 ( ) ;  

# 165 "t1mc.c"
return (int )retValue_acc;
}
 
