#include <stdio.h>

#define MODULUS 65536U
#define RATE2 225LL
#define RATE3 450LL
#define FIXED 5000LL

unsigned int consumption(unsigned int previous,
                         unsigned int current) {
    return (current - previous) % MODULUS;
}

long long compute_bill(unsigned int units) {
    long long paise = FIXED;

    if (units > 100) {
        unsigned int n = units - 100;

        if (n > 100) {
            paise += 100 * RATE2;
            paise += (long long)(n - 100) * RATE3;
        } else {
            paise += (long long)n * RATE2;
        }
    }

    return paise;
}

int main(void) {
    unsigned int previous, current;

    printf("Enter previous reading: ");
    if (scanf("%u", &previous) != 1 || previous > 65535) {
        printf("Invalid reading\n");
        return 1;
    }

    printf("Enter current reading: ");
    if (scanf("%u", &current) != 1 || current > 65535) {
        printf("Invalid reading\n");
        return 1;
    }

    unsigned int units = consumption(previous, current);
    long long bill = compute_bill(units);

    printf("Units consumed: %u\n", units);

    printf("Total bill: Rs %lld.%02lld\n",
           bill / 100, bill % 100);

    return 0;
}
