
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


#line 1 "t8mc.mc"
int t; 
static inline int  t__t8mc__1 (int __utac__para0  )  ; 

static inline int  t__t8mc__0 (int* __utac__para0 ,int __utac__para1  )  ; 

#line 3 "t8mc.mc"
int main()  
# 39 "t8mc.c"
{
# 41 "t8mc.c"
int retValue_acc;




# 47 "t8mc.c"
{

#line 4 "t8mc.mc"

#line 4 "t8mc.mc"
int p;
#line 6 "t8mc.mc"
t__t8mc__0(&t,(2)); 
#line 8 "t8mc.mc"
p = t__t8mc__1(t  ); 
#line 10 "t8mc.mc"

# 60 "t8mc.c"
retValue_acc = 0;
# 62 "t8mc.c"
return (int )retValue_acc;
 
# 65 "t8mc.c"

}

# 69 "t8mc.c"
return (int )retValue_acc;

# 72 "t8mc.c"

}
  void __utac_acc__t8a1__2 (  struct JoinPoint * );


# 78 "t8mc.c"
static inline int  t__t8mc__1 (int __utac__para0  ) {

# 81 "t8mc.c"
int retValue_acc;

# 84 "t8mc.c"
retValue_acc = __utac__para0 ; 
 { 
 struct JoinPoint this; 
this.funcName = "main"; 
this.targetName = "t"; 
this.fileName = "t8mc.mc"; 
this.kind = "get"; 
 { 
__utac_acc__t8a1__2(&this );
 
 } 
 } 

# 98 "t8mc.c"
return (int )retValue_acc;
}
  void __utac_acc__t8a1__1 (  struct JoinPoint * );


# 104 "t8mc.c"
static inline int  t__t8mc__0 (int* __utac__para0 ,int __utac__para1  ) {

# 107 "t8mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
this.funcName = "main"; 
this.targetName = "t"; 
this.fileName = "t8mc.mc"; 
this.kind = "set"; 
 { 
__utac_acc__t8a1__1(&this );
 
 } 
 } 

# 121 "t8mc.c"
retValue_acc = (*__utac__para0 = __utac__para1) ; 

# 124 "t8mc.c"
return (int )retValue_acc;
}
 
