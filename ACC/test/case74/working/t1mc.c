
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
int foo(_Bool a)  
# 33 "t1mc.c"
{
# 35 "t1mc.c"
int retValue_acc;




# 41 "t1mc.c"
{

#line 3 "t1mc.mc"
printf("in foo, a = %d\n", ((int )(a))); 
#line 4 "t1mc.mc"

# 48 "t1mc.c"
retValue_acc = 0;
# 50 "t1mc.c"
return (int )retValue_acc;
 
# 53 "t1mc.c"

}

# 57 "t1mc.c"
return (int )retValue_acc;

# 60 "t1mc.c"

}
 
static inline int  foo__t1mc__0 (_Bool a  )  ; 

#line 7 "t1mc.mc"
int main()  
# 68 "t1mc.c"
{
# 70 "t1mc.c"
int retValue_acc;




# 76 "t1mc.c"
{

#line 8 "t1mc.mc"
foo__t1mc__0(1); 
#line 9 "t1mc.mc"

# 83 "t1mc.c"
retValue_acc = 0;
# 85 "t1mc.c"
return (int )retValue_acc;
 
# 88 "t1mc.c"

}

# 92 "t1mc.c"
return (int )retValue_acc;

# 95 "t1mc.c"

}
  void __utac_acc__t1ac__1 (void);

  void __utac_acc__t1ac__2 (_Bool a  );

  int foo (_Bool a  ) ; 

# 104 "t1mc.c"
static inline int  foo__t1mc__0 (_Bool a  ) {

# 107 "t1mc.c"
int retValue_acc;

{
__utac_acc__t1ac__1();

}

{
_Bool __utac__ad__arg1 = a ; 
__utac_acc__t1ac__2(__utac__ad__arg1 );

}

# 121 "t1mc.c"
retValue_acc = foo ( a ) ;  

# 124 "t1mc.c"
return (int )retValue_acc;
}
 
