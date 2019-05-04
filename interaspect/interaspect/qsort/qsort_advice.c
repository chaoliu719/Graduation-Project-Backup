#include <stdio.h>
#include <math.h>

int lines = 0;
int compare_cnt = 0;

void __inc_compare_cnt()
{
    compare_cnt++;
}


void __cal_total_lines(int count)
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
    fprintf(stderr, "效率[%.3f\%], 比较次数[%d], 总数[%d]\n", r, compare_cnt, lines);
}