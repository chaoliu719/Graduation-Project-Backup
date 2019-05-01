
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


# 1 "dir2/t1mc_mc.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "dir2/t1mc_mc.c" 
int foo(char *a)  
# 36 "./dir2/t1mc.c"
{
# 38 "./dir2/t1mc.c"
int retValue_acc;




# 44 "./dir2/t1mc.c"
{

#line 2 "dir2/t1mc_mc.c"
printf("inside foo, a = %s\n", a); 
#line 3 "dir2/t1mc_mc.c"

# 51 "./dir2/t1mc.c"
retValue_acc = 99;
# 53 "./dir2/t1mc.c"
return (int )retValue_acc;
 
# 56 "./dir2/t1mc.c"

}

# 60 "./dir2/t1mc.c"
return (int )retValue_acc;

# 63 "./dir2/t1mc.c"

}
 
static inline int  foo__t1mc__0 (char* a  )  ; 

#line 6 "dir2/t1mc_mc.c"
void foo2()  
# 71 "./dir2/t1mc.c"
{



# 76 "./dir2/t1mc.c"
{

#line 7 "dir2/t1mc_mc.c"
foo__t1mc__0("call foo in foo2\n"); 
# 81 "./dir2/t1mc.c"

}

# 85 "./dir2/t1mc.c"

}
  void __utac_acc__t1ac__4 (void);

  int foo (char* a  ) ; 

# 92 "./dir2/t1mc.c"
static inline int  foo__t1mc__0 (char* a  ) {

# 95 "./dir2/t1mc.c"
int retValue_acc;

{
__utac_acc__t1ac__4();

}

# 103 "./dir2/t1mc.c"
retValue_acc = foo ( a ) ;  

# 106 "./dir2/t1mc.c"
return (int )retValue_acc;
}
 
static inline int  foo__t1mc__1 (char* a  )  ; 

#line 10 "dir2/t1mc_mc.c"
int main()  
# 114 "./dir2/t1mc.c"
{
# 116 "./dir2/t1mc.c"
int retValue_acc;




# 122 "./dir2/t1mc.c"
{

#line 11 "dir2/t1mc_mc.c"
foo__t1mc__1("call foo in main"); 
#line 12 "dir2/t1mc_mc.c"
foo2(); 
#line 13 "dir2/t1mc_mc.c"

# 131 "./dir2/t1mc.c"
retValue_acc = 0;
# 133 "./dir2/t1mc.c"
return (int )retValue_acc;
 
# 136 "./dir2/t1mc.c"

}

# 140 "./dir2/t1mc.c"
return (int )retValue_acc;

# 143 "./dir2/t1mc.c"

}
  void __utac_acc__t1ac__5 (void);

  int foo (char* a  ) ; 

# 150 "./dir2/t1mc.c"
static inline int  foo__t1mc__1 (char* a  ) {

# 153 "./dir2/t1mc.c"
int retValue_acc;

{
__utac_acc__t1ac__5();

}

# 161 "./dir2/t1mc.c"
retValue_acc = foo ( a ) ;  

# 164 "./dir2/t1mc.c"
return (int )retValue_acc;
}
 
