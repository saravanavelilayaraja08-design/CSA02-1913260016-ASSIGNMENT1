#include <stdio.h>
#include "tariff.h"

int main(void) {
    int units = 150;

    long bill = compute_bill(units);

    printf("Units consumed: %d\n", units);
    printf("Total bill: Rs %ld.%02ld\n",
           bill / 100, bill % 100);

    return 0;
}
