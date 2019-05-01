
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


#line 4 "t1mc.mc"
struct s {int (*f)(void ); 
}; 
static inline int  f__t1mc__0 (int (* __utac__fp__para) () )  ; 

#line 12 "t1mc.mc"
int call_f(struct s *my_s)  
# 38 "t1mc.c"
{
# 40 "t1mc.c"
int retValue_acc;




# 46 "t1mc.c"
{

#line 13 "t1mc.mc"

#line 13 "t1mc.mc"
int (*f)(void );
#line 14 "t1mc.mc"

#line 14 "t1mc.mc"
int (*f2)(void );
#line 15 "t1mc.mc"
f = (my_s->f); 
#line 16 "t1mc.mc"
f__t1mc__0( f    ); 
# 61 "t1mc.c"

}

# 65 "t1mc.c"
return (int )retValue_acc;

# 68 "t1mc.c"

}
  void __utac_acc__t1ac__1 (  struct JoinPoint * );


# 74 "t1mc.c"
static inline int  f__t1mc__0 (int (* __utac__fp__para) () ) {

# 77 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
this.funcName = "call_f"; 
this.targetName = "f"; 
this.fileName = "t1mc.mc"; 
this.kind = "callp"; 
 { 
    int my_f1 (void   ) ;  
    int my_f2 (void   ) ;  
if( ((__utac__fp__para==my_f1 && ( this.targetName="my_f1")   ) || (__utac__fp__para==my_f2 && ( this.targetName="my_f2")   )) ) { 
__utac_acc__t1ac__1(&this );
 } 
 
 } 
 } 

# 95 "t1mc.c"
retValue_acc = (*__utac__fp__para) ( ) ;  

# 98 "t1mc.c"
return (int )retValue_acc;
}
 
#line 19 "t1mc.mc"
int my_f1(void )  
# 104 "t1mc.c"
{
# 106 "t1mc.c"
int retValue_acc;




# 112 "t1mc.c"
{

#line 20 "t1mc.mc"
printf("Function \"my_f1\" has been called\n"); 
# 117 "t1mc.c"

}

# 121 "t1mc.c"
return (int )retValue_acc;

# 124 "t1mc.c"

}
 
#line 23 "t1mc.mc"
int my_f2(void )  
# 130 "t1mc.c"
{
# 132 "t1mc.c"
int retValue_acc;




# 138 "t1mc.c"
{

#line 24 "t1mc.mc"
printf("Function \"my_f2\" has been called\n"); 
# 143 "t1mc.c"

}

# 147 "t1mc.c"
return (int )retValue_acc;

# 150 "t1mc.c"

}
 
#line 27 "t1mc.mc"
int f(void )  
# 156 "t1mc.c"
{
# 158 "t1mc.c"
int retValue_acc;




# 164 "t1mc.c"
{

#line 28 "t1mc.mc"
printf("Function \"f\" has been called\n"); 
# 169 "t1mc.c"

}

# 173 "t1mc.c"
return (int )retValue_acc;

# 176 "t1mc.c"

}
 
static inline int  call_f__t1mc__2 (struct s * my_s  )  ; 

static inline int  call_f__t1mc__1 (struct s * my_s  )  ; 

#line 31 "t1mc.mc"
int main(int argc, char *argv[])  
# 186 "t1mc.c"
{
# 188 "t1mc.c"
int retValue_acc;




# 194 "t1mc.c"
{

#line 32 "t1mc.mc"

#line 32 "t1mc.mc"
struct s my_s;
#line 33 "t1mc.mc"
my_s.f = (&my_f1); 
#line 34 "t1mc.mc"
call_f__t1mc__1((&my_s)); 
#line 35 "t1mc.mc"
my_s.f = (&my_f2); 
#line 36 "t1mc.mc"
call_f__t1mc__2((&my_s)); 
#line 37 "t1mc.mc"

# 211 "t1mc.c"
retValue_acc = 0;
# 213 "t1mc.c"
return (int )retValue_acc;
 
# 216 "t1mc.c"

}

# 220 "t1mc.c"
return (int )retValue_acc;

# 223 "t1mc.c"

}
  void __utac_acc__t1ac__2 (  struct JoinPoint * );

  int call_f (struct s * my_s  ) ; 

# 230 "t1mc.c"
static inline int  call_f__t1mc__2 (struct s * my_s  ) {

# 233 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
this.funcName = "main"; 
this.targetName = "call_f"; 
this.fileName = "t1mc.mc"; 
this.kind = "call"; 
 { 
__utac_acc__t1ac__2(&this );
 
 } 
 } 

# 247 "t1mc.c"
retValue_acc = call_f ( my_s ) ;  

# 250 "t1mc.c"
return (int )retValue_acc;
}
  void __utac_acc__t1ac__2 (  struct JoinPoint * );

  int call_f (struct s * my_s  ) ; 

# 257 "t1mc.c"
static inline int  call_f__t1mc__1 (struct s * my_s  ) {

# 260 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
this.funcName = "main"; 
this.targetName = "call_f"; 
this.fileName = "t1mc.mc"; 
this.kind = "call"; 
 { 
__utac_acc__t1ac__2(&this );
 
 } 
 } 

# 274 "t1mc.c"
retValue_acc = call_f ( my_s ) ;  

# 277 "t1mc.c"
return (int )retValue_acc;
}
 
