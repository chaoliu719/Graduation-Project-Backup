
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
int foo(int call); 
#line 3 "t1mc_mc.c"
int foo2(int execution); 
#line 4 "t1mc_mc.c"
int foo33(int before); 
#line 5 "t1mc_mc.c"
int foo44444(int after); 
#line 6 "t1mc_mc.c"
int foo5(int around); 
#line 7 "t1mc_mc.c"
int foo6(int args); 
#line 8 "t1mc_mc.c"
int foo7(int result); 
#line 9 "t1mc_mc.c"
int foo8(int proceed); 
#line 10 "t1mc_mc.c"
int foo9(int infile); 
#line 11 "t1mc_mc.c"
int foo10(int infunc)  
# 54 "t1mc.c"
{
# 56 "t1mc.c"
int retValue_acc;




# 62 "t1mc.c"
{

#line 12 "t1mc_mc.c"

# 67 "t1mc.c"
retValue_acc = 3;
# 69 "t1mc.c"
return (int )retValue_acc;
 
# 72 "t1mc.c"

}

# 76 "t1mc.c"
return (int )retValue_acc;

# 79 "t1mc.c"

}
 
#line 18 "t1mc_mc.c"
struct S1 {int call; 
}; 
#line 22 "t1mc_mc.c"
struct S2 {int execution; 
}; 
#line 26 "t1mc_mc.c"
struct S3 {int before; 
}; 
#line 30 "t1mc_mc.c"
struct S4 {int after; 
}; 
#line 34 "t1mc_mc.c"
struct S5 {int around; 
}; 
#line 38 "t1mc_mc.c"
struct S6 {int args; 
}; 
#line 42 "t1mc_mc.c"
struct S7 {int result; 
}; 
#line 47 "t1mc_mc.c"
struct S8 {int proceed; 
}; 
#line 51 "t1mc_mc.c"
struct S9 {int infile; 
}; 
#line 55 "t1mc_mc.c"
struct S10 {int infunc; 
}; 
#line 59 "t1mc_mc.c"
int call(); 
#line 60 "t1mc_mc.c"
int execution(); 
#line 61 "t1mc_mc.c"
int before(); 
#line 62 "t1mc_mc.c"
int after(); 
#line 63 "t1mc_mc.c"
int around(); 
#line 64 "t1mc_mc.c"
int args(); 
#line 65 "t1mc_mc.c"
int result(); 
#line 66 "t1mc_mc.c"
int proceed(); 
#line 67 "t1mc_mc.c"
int infile(); 
#line 68 "t1mc_mc.c"
int infunc(); 
#line 70 "t1mc_mc.c"
typedef int int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 71 "t1mc_mc.c"
typedef int int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 73 "t1mc_mc.c"
inline unsigned int gnu_dev_minor(unsigned long long int __dev); 
#line 75 "t1mc_mc.c"
extern void abort(void ) __attribute__  (( __noreturn__ )) ; 
#line 77 "t1mc_mc.c"
extern void absder(void ) __attribute__  (( __const__ )) ; 
#line 79 "t1mc_mc.c"
extern double atof(__const char *__nptr) __attribute__  (( __pure__ )) ; 
#line 81 "t1mc_mc.c"
extern int snprintf(char *__restrict __s, int __maxlen, __const char *__restrict __format, ...) __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 87 "t1mc_mc.c"
extern void foox(__const int *__restrict abc); 
#line 88 "t1mc_mc.c"
extern void fooy(__const int *__restrict ); 
#line 92 "t1mc_mc.c"
int foo3()  
# 153 "t1mc.c"
{
# 155 "t1mc.c"
int retValue_acc;




# 161 "t1mc.c"
{

#line 93 "t1mc_mc.c"
printf("inside foo3\n"); 
#line 94 "t1mc_mc.c"

# 168 "t1mc.c"
retValue_acc = 0;
# 170 "t1mc.c"
return (int )retValue_acc;
 
# 173 "t1mc.c"

}

# 177 "t1mc.c"
return (int )retValue_acc;

# 180 "t1mc.c"

}
 
#line 97 "t1mc_mc.c"
int foo4()  
# 186 "t1mc.c"
{
# 188 "t1mc.c"
int retValue_acc;




# 194 "t1mc.c"
{

#line 98 "t1mc_mc.c"
printf("call foo3 inside foo4\n"); 
#line 99 "t1mc_mc.c"
foo3(); 
#line 100 "t1mc_mc.c"
printf("end of call foo3 inside foo4\n"); 
# 203 "t1mc.c"

}

# 207 "t1mc.c"
return (int )retValue_acc;

# 210 "t1mc.c"

}
 
static inline int  foo3__t1mc__0 (void)  ; 

#line 104 "t1mc_mc.c"
int main()  
# 218 "t1mc.c"
{
# 220 "t1mc.c"
int retValue_acc;




# 226 "t1mc.c"
{

#line 108 "t1mc_mc.c"
printf("call foo3 inside main\n"); 
#line 110 "t1mc_mc.c"
foo3__t1mc__0(); 
#line 112 "t1mc_mc.c"
printf("end of calling foo3 inside main\n"); 
#line 114 "t1mc_mc.c"
foo4(); 
#line 116 "t1mc_mc.c"

# 239 "t1mc.c"
retValue_acc = 0;
# 241 "t1mc.c"
return (int )retValue_acc;
 
# 244 "t1mc.c"

}

# 248 "t1mc.c"
return (int )retValue_acc;

# 251 "t1mc.c"

}
  void __utac_acc__t1ac__1 (void);

  int foo3 () ; 

# 258 "t1mc.c"
static inline int  foo3__t1mc__0 (void) {

# 261 "t1mc.c"
int retValue_acc;

{
__utac_acc__t1ac__1();

}

# 269 "t1mc.c"
retValue_acc = foo3 ( ) ;  

# 272 "t1mc.c"
return (int )retValue_acc;
}
 
