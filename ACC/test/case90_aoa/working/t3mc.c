
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


#line 2 "t3mc.mc"
void foo2()  
# 33 "t3mc.c"
{



# 38 "t3mc.c"
{

#line 3 "t3mc.mc"
printf("in foo2 \n"); 
# 43 "t3mc.c"

}

# 47 "t3mc.c"

}
 
#line 6 "t3mc.mc"
void foo1()  
# 53 "t3mc.c"
{



# 58 "t3mc.c"
{

#line 7 "t3mc.mc"
printf("call foo2 in foo1\n"); 
#line 8 "t3mc.mc"
foo2(); 
# 65 "t3mc.c"

}

# 69 "t3mc.c"

}
 
static inline void  foo1__t3mc__0 (void)  ; 

#line 12 "t3mc.mc"
void foo()  
# 77 "t3mc.c"
{



# 82 "t3mc.c"
{

#line 13 "t3mc.mc"
printf("call foo1 in foo\n"); 
#line 14 "t3mc.mc"
foo1__t3mc__0(); 
# 89 "t3mc.c"

}

# 93 "t3mc.c"

}
  void __utac_acc__t3a1__3 (void);

  void foo1 () ; 

# 100 "t3mc.c"
static inline void  foo1__t3mc__0 (void) {

{
__utac_acc__t3a1__3();

}
foo1 ( ) ;  
}
 
#line 17 "t3mc.mc"
int main()  
# 112 "t3mc.c"
{
# 114 "t3mc.c"
int retValue_acc;




# 120 "t3mc.c"
{

#line 18 "t3mc.mc"
printf("call foo in main\n"); 
#line 19 "t3mc.mc"
foo(); 
#line 20 "t3mc.mc"

# 129 "t3mc.c"
retValue_acc = 0;
# 131 "t3mc.c"
return (int )retValue_acc;
 
# 134 "t3mc.c"

}

# 138 "t3mc.c"
return (int )retValue_acc;

# 141 "t3mc.c"

}
 
