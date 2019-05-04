#include <stdio.h>
#include <stdint.h>

void __have_int_param(int a)
{

}

void __have_uint_param(unsigned int a)
{

}

int _distrib(const char *function_name, int64_t int_param)
{
    printf("%s: funcname[%s], int_param[%d]", function_name, int_param);
    return int_param > 0;
}

int main()
{
    __have_int_param(1);
    __have_int_param(0);
    __have_uint_param(1);
    __have_uint_param(0);
    return 0;
}