
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


#line 2 "t1mc.mc"
void foo2()  
# 33 "t1mc.c"
{



# 38 "t1mc.c"
{

#line 3 "t1mc.mc"
printf("in foo2 \n"); 
# 43 "t1mc.c"

}

# 47 "t1mc.c"

}
 
#line 6 "t1mc.mc"
void foo1()  
# 53 "t1mc.c"
{



# 58 "t1mc.c"
{

#line 7 "t1mc.mc"
printf("call foo2 in foo1\n"); 
#line 8 "t1mc.mc"
foo2(); 
# 65 "t1mc.c"

}

# 69 "t1mc.c"

}
 
#line 12 "t1mc.mc"
void foo()  
# 75 "t1mc.c"
{



# 80 "t1mc.c"
{

#line 13 "t1mc.mc"
printf("call foo1 in foo\n"); 
#line 14 "t1mc.mc"
foo1(); 
# 87 "t1mc.c"

}

# 91 "t1mc.c"

}
 
static inline void  foo__t1mc__0 (void)  ; 

#line 17 "t1mc.mc"
int main()  
# 99 "t1mc.c"
{
# 101 "t1mc.c"
int retValue_acc;




# 107 "t1mc.c"
{

#line 18 "t1mc.mc"
printf("call foo in main\n"); 
#line 19 "t1mc.mc"
foo__t1mc__0(); 
#line 20 "t1mc.mc"

# 116 "t1mc.c"
retValue_acc = 0;
# 118 "t1mc.c"
return (int )retValue_acc;
 
# 121 "t1mc.c"

}

# 125 "t1mc.c"
return (int )retValue_acc;

# 128 "t1mc.c"

}
  void __utac_acc__t1a4__1 (void);

  void foo () ; 

# 135 "t1mc.c"
static inline void  foo__t1mc__0 (void) {

{
__utac_acc__t1a4__1();

}
foo ( ) ;  
}
 
