#include <stdio.h>
#include "tariff.h"

long compute_bill(int units) {
    long paise = FIXED_CHARGE_PAISE;

    if (units > 100) {
        int n = units - 100;

        if (n > 100) {
            paise += 100L * 225 + (long)(n - 100) * 450;
        } else {
            paise += (long)n * 225;
        }
    }

#ifdef DEBUG
    printf("Debug: Units = %d\n", units);
    printf("Debug: Bill = %ld paise\n", paise);
#endif

    return paise;
}
