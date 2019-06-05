#include <stdio.h>
#include <math.h>

size_t lines = 0;
size_t compare_cnt = 0;

void __inc_compare_cnt()
{
    compare_cnt++;
}


void __cal_total_lines(size_t count)
{
    lines = count;
}

void __cal_rate()
{
    double x = (double)compare_cnt;
    double n = (double)lines;

    if (n == 0)
    {   
        return;
    }

    double lgn = log2(n);
    double r = 100.0 - (x - n * lgn) * 100 / (n * (n - lgn));

    // 效率: nlgn = 100%, n^2 = 0%
    fprintf(stderr, "效率[%.3f], compare[%ld], nlgn[%ld], n^2[%ld]\n", r, compare_cnt, (size_t)(n * lgn), lines * lines);
}