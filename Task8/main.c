#include <stdio.h>

#define FIXED_CHARGE 5000

int main(void) {
    int units = 150;

    long bill = FIXED_CHARGE;

    if (units > 100) {
        bill += (long)(units - 100) * 225;
    }

    printf("Units = %d\n", units);

    printf("Bill = Rs %ld.%02ld\n",
           bill / 100, bill % 100);

    return 0;
}
