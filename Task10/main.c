#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    printf("Integer size: %zu bytes\n", sizeof(int));
    printf("Long size: %zu bytes\n", sizeof(long));
    printf("Long long size: %zu bytes\n",
           sizeof(long long));

    printf("INT_MAX = %d\n", INT_MAX);
    printf("LONG_MAX = %ld\n", LONG_MAX);
    printf("LLONG_MAX = %lld\n", LLONG_MAX);

    printf("FLT_DIG = %d\n", FLT_DIG);
    printf("DBL_DIG = %d\n", DBL_DIG);

    return 0;
}
