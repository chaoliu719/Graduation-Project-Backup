#include <inttypes.h>
#include <stdio.h>

void s8(int8_t n)
{
  printf("int8: %d\n", (int)n);
}

void s16(int16_t n)
{
  printf("int16: %d\n", (int)n);
}

void s32(int32_t n)
{
  printf("int32: %d\n", (int)n);
}

void s64(int64_t n)
{
  printf("int64: %lld\n", (long long)n);
}

void s128(__int128_t n)
{
  printf("int128: %lld\n", (long long)n);
}

void u8(uint8_t n)
{
  printf("uint8: %u\n", (unsigned int)n);
}

void u16(uint16_t n)
{
  printf("uint16: %u\n", (unsigned int)n);
}

void u32(uint32_t n)
{
  printf("uint32: %u\n", (unsigned int)n);
}

void u64(uint64_t n)
{
  printf("uint64: %llu\n", (long long unsigned)n);
}

void u128(__uint128_t n)
{
  printf("uint128: %lld\n", (long long unsigned)n);
}

void run_test()
{
  s8((int8_t)114);
  s16((int16_t)347);
  s32((int32_t)1000000001);
  s64((int64_t)123456789123456789);
  s128(((__int128_t)1 << 106) + 1);

  u8((uint8_t)114);
  u16((uint16_t)347);
  u32(1000000001);
  u64(9300000000000000000UL);
  u128(((__uint128_t)1 << 106) + 1);
}
