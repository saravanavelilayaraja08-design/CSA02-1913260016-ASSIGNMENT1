#include <stdio.h>
#include <stdint.h>

typedef uint16_t meter_t;
typedef int64_t money_t;

#define FREE_UNITS 100U
#define MID_LIMIT 200U

#define MID_RATE 225LL
#define HIGH_RATE 450LL

#define FIXED_PAISE 5000LL

uint32_t consumption(meter_t previous,
                     meter_t current) {
    return (uint16_t)(current - previous);
}

money_t compute_bill(uint32_t units) {
    money_t paise = FIXED_PAISE;

    if (units > FREE_UNITS) {
        uint32_t mid =
            (units < MID_LIMIT ? units : MID_LIMIT)
            - FREE_UNITS;

        paise += (money_t)mid * MID_RATE;
    }

    if (units > MID_LIMIT) {
        paise += (money_t)(units - MID_LIMIT)
                 * HIGH_RATE;
    }

    return paise;
}

int main(void) {
    meter_t previous = 1200;
    meter_t current = 1350;

    uint32_t units = consumption(previous, current);
    money_t bill = compute_bill(units);

    printf("Units consumed: %u\n", units);

    printf("Total bill: Rs %lld.%02lld\n",
           (long long)(bill / 100),
           (long long)(bill % 100));

    return 0;
}
