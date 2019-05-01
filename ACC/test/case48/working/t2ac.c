
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

extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val) ; 
extern void __utac__exception__cf_handler_free(void * exception);
extern void __utac__exception__cf_handler_reset(void * exception) ; 
extern void * __utac__error_stack_mgt(void * env , int mode, int count) ;



# 1 "t2ac_ac.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 3 "t2ac_ac.c" 
 inline int __utac_acc__t2ac__1(int x , struct JoinPoint *  this  )  {
 


#line 4 "t2ac_ac.c"
printf("aspect 1\n"); 
#line 5 "t2ac_ac.c"
if (x < 3){
{ 
#line 6 "t2ac_ac.c"
printf("a < 3\n"); 
#line 7 "t2ac_ac.c"
return 33; } }else{
{ 
#line 9 "t2ac_ac.c"
return (** (int **)(this->fp(this)) ) ; } }}

 


#line 14 "t2ac_ac.c"
 inline int __utac_acc__t2ac__2(int x , struct JoinPoint *  this  )  {
 


#line 15 "t2ac_ac.c"
printf("aspect 2, has proceed, args = %d \n", x); 
#line 16 "t2ac_ac.c"
return (** (int **)(this->fp(this)) ) ; }

 


#line 20 "t2ac_ac.c"
 inline int __utac_acc__t2ac__3(int x , struct JoinPoint *  this  )  {
 


#line 21 "t2ac_ac.c"
printf("aspect 3\n"); 
#line 22 "t2ac_ac.c"
if (x < 20){
{ 
#line 23 "t2ac_ac.c"
printf("a < 20\n"); 
#line 24 "t2ac_ac.c"
return 2020; } }else{
{ 
#line 26 "t2ac_ac.c"
return (** (int **)(this->fp(this)) ) ; } }}

 

 int __utac__cflow_t2ac_0 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 


