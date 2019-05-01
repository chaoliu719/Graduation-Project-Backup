
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


#line 2 "t2mc.mc"
void foo2()  
# 33 "t2mc.c"
{



# 38 "t2mc.c"
{

#line 3 "t2mc.mc"
printf("in foo2 \n"); 
# 43 "t2mc.c"

}

# 47 "t2mc.c"

}
 
#line 6 "t2mc.mc"
void foo1()  
# 53 "t2mc.c"
{



# 58 "t2mc.c"
{

#line 7 "t2mc.mc"
printf("call foo2 in foo1\n"); 
#line 8 "t2mc.mc"
foo2(); 
# 65 "t2mc.c"

}

# 69 "t2mc.c"

}
 
static inline void  foo1__t2mc__0 (void)  ; 

#line 12 "t2mc.mc"
void foo()  
# 77 "t2mc.c"
{



# 82 "t2mc.c"
{

#line 13 "t2mc.mc"
printf("call foo1 in foo\n"); 
#line 14 "t2mc.mc"
foo1__t2mc__0(); 
# 89 "t2mc.c"

}

# 93 "t2mc.c"

}
  void __utac_acc__t2a1__1 (void);
int __utac__cflow_t2a1_0(int, int);

  void foo1 () ; 

# 101 "t2mc.c"
static inline void  foo1__t2mc__0 (void) {

{
if( __utac__cflow_t2a1_0(3,0) ) { 
__utac_acc__t2a1__1();
 } 

}
foo1 ( ) ;  
}
 
static inline void  foo__t2mc__1 (void)  ; 

#line 17 "t2mc.mc"
int main()  
# 117 "t2mc.c"
{
# 119 "t2mc.c"
int retValue_acc;




# 125 "t2mc.c"
{

#line 18 "t2mc.mc"
printf("call foo in main\n"); 
#line 19 "t2mc.mc"
foo__t2mc__1(); 
#line 20 "t2mc.mc"

# 134 "t2mc.c"
retValue_acc = 0;
# 136 "t2mc.c"
return (int )retValue_acc;
 
# 139 "t2mc.c"

}

# 143 "t2mc.c"
return (int )retValue_acc;

# 146 "t2mc.c"

}
int __utac__cflow_t2a1_0 ( int , int);

int __utac__cflow_t2a1_0 ( int , int);

  void foo () ; 

# 155 "t2mc.c"
static inline void  foo__t2mc__1 (void) {

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t2a1_0, __utac__cflow_t2a1_0(3,0)); } 
 } 
__utac__cflow_t2a1_0 ( 1, 0 ) ; 

}
foo ( ) ;  

{
__utac__cflow_t2a1_0 ( 2, 0 ) ; 

}
}
 
