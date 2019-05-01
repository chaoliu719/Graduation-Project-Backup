
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
static inline int  a__t4mc__2 (int __utac__para0  )  ; 

static inline myintt  daf__t4mc__1 (myintt __utac__para0  )  ; 

static inline myintt  daf__t4mc__0 (myintt __utac__para0  )  ; 

#line 8 "t4mc.mc"
int main()  
# 45 "t4mc.c"
{
# 47 "t4mc.c"
int retValue_acc;




# 53 "t4mc.c"
{

#line 9 "t4mc.mc"

#line 9 "t4mc.mc"
int j;
#line 11 "t4mc.mc"
j = daf__t4mc__0(daf  ); 
#line 13 "t4mc.mc"
printf("j = %d\n", j); 
#line 15 "t4mc.mc"
j = daf__t4mc__1(daf  ) + a__t4mc__2(a  ); 
#line 17 "t4mc.mc"
printf("j = %d\n", j); 
#line 18 "t4mc.mc"

# 70 "t4mc.c"
retValue_acc = 0;
# 72 "t4mc.c"
return (int )retValue_acc;
 
# 75 "t4mc.c"

}

# 79 "t4mc.c"
return (int )retValue_acc;

# 82 "t4mc.c"

}
  void __utac_acc__t4a1__1 (void);

  void __utac_acc__t4a1__2 (void);

  void __utac_acc__t4a1__4 (void);


# 92 "t4mc.c"
static inline int  a__t4mc__2 (int __utac__para0  ) {

# 95 "t4mc.c"
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

# 113 "t4mc.c"
retValue_acc = __utac__para0 ; 

# 116 "t4mc.c"
return (int )retValue_acc;
}
  void __utac_acc__t4a1__2 (void);

  void __utac_acc__t4a1__3 (void);

  void __utac_acc__t4a1__4 (void);


# 126 "t4mc.c"
static inline myintt  daf__t4mc__1 (myintt __utac__para0  ) {

# 129 "t4mc.c"
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

# 147 "t4mc.c"
retValue_acc = __utac__para0 ; 

# 150 "t4mc.c"
return (myintt )retValue_acc;
}
  void __utac_acc__t4a1__2 (void);

  void __utac_acc__t4a1__3 (void);

  void __utac_acc__t4a1__4 (void);


# 160 "t4mc.c"
static inline myintt  daf__t4mc__0 (myintt __utac__para0  ) {

# 163 "t4mc.c"
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

# 181 "t4mc.c"
retValue_acc = __utac__para0 ; 

# 184 "t4mc.c"
return (myintt )retValue_acc;
}
 
