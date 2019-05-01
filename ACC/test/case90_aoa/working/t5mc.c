
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


#line 2 "t5mc.mc"
extern void foo3(); 
#line 4 "t5mc.mc"
void foo2()  
# 35 "t5mc.c"
{



# 40 "t5mc.c"
{

#line 5 "t5mc.mc"
printf("call foo3 in foo2 \n"); 
#line 6 "t5mc.mc"
foo3(); 
# 47 "t5mc.c"

}

# 51 "t5mc.c"

}
 
#line 9 "t5mc.mc"
void foo1()  
# 57 "t5mc.c"
{



# 62 "t5mc.c"
{

#line 10 "t5mc.mc"
printf("call foo2 in foo1\n"); 
#line 11 "t5mc.mc"
foo2(); 
# 69 "t5mc.c"

}

# 73 "t5mc.c"

}
 
static inline void  foo1__t5mc__0 (void)  ; 

#line 15 "t5mc.mc"
void foo()  
# 81 "t5mc.c"
{



# 86 "t5mc.c"
{

#line 16 "t5mc.mc"
printf("call foo1 in foo\n"); 
#line 17 "t5mc.mc"
foo1__t5mc__0(); 
# 93 "t5mc.c"

}

# 97 "t5mc.c"

}
  void __utac_acc__t5a4__2 (void);

  void foo1 () ; 

# 104 "t5mc.c"
static inline void  foo1__t5mc__0 (void) {

{
__utac_acc__t5a4__2();

}
}
 
#line 20 "t5mc.mc"
int main()  
# 115 "t5mc.c"
{
# 117 "t5mc.c"
int retValue_acc;




# 123 "t5mc.c"
{

#line 21 "t5mc.mc"
printf("call foo in main\n"); 
#line 22 "t5mc.mc"
foo(); 
#line 23 "t5mc.mc"

# 132 "t5mc.c"
retValue_acc = 0;
# 134 "t5mc.c"
return (int )retValue_acc;
 
# 137 "t5mc.c"

}

# 141 "t5mc.c"
return (int )retValue_acc;

# 144 "t5mc.c"

}
 
