#include <stdio.h>

void binary32(float n)
{
  printf("single:\t%.20f\n", (double)n);
}

void binary64(double n)
{
  printf("double:\t%.20f\n", n);
}

void binary128(long double n)
{
  printf("quad:\t%.20Lf\n", n);
}

void run_test()
{
  binary32((float)1/3);
  binary64((double)1/3);
  binary128((long double)1/3);
}
