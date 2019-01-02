#include <stdint.h>
#include <stdio.h>

void _foo_advice(const char *str1, int32_t int1, double double1, void *voidp1, const char *str2)
{
  printf("In advice: %s, %d, %f, %p, %s\n", str1, int1, double1, voidp1, str2);
}
