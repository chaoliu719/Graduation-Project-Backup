
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


#line 2 "t4mc.mc"
void foo2()  
# 33 "t4mc.c"
{



# 38 "t4mc.c"
{

#line 3 "t4mc.mc"
printf("in foo2 \n"); 
# 43 "t4mc.c"

}

# 47 "t4mc.c"

}
 
#line 6 "t4mc.mc"
void foo1()  
# 53 "t4mc.c"
{



# 58 "t4mc.c"
{

#line 7 "t4mc.mc"
printf("call foo2 in foo1\n"); 
#line 8 "t4mc.mc"
foo2(); 
# 65 "t4mc.c"

}

# 69 "t4mc.c"

}
 
#line 12 "t4mc.mc"
void foo()  
# 75 "t4mc.c"
{



# 80 "t4mc.c"
{

#line 13 "t4mc.mc"
printf("call foo1 in foo\n"); 
#line 14 "t4mc.mc"
foo1(); 
# 87 "t4mc.c"

}

# 91 "t4mc.c"

}
 
static inline void  foo__t4mc__0 (void)  ; 

#line 17 "t4mc.mc"
int main()  
# 99 "t4mc.c"
{
# 101 "t4mc.c"
int retValue_acc;




# 107 "t4mc.c"
{

#line 18 "t4mc.mc"
printf("call foo in main\n"); 
#line 19 "t4mc.mc"
foo__t4mc__0(); 
#line 20 "t4mc.mc"

# 116 "t4mc.c"
retValue_acc = 0;
# 118 "t4mc.c"
return (int )retValue_acc;
 
# 121 "t4mc.c"

}

# 125 "t4mc.c"
return (int )retValue_acc;

# 128 "t4mc.c"

}
  void __utac_acc__t4a1__1 (void);

  void foo () ; 

# 135 "t4mc.c"
static inline void  foo__t4mc__0 (void) {

{
__utac_acc__t4a1__1();

}
foo ( ) ;  
}
 
