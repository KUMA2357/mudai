#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("doble maximum:%g\n", DBL_MAX);
    printf("doble minimum:%g\n", DBL_MIN);
    printf("doble precision:%d\n", DBL_DIG);
    printf("int maximum:%d\n", INT_MAX);
    printf("int minimum:%d\n", INT_MIN);
    printf("doble maximum:%lf\n", DBL_MAX);
    printf("doble minimum:%lf\n", DBL_MIN);
    printf("long maximum:%ld\n", DBL_MAX);
    printf("long minimum:%li\n", DBL_MIN);
    printf("long long maximum:%lli\n", DBL_MAX);
    printf("long long minimum:%lld\n", DBL_MIN);
    return 0;
}