
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
void call1(int a, int b)  
# 33 "t1mc.c"
{



# 38 "t1mc.c"
{

#line 2 "t1mc.mc"
printf("in call1, a = %d, b = %d\n", a, b); 
# 43 "t1mc.c"

}

# 47 "t1mc.c"

}
 
#line 5 "t1mc.mc"
void *call2(int a, int b)  
# 53 "t1mc.c"
{
# 55 "t1mc.c"
void* retValue_acc;




# 61 "t1mc.c"
{

#line 6 "t1mc.mc"

#line 6 "t1mc.mc"
void *p = 0;
#line 7 "t1mc.mc"
printf("in call2, a = %d, b = %d\n", a, b); 
#line 8 "t1mc.mc"

# 72 "t1mc.c"
retValue_acc = 0;
# 74 "t1mc.c"
return (void* )retValue_acc;
 
# 77 "t1mc.c"

}

# 81 "t1mc.c"
return (void* )retValue_acc;

# 84 "t1mc.c"

}
 
static inline void  callback__t1mc__0 (int __utac__para0 ,int __utac__para1  ,void (* __utac__fp__para) (int __utac__para0 ,int __utac__para1  ) )  ; 

#line 12 "t1mc.mc"
void foo(int *g, void (callback)(int , int ))  
# 92 "t1mc.c"
{



# 97 "t1mc.c"
{

#line 14 "t1mc.mc"
printf("in foo, call call1 with 3, 4\n"); 
#line 15 "t1mc.mc"
((callback__t1mc__0))(3, 4, callback    ); 
#line 17 "t1mc.mc"
return ; 
 
# 107 "t1mc.c"

}

# 111 "t1mc.c"

}
  void __utac_acc__t1ac__3 (void);


# 117 "t1mc.c"
static inline void  callback__t1mc__0 (int __utac__para0 ,int __utac__para1  ,void (* __utac__fp__para) (int __utac__para0 ,int __utac__para1  ) ) {

{
    void call1 (int  ,int   ) ;  
if( (__utac__fp__para==call1  ) ) { 
__utac_acc__t1ac__3();
 } 

}
(*__utac__fp__para) ( __utac__para0 , __utac__para1 ) ;  
}
 
static inline void*  callback__t1mc__1 (int __utac__para0 ,int __utac__para1  ,void* (* __utac__fp__para) (int __utac__para0 ,int __utac__para1  ) )  ; 

#line 20 "t1mc.mc"
void foo2(int g, void *(callback)(int , int ))  
# 134 "t1mc.c"
{



# 139 "t1mc.c"
{

#line 22 "t1mc.mc"
printf("in foo2, call call2 with 5, 6\n"); 
#line 23 "t1mc.mc"
((callback__t1mc__1))(5, 6, callback    ); 
#line 24 "t1mc.mc"
return ; 
 
# 149 "t1mc.c"

}

# 153 "t1mc.c"

}
  void __utac_acc__t1ac__4 (void);


# 159 "t1mc.c"
static inline void*  callback__t1mc__1 (int __utac__para0 ,int __utac__para1  ,void* (* __utac__fp__para) (int __utac__para0 ,int __utac__para1  ) ) {

# 162 "t1mc.c"
void* retValue_acc;

{
    void* call2 (int  ,int   ) ;  
if( (__utac__fp__para==call2  ) ) { 
__utac_acc__t1ac__4();
 } 

}

# 173 "t1mc.c"
retValue_acc = (*__utac__fp__para) ( __utac__para0 , __utac__para1 ) ;  

# 176 "t1mc.c"
return (void* )retValue_acc;
}
 
static inline void  foo2__t1mc__3 (int g ,void*(*callback)(int ,int )  )  ; 

static inline void  foo__t1mc__2 (int* g ,void(*callback)(int ,int )  )  ; 

#line 28 "t1mc.mc"
int main()  
# 186 "t1mc.c"
{
# 188 "t1mc.c"
int retValue_acc;




# 194 "t1mc.c"
{

#line 29 "t1mc.mc"

#line 29 "t1mc.mc"
int p = 3;
#line 30 "t1mc.mc"
printf("call foo in main\n"); 
#line 31 "t1mc.mc"
foo__t1mc__2((&p), call1); 
#line 32 "t1mc.mc"
printf("\n"); 
#line 34 "t1mc.mc"
printf("call foo2 in main\n"); 
#line 35 "t1mc.mc"
foo2__t1mc__3(p, call2); 
#line 36 "t1mc.mc"

# 213 "t1mc.c"
retValue_acc = 0;
# 215 "t1mc.c"
return (int )retValue_acc;
 
# 218 "t1mc.c"

}

# 222 "t1mc.c"
return (int )retValue_acc;

# 225 "t1mc.c"

}
  void __utac_acc__t1ac__2 (void);

  void foo2 (int g ,void*(*callback)(int ,int )  ) ; 

# 232 "t1mc.c"
static inline void  foo2__t1mc__3 (int g ,void*(*callback)(int ,int )  ) {

{
__utac_acc__t1ac__2();

}
foo2 ( g , callback ) ;  
}
  void __utac_acc__t1ac__1 (void);

  void foo (int* g ,void(*callback)(int ,int )  ) ; 

# 245 "t1mc.c"
static inline void  foo__t1mc__2 (int* g ,void(*callback)(int ,int )  ) {

{
__utac_acc__t1ac__1();

}
foo ( g , callback ) ;  
}
 
