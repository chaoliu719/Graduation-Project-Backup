
#line 2 "t1mc.mc"
const  __attribute__  (( aligned ( 2 )  )) volatile int var1; 
#line 4 "t1mc.mc"
 __attribute__  (( aligned ( 2 )  )) const int var2; 
#line 6 "t1mc.mc"
int var3,var4,var5 __attribute__  (( aligned ( 4 )  )) ; 
#line 8 "t1mc.mc"
int var6 __attribute__  (( aligned ( 4 )  )) ; 
#line 10 "t1mc.mc"
int var7 __attribute__  (( aligned ( 4 )  )) ,var8; 
#line 12 "t1mc.mc"
int var9, __attribute__  (( aligned ( 4 )  )) var10; 
#line 14 "t1mc.mc"
int var11 __attribute__  (( aligned ( 4 )  )) , __attribute__  (( aligned ( 8 )  )) var12; 
#line 16 "t1mc.mc"
enum  __attribute__  (( packed )) {E1,E2}; 
#line 18 "t1mc.mc"
enum  __attribute__  (( packed )) EX {E3,E4}; 
#line 20 "t1mc.mc"
enum  __attribute__  (( packed )) EX var13; 
#line 22 "t1mc.mc"
enum {E5,E6} __attribute__  (( packed )) ; 
#line 24 "t1mc.mc"
enum EX2 {E7,E8} __attribute__  (( packed )) ; 
#line 27 "t1mc.mc"
int var14 __attribute__  (( packed ))  = 4; 
#line 30 "t1mc.mc"
int main()  {

#line 32 "t1mc.mc"
 __asm__ ("kkk kkekre"); 
#line 34 "t1mc.mc"
__builtin_offsetof (int  , a); }
 
#line 38 "t1mc.mc"
typedef char ( __attribute__  (( cdecl )) *foo1)(); 
#line 39 "t1mc.mc"
typedef char ( __attribute__  (( cdecl )) foo2)(); 
#line 41 "t1mc.mc"
char (*foo3)(); 
#line 42 "t1mc.mc"
char ( __attribute__  (( cdecl )) *foo4)(); 
#line 43 "t1mc.mc"
char ( __attribute__  (( cdecl )) *foo5)(); 
#line 44 "t1mc.mc"
char ( __attribute__  (( cdecl )) foo6)(); 
#line 50 "t1mc.mc"
typedef void ( __attribute__  (( cdecl )) *XML_ElementDeclHandler)(void *userData, const char name, const char *model); 
#line 55 "t1mc.mc"
typedef struct {int ( __attribute__  (( cdecl )) *convert)(void *data, const char *s); void ( __attribute__  (( cdecl )) *release)(void *data); }XML_Encoding; 
#line 60 "t1mc.mc"
typedef struct X {const char **paramNames_apvc; }X_t; 
#line 68 "t1mc.mc"
 X_t X_a[1] = {{.paramNames_apvc = (const char *([0])){}}}; 
