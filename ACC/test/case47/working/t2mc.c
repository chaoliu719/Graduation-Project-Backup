
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


  void __utac_acc__t2ac__1 (  struct JoinPoint * );


  void foo () ; 
  void fooutac__exec__ori () ; 
void ** foo_utac__exec__wrapper_t2mc_7 (struct JoinPoint * this);  
 

# 39 "t2mc.c"
void ** foo_utac__exec__wrapper_t2mc_7 (struct JoinPoint * this) { 
 
fooutac__exec__ori ( ); 
return this->retValue; 
} 
void ** foo_utac__exec__wrapper_t2mc_6 (struct JoinPoint * this);  
 
  void __utac_acc__t2ac__8 (  struct JoinPoint * );

void ** foo_utac__exec__wrapper_t2mc_6 (struct JoinPoint * this) { 
 
this->fp = &( foo_utac__exec__wrapper_t2mc_7 ) ; 
__utac_acc__t2ac__8( this  ); 
 return this->retValue; 
  }  
void ** foo_utac__exec__wrapper_t2mc_5 (struct JoinPoint * this);  
 
  void __utac_acc__t2ac__7 (  struct JoinPoint * );

void ** foo_utac__exec__wrapper_t2mc_5 (struct JoinPoint * this) { 
 
this->fp = &( foo_utac__exec__wrapper_t2mc_6 ) ; 
__utac_acc__t2ac__7( this  ); 
 return this->retValue; 
  }  
void ** foo_utac__exec__wrapper_t2mc_4 (struct JoinPoint * this);  
 
  void __utac_acc__t2ac__6 (  struct JoinPoint * );

void ** foo_utac__exec__wrapper_t2mc_4 (struct JoinPoint * this) { 
 
this->fp = &( foo_utac__exec__wrapper_t2mc_5 ) ; 
__utac_acc__t2ac__6( this  ); 
 return this->retValue; 
  }  
void ** foo_utac__exec__wrapper_t2mc_3 (struct JoinPoint * this);  
 
  void __utac_acc__t2ac__5 (  struct JoinPoint * );

void ** foo_utac__exec__wrapper_t2mc_3 (struct JoinPoint * this) { 
 
this->fp = &( foo_utac__exec__wrapper_t2mc_4 ) ; 
__utac_acc__t2ac__5( this  ); 
 return this->retValue; 
  }  
void ** foo_utac__exec__wrapper_t2mc_2 (struct JoinPoint * this);  
 
  void __utac_acc__t2ac__4 (  struct JoinPoint * );

void ** foo_utac__exec__wrapper_t2mc_2 (struct JoinPoint * this) { 
 
this->fp = &( foo_utac__exec__wrapper_t2mc_3 ) ; 
__utac_acc__t2ac__4( this  ); 
 return this->retValue; 
  }  
void ** foo_utac__exec__wrapper_t2mc_1 (struct JoinPoint * this);  
 
  void __utac_acc__t2ac__3 (  struct JoinPoint * );

void ** foo_utac__exec__wrapper_t2mc_1 (struct JoinPoint * this) { 
 
this->fp = &( foo_utac__exec__wrapper_t2mc_2 ) ; 
__utac_acc__t2ac__3( this  ); 
 return this->retValue; 
  }  
void ** foo_utac__exec__wrapper_t2mc_0 (struct JoinPoint * this);  
 
  void __utac_acc__t2ac__2 (  struct JoinPoint * );

void ** foo_utac__exec__wrapper_t2mc_0 (struct JoinPoint * this) { 
 
this->fp = &( foo_utac__exec__wrapper_t2mc_1 ) ; 
__utac_acc__t2ac__2( this  ); 
 return this->retValue; 
  }  


# 1 "t2mc_mc.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 2 "t2mc_mc.c" 
void foo()  
# 122 "t2mc.c"
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
this.fp = &(foo_utac__exec__wrapper_t2mc_0);
this.retValue = __utac__retp ; 
this.retType ="void" ; 
 { 
__utac_acc__t2ac__1(&this );
 
 } 
 } 


# 148 "t2mc.c"

}
 

# 153 "t2mc.c"
  void fooutac__exec__ori () { 

#line 3 "t2mc_mc.c"
printf("in foo\n"); 
 } 
#line 6 "t2mc_mc.c"
int main()  
# 161 "t2mc.c"
{
# 163 "t2mc.c"
int retValue_acc;




# 169 "t2mc.c"
{

#line 7 "t2mc_mc.c"
foo(); 
#line 8 "t2mc_mc.c"

# 176 "t2mc.c"
retValue_acc = 0;
# 178 "t2mc.c"
return (int )retValue_acc;
 
# 181 "t2mc.c"

}

# 185 "t2mc.c"
return (int )retValue_acc;

# 188 "t2mc.c"

}
 
