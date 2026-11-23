#include <stdio.h>
#include <stdint.h>

int main(void) {
    unsigned long long watt_hours;
    int peak;

    int64_t base_rate = 225;
    int64_t numerator;
    int64_t charge;

    printf("Enter energy in watt-hours: ");

    if (scanf("%llu", &watt_hours) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    printf("Is it peak time? (1 = Yes, 0 = No): ");

    if (scanf("%d", &peak) != 1 ||
        (peak != 0 && peak != 1)) {
        printf("Invalid input\n");
        return 1;
    }

    /* Convert watt-hours to paise */
    numerator = (int64_t)watt_hours * base_rate;

    /* Apply 20 percent peak charge */
    if (peak == 1) {
        numerator = numerator * 120 / 100;
    }

    /* Round to nearest paise */
    charge = (numerator + 500) / 1000;

    printf("Energy charge: %lld paise\n",
           (long long)charge);

    printf("Total bill: Rs %lld.%02lld\n",
           (long long)(charge / 100),
           (long long)(charge % 100));

    return 0;
}
