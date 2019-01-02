#ifndef __TEST_DRIVER_H__
#define __TEST_DRIVER_H__

void run_test();

void check_printf(const char *fmt, ...) __attribute__((format(printf, 1, 2)));

#endif
