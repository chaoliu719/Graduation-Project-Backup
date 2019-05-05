
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


  void __utac_acc__t1ac__1 (int x ,int y  );


  void __utac_acc__t1ac__1 (int x ,int y  );


  void __utac_acc__t1ac__1 (int x ,int y  );


# 1 "t1mc.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "t1mc.c" 
int fct(int a)  
# 45 "t1mc.c"
{
# 47 "t1mc.c"
int retValue_acc;




# 53 "t1mc.c"
{

#line 3 "t1mc.c"
printf("In `fct'\n"); 
#line 5 "t1mc.c"
if (a > 3){

# 61 "t1mc.c"
retValue_acc = 100;
{
int __utac__ad__arg1 = retValue_acc ; 
int __utac__ad__arg2 = a ; 
__utac_acc__t1ac__1(__utac__ad__arg1 ,__utac__ad__arg2 );

}

# 70 "t1mc.c"
return (int )retValue_acc;
 }else{

# 74 "t1mc.c"
retValue_acc = 9;
{
int __utac__ad__arg1 = retValue_acc ; 
int __utac__ad__arg2 = a ; 
__utac_acc__t1ac__1(__utac__ad__arg1 ,__utac__ad__arg2 );

}

# 83 "t1mc.c"
return (int )retValue_acc;
 }
# 86 "t1mc.c"

}

{
int __utac__ad__arg1 = retValue_acc ; 
int __utac__ad__arg2 = a ; 
__utac_acc__t1ac__1(__utac__ad__arg1 ,__utac__ad__arg2 );

}

# 97 "t1mc.c"
return (int )retValue_acc;

# 100 "t1mc.c"

}
 
#line 12 "t1mc.c"
void fct2(int a)  
# 106 "t1mc.c"
{



# 111 "t1mc.c"
{

#line 13 "t1mc.c"
printf("In fct2\n"); 
#line 14 "t1mc.c"
return ; 
 
# 119 "t1mc.c"

}

# 123 "t1mc.c"

}
 
#line 17 "t1mc.c"
void fct3(int a)  
# 129 "t1mc.c"
{



# 134 "t1mc.c"
{

#line 18 "t1mc.c"
printf("in fct3\n"); 
# 139 "t1mc.c"

}

# 143 "t1mc.c"

}
 
static inline int  fct__t1mc__1 (int a  )  ; 

static inline int  fct__t1mc__0 (int a  )  ; 

#line 22 "t1mc.c"
int main()  
# 153 "t1mc.c"
{
# 155 "t1mc.c"
int retValue_acc;




# 161 "t1mc.c"
{

#line 23 "t1mc.c"

#line 23 "t1mc.c"
int i;
#line 25 "t1mc.c"
i = fct__t1mc__0(8); 
#line 27 "t1mc.c"
i = fct__t1mc__1(0); 
#line 29 "t1mc.c"
printf("Result from `fct' %i\n", i); 
#line 31 "t1mc.c"
fct2(2); 
#line 33 "t1mc.c"
fct3(24); 
#line 35 "t1mc.c"

# 180 "t1mc.c"
retValue_acc = 0;
# 182 "t1mc.c"
return (int )retValue_acc;
 
# 185 "t1mc.c"

}

# 189 "t1mc.c"
return (int )retValue_acc;

# 192 "t1mc.c"

}
  void __utac_acc__t1ac__2 (int x ,int y  );

  int fct (int a  ) ; 

# 199 "t1mc.c"
static inline int  fct__t1mc__1 (int a  ) {

# 202 "t1mc.c"
int retValue_acc;

# 205 "t1mc.c"
retValue_acc = fct ( a ) ;  

{
int __utac__ad__arg1 = retValue_acc ; 
int __utac__ad__arg2 = a ; 
__utac_acc__t1ac__2(__utac__ad__arg1 ,__utac__ad__arg2 );

}

# 215 "t1mc.c"
return (int )retValue_acc;
}
  void __utac_acc__t1ac__2 (int x ,int y  );

  int fct (int a  ) ; 

# 222 "t1mc.c"
static inline int  fct__t1mc__0 (int a  ) {

# 225 "t1mc.c"
int retValue_acc;

# 228 "t1mc.c"
retValue_acc = fct ( a ) ;  

{
int __utac__ad__arg1 = retValue_acc ; 
int __utac__ad__arg2 = a ; 
__utac_acc__t1ac__2(__utac__ad__arg1 ,__utac__ad__arg2 );

}

# 238 "t1mc.c"
return (int )retValue_acc;
}
 
