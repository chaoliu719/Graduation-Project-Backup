
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


#line 1 "t4mc.mc"
typedef int myintt; 
#line 3 "t4mc.mc"
 myintt daf = 1; 
#line 5 "t4mc.mc"
int a = 2; 
static inline int  a__t4mc__1 (int* __utac__para0 ,int __utac__para1  )  ; 

static inline myintt  daf__t4mc__0 (myintt* __utac__para0 ,myintt __utac__para1  )  ; 

#line 8 "t4mc.mc"
int main()  
# 43 "t4mc.c"
{
# 45 "t4mc.c"
int retValue_acc;




# 51 "t4mc.c"
{

#line 9 "t4mc.mc"

#line 9 "t4mc.mc"
int j = 9;
#line 11 "t4mc.mc"
j = daf__t4mc__0(&daf,(j)); 
#line 13 "t4mc.mc"
printf("daf = %d\n", daf); 
#line 15 "t4mc.mc"
a__t4mc__1(&a,(a)+(j)); 
#line 17 "t4mc.mc"
printf("a = %d\n", a); 
#line 18 "t4mc.mc"

# 68 "t4mc.c"
retValue_acc = 0;
# 70 "t4mc.c"
return (int )retValue_acc;
 
# 73 "t4mc.c"

}

# 77 "t4mc.c"
return (int )retValue_acc;

# 80 "t4mc.c"

}
  void __utac_acc__t4a1__1 (void);

  void __utac_acc__t4a1__2 (void);

  void __utac_acc__t4a1__4 (void);


# 90 "t4mc.c"
static inline int  a__t4mc__1 (int* __utac__para0 ,int __utac__para1  ) {

# 93 "t4mc.c"
int retValue_acc;

{
__utac_acc__t4a1__1();

}

{
__utac_acc__t4a1__2();

}

{
__utac_acc__t4a1__4();

}

# 111 "t4mc.c"
retValue_acc = (*__utac__para0 = __utac__para1) ; 

# 114 "t4mc.c"
return (int )retValue_acc;
}
  void __utac_acc__t4a1__2 (void);

  void __utac_acc__t4a1__3 (void);

  void __utac_acc__t4a1__4 (void);


# 124 "t4mc.c"
static inline myintt  daf__t4mc__0 (myintt* __utac__para0 ,myintt __utac__para1  ) {

# 127 "t4mc.c"
myintt retValue_acc;

{
__utac_acc__t4a1__2();

}

{
__utac_acc__t4a1__3();

}

{
__utac_acc__t4a1__4();

}

# 145 "t4mc.c"
retValue_acc = (*__utac__para0 = __utac__para1) ; 

# 148 "t4mc.c"
return (myintt )retValue_acc;
}
 
