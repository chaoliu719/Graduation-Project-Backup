
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

#line 2 "t1ac.ac"
const  __attribute__  (( aligned ( 2 )  )) volatile int var1; 
#line 4 "t1ac.ac"
 __attribute__  (( aligned ( 2 )  )) const int var2; 
#line 6 "t1ac.ac"
int var3,var4,var5 __attribute__  (( aligned ( 4 )  )) ; 
#line 8 "t1ac.ac"
int var6 __attribute__  (( aligned ( 4 )  )) ; 
#line 10 "t1ac.ac"
int var7 __attribute__  (( aligned ( 4 )  )) ,var8; 
#line 12 "t1ac.ac"
int var9, __attribute__  (( aligned ( 4 )  )) var10; 
#line 14 "t1ac.ac"
int var11 __attribute__  (( aligned ( 4 )  )) , __attribute__  (( aligned ( 8 )  )) var12; 
#line 16 "t1ac.ac"
enum  __attribute__  (( packed )) {E1,E2}; 
#line 18 "t1ac.ac"
enum  __attribute__  (( packed )) EX {E3,E4}; 
#line 20 "t1ac.ac"
enum  __attribute__  (( packed )) EX var13; 
#line 22 "t1ac.ac"
enum {E5,E6} __attribute__  (( packed )) ; 
#line 24 "t1ac.ac"
enum EX2 {E7,E8} __attribute__  (( packed )) ; 
#line 27 "t1ac.ac"
int var14 __attribute__  (( packed ))  = 4; 
#line 30 "t1ac.ac"
int main()  {

#line 32 "t1ac.ac"
 __asm__ ("kkk kkekre"); 
#line 34 "t1ac.ac"
__builtin_offsetof (int  , a); }
 
#line 38 "t1ac.ac"
typedef char ( __attribute__  (( cdecl )) *foo1)(); 
#line 39 "t1ac.ac"
typedef char ( __attribute__  (( cdecl )) foo2)(); 
#line 41 "t1ac.ac"
char (*foo3)(); 
#line 42 "t1ac.ac"
char ( __attribute__  (( cdecl )) *foo4)(); 
#line 43 "t1ac.ac"
char ( __attribute__  (( cdecl )) *foo5)(); 
#line 44 "t1ac.ac"
char ( __attribute__  (( cdecl )) foo6)(); 
#line 50 "t1ac.ac"
typedef void ( __attribute__  (( cdecl )) *XML_ElementDeclHandler)(void *userData, const char name, const char *model); 
#line 55 "t1ac.ac"
typedef struct {int ( __attribute__  (( cdecl )) *convert)(void *data, const char *s); void ( __attribute__  (( cdecl )) *release)(void *data); 
}XML_Encoding; 
#line 60 "t1ac.ac"
typedef struct X {const char **paramNames_apvc; 
}X_t; 
#line 68 "t1ac.ac"
 X_t X_a[1] = {{.paramNames_apvc = (const char *([0])){}}}; 



