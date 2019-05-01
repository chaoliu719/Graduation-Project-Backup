
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


#line 1 "t6mc.mc"
extern int a; 
#line 2 "t6mc.mc"
extern char b; 
static inline char  b__t6mc__1 (char __utac__para0  )  ; 

static inline int  a__t6mc__0 (int* __utac__para0 ,int __utac__para1  )  ; 

#line 4 "t6mc.mc"
int main()  
# 41 "t6mc.c"
{
# 43 "t6mc.c"
int retValue_acc;




# 49 "t6mc.c"
{

#line 5 "t6mc.mc"
printf("set a in main \n"); 
#line 6 "t6mc.mc"
a__t6mc__0(&a,(3)); 
#line 7 "t6mc.mc"
printf("get a = %d in main \n", a); 
#line 9 "t6mc.mc"
printf("set b in main \n"); 
#line 10 "t6mc.mc"
b = 'x'; 
#line 11 "t6mc.mc"
printf("get b = %c in main \n", b__t6mc__1(b  )); 
#line 13 "t6mc.mc"

# 66 "t6mc.c"
retValue_acc = 0;
# 68 "t6mc.c"
return (int )retValue_acc;
 
# 71 "t6mc.c"

}

# 75 "t6mc.c"
return (int )retValue_acc;

# 78 "t6mc.c"

}
  void __utac_acc__t6a2__1 (void);


# 84 "t6mc.c"
static inline char  b__t6mc__1 (char __utac__para0  ) {

# 87 "t6mc.c"
char retValue_acc;

# 90 "t6mc.c"
retValue_acc = __utac__para0 ; 

{
__utac_acc__t6a2__1();

}

# 98 "t6mc.c"
return (char )retValue_acc;
}
  void __utac_acc__t6a1__1 (void);


# 104 "t6mc.c"
static inline int  a__t6mc__0 (int* __utac__para0 ,int __utac__para1  ) {

# 107 "t6mc.c"
int retValue_acc;

{
__utac_acc__t6a1__1();

}

# 115 "t6mc.c"
retValue_acc = (*__utac__para0 = __utac__para1) ; 

# 118 "t6mc.c"
return (int )retValue_acc;
}
 
