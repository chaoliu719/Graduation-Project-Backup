#include <inttypes.h>
#include <stdio.h>

void _advice_signed(const char *func, long long n1, long long n2)
{
  printf("In SIGNED function %s (%lld, %lld)\n", func, n1, n2);
}

void _advice_unsigned(const char *func, long long unsigned n1, long long unsigned n2)
{
  printf("In UNSIGNED function %s (%llu, %llu)\n", func, n1, n2);
}

void _advice_signed8(const char *func, int8_t n1, int8_t n2)
{
  printf("In INT8 function %s (%d, %d)\n", func, n1, n2);
}

void _advice_signed16(const char *func, int16_t n1, int16_t n2)
{
  printf("In INT16 function %s (%d, %d)\n", func, n1, n2);
}

void _advice_signed32(const char *func, int32_t n1, int32_t n2)
{
  printf("In INT32 function %s (%d, %d)\n", func, n1, n2);
}

void _advice_signed64(const char *func, int64_t n1, int64_t n2)
{
  printf("In INT64 function %s (%lld, %lld)\n", func, (long long)n1, (long long)n2);
}

void _advice_signed128(const char *func, __int128_t n1, __int128_t n2)
{
  printf("In INT128 function %s (%lld, %lld)\n", func, (long long)n1, (long long)n2);
}

void _advice_unsigned8(const char *func, uint8_t n1, uint8_t n2)
{
  printf("In UINT8 function %s (%d, %d)\n", func, n1, n2);
}

void _advice_unsigned16(const char *func, uint16_t n1, uint16_t n2)
{
  printf("In UINT16 function %s (%d, %d)\n", func, n1, n2);
}

void _advice_unsigned32(const char *func, uint32_t n1, uint32_t n2)
{
  printf("In UINT32 function %s (%d, %d)\n", func, n1, n2);
}

void _advice_unsigned64(const char *func, uint64_t n1, uint64_t n2)
{
  printf("In UINT64 function %s (%lld, %lld)\n", func, (long long unsigned)n1, (long long unsigned)n2);
}

void _advice_unsigned128(const char *func, __uint128_t n1, __uint128_t n2)
{
  printf("In UINT128 function %s (%lld, %lld)\n", func, (long long unsigned)n1, (long long unsigned)n2);
}
