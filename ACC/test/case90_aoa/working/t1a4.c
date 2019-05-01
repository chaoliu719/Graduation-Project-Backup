

struct JoinPoint {void **(*fp)(struct JoinPoint *); void **args; int argsCount; const char **argsType; void *(*arg)(int , struct JoinPoint *); const char *(*argType)(int , struct JoinPoint *); void **retValue; const char *retType; const char *funcName; const char *targetName; const char *fileName; const char *kind; void *excep_return; 
}; 

struct __UTAC__EXCEPTION {void *jumpbuf; unsigned long long int prtValue; int pops; struct __UTAC__CFLOW_FUNC {int (*func)(int , int ); int val; struct __UTAC__CFLOW_FUNC *next; 
}*cflowfuncs; 
}; 

extern void __utac__exception__cf_handler_set(void *exception, int (*cflow_func)(int , int ), int val); 

extern void __utac__exception__cf_handler_free(void *exception); 

extern void __utac__exception__cf_handler_reset(void *exception); 

extern void *__utac__error_stack_mgt(void *env, int mode, int count); 
#line 2 "t1a4.acc"
extern void foo(); 
# 2 "t1a4.acc" 
# 3 "t1a4.acc" 
extern void foo1(); 
#line 4 "t1a4.acc"
extern void foo2(); 
  void __vtac_acc__t1a4__2 (  struct JoinPoint * );


  void foo3 () ; 
  void foo3utac__exec__ori () ; 
void ** foo3_utac__exec__wrapper_t1a4_c_aa_temp_src_0 (struct JoinPoint * this);  
 

# 33 "t1a4.c"
void ** foo3_utac__exec__wrapper_t1a4_c_aa_temp_src_0 (struct JoinPoint * this) { 
 
foo3utac__exec__ori ( ); 
return this->retValue; 
} 


# 4 "t1a4.acc" 
# 6 "t1a4.acc" 
void foo3()  
# 44 "t1a4.c"
{


 { 
 struct JoinPoint this; 
 void * __utac__args[0]; 
 const char * __utac__argstype[0];
this.argsCount = 0 ; 
 void * __utac__retp[1]; 
this.args = __utac__args; 
this.argsType = __utac__argstype; 
{ extern void * __utac__get_this_arg (int, struct JoinPoint *)  ; 
  extern const char * __utac__get_this_argtype (int, struct JoinPoint *)  ; 
this.arg = __utac__get_this_arg ; 
this.argType= __utac__get_this_argtype ; } 
this.fp = &(foo3_utac__exec__wrapper_t1a4_c_aa_temp_src_0);
this.retValue = __utac__retp ; 
this.retType ="void" ; 
 { 
__vtac_acc__t1a4__2(&this );
 
 } 
 } 


# 70 "t1a4.c"

}
 

# 75 "t1a4.c"
  void foo3utac__exec__ori () { 

#line 7 "t1a4.acc"
printf("foo3, in aspect file \n"); 
 } 
# 7 "t1a4.acc" 
# 12 "t1a4.acc" 
inline void __utac_acc__t1a4__1(void )  
# 84 "t1a4.c"
{



# 89 "t1a4.c"
{

#line 13 "t1a4.acc"
printf("aspect 1: before call foo\n"); 
# 13 "t1a4.acc" 
# 15 "t1a4.acc" 
printf("call foo2 inside aspect \n"); 
#line 16 "t1a4.acc"
foo2(); 
# 16 "t1a4.acc" 
# 18 "t1a4.acc" 
printf("call foo3 inside aspect \n"); 
#line 20 "t1a4.acc"
foo3(); 
# 104 "t1a4.c"

}

# 108 "t1a4.c"

}
 
# 20 "t1a4.acc" 
# 23 "t1a4.acc" 
inline void __utac_acc__t1a4__2(struct JoinPoint *this)  
# 115 "t1a4.c"
{



# 120 "t1a4.c"
{

#line 24 "t1a4.acc"
printf("aspect 2: around execution foo3, use proceed() to invoke the original one \n"); 
# 24 "t1a4.acc" 
# 26 "t1a4.acc" 
((this->fp)(this)); 
#line 28 "t1a4.acc"
printf("aspect 2: end \n"); 
# 130 "t1a4.c"

}

# 134 "t1a4.c"

}
 
 void __vtac_acc__t1a4__1(void) { 



#line 13 "t1a4.acc"
printf("aspect 1: before call foo\n"); 
#line 15 "t1a4.acc"
printf("call foo2 inside aspect \n"); 
#line 16 "t1a4.acc"
foo2(); 
#line 18 "t1a4.acc"
printf("call foo3 inside aspect \n"); 
#line 20 "t1a4.acc"
foo3(); }

 void __vtac_acc__t1a4__2(   struct JoinPoint *  this  )  {
 


#line 24 "t1a4.acc"
printf("aspect 2: around execution foo3, use proceed() to invoke the original one \n"); 
#line 26 "t1a4.acc"
(this->fp(this)); 
#line 28 "t1a4.acc"
printf("aspect 2: end \n"); }


