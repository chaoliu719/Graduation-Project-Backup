
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


#line 1 "t1mc.mc"
void (*myabc(int a, void (*func)(int )))(int )  
# 33 "t1mc.c"
{
# 35 "t1mc.c"
void(*retValue_acc)(int );




# 41 "t1mc.c"
{

#line 2 "t1mc.mc"
printf("inside myabc\n"); 
#line 3 "t1mc.mc"

# 48 "t1mc.c"
retValue_acc = func;
# 50 "t1mc.c"
return (void(*)(int ))retValue_acc;
 
# 53 "t1mc.c"

}

# 57 "t1mc.c"
return (void(*)(int ))retValue_acc;

# 60 "t1mc.c"

}
 
#line 6 "t1mc.mc"
void p(int b)  
# 66 "t1mc.c"
{



# 71 "t1mc.c"
{

# 74 "t1mc.c"

}

# 78 "t1mc.c"

}
 
static inline void(* myabc__t1mc__0 (int a ,void(*func)(int )  ) )(int ) ; 

#line 10 "t1mc.mc"
int main()  
# 86 "t1mc.c"
{
# 88 "t1mc.c"
int retValue_acc;




# 94 "t1mc.c"
{

#line 12 "t1mc.mc"
myabc__t1mc__0(3, p); 
#line 14 "t1mc.mc"

# 101 "t1mc.c"
retValue_acc = 0;
# 103 "t1mc.c"
return (int )retValue_acc;
 
# 106 "t1mc.c"

}

# 110 "t1mc.c"
return (int )retValue_acc;

# 113 "t1mc.c"

}
  void __utac_acc__t2__1 (  struct JoinPoint * );

  void(*myabc (int a ,void(*func)(int )  ))(int ) ; 

# 120 "t1mc.c"
static inline void(* myabc__t1mc__0 (int a ,void(*func)(int )  ) )(int ){

# 123 "t1mc.c"
void(*retValue_acc)(int );
 { 
 struct JoinPoint this; 
this.funcName = "main"; 
this.targetName = "myabc"; 
this.fileName = "t1mc.mc"; 
this.kind = "call"; 
 { 
__utac_acc__t2__1(&this );
 
 } 
 } 

# 137 "t1mc.c"
retValue_acc = myabc ( a , func ) ;  

# 140 "t1mc.c"
return (void(*)(int ))retValue_acc;
}
 
