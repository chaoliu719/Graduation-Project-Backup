
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
# 1 "t1mc_mc.c" 
typedef int int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 2 "t1mc_mc.c"
typedef int int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 4 "t1mc_mc.c"
inline unsigned int gnu_dev_minor(unsigned long long int __dev); 
#line 6 "t1mc_mc.c"
extern void abort(void ) __attribute__  (( __noreturn__ )) ; 
#line 8 "t1mc_mc.c"
extern void absder(void ) __attribute__  (( __const__ )) ; 
#line 10 "t1mc_mc.c"
extern double atof(__const char *__nptr) __attribute__  (( __pure__ )) ; 
#line 12 "t1mc_mc.c"
extern int snprintf(char *__restrict __s, int __maxlen, __const char *__restrict __format, ...) __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 17 "t1mc_mc.c"
extern void foox(__const int *__restrict abc); 
#line 18 "t1mc_mc.c"
extern void fooy(__const int *__restrict ); 
#line 21 "t1mc_mc.c"
int foo3()  
# 54 "t1mc.c"
{
# 56 "t1mc.c"
int retValue_acc;




# 62 "t1mc.c"
{

#line 22 "t1mc_mc.c"
printf("inside foo3\n"); 
#line 23 "t1mc_mc.c"

# 69 "t1mc.c"
retValue_acc = 0;
# 71 "t1mc.c"
return (int )retValue_acc;
 
# 74 "t1mc.c"

}

# 78 "t1mc.c"
return (int )retValue_acc;

# 81 "t1mc.c"

}
 
#line 26 "t1mc_mc.c"
int foo4()  
# 87 "t1mc.c"
{
# 89 "t1mc.c"
int retValue_acc;




# 95 "t1mc.c"
{

#line 27 "t1mc_mc.c"
printf("call foo3 inside foo4\n"); 
#line 28 "t1mc_mc.c"
foo3(); 
#line 29 "t1mc_mc.c"
printf("end of call foo3 inside foo4\n"); 
# 104 "t1mc.c"

}

# 108 "t1mc.c"
return (int )retValue_acc;

# 111 "t1mc.c"

}
 
static inline int  foo3__t1mc__0 (void)  ; 

#line 33 "t1mc_mc.c"
int main()  
# 119 "t1mc.c"
{
# 121 "t1mc.c"
int retValue_acc;




# 127 "t1mc.c"
{

#line 34 "t1mc_mc.c"
printf("call foo3 inside main\n"); 
#line 36 "t1mc_mc.c"
foo3__t1mc__0(); 
#line 38 "t1mc_mc.c"
printf("end of calling foo3 inside main\n"); 
#line 40 "t1mc_mc.c"
foo4(); 
#line 42 "t1mc_mc.c"

# 140 "t1mc.c"
retValue_acc = 0;
# 142 "t1mc.c"
return (int )retValue_acc;
 
# 145 "t1mc.c"

}

# 149 "t1mc.c"
return (int )retValue_acc;

# 152 "t1mc.c"

}
  void __utac_acc__t1ac__1 (void);

  int foo3 () ; 

# 159 "t1mc.c"
static inline int  foo3__t1mc__0 (void) {

# 162 "t1mc.c"
int retValue_acc;

{
__utac_acc__t1ac__1();

}

# 170 "t1mc.c"
retValue_acc = foo3 ( ) ;  

# 173 "t1mc.c"
return (int )retValue_acc;
}
 
