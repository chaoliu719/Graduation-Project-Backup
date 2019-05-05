# 1 "b-bug.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "b-bug.c"
# 11 "b-bug.c"
int fct(int a){

  printf("In `fct'\n");

  if (a < 10)
    return 100;
  else
    return 400;
}

int main(){
  int i;

  i = fct(8);
  printf("Result from `fct' %i\n", i);
  return 0;
}
