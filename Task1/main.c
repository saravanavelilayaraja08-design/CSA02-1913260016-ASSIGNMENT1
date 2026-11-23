#include <stdio.h>

typedef unsigned short meter_t;
typedef long long money_t;

typedef struct {
    unsigned long long household_id;
    meter_t previous;
    meter_t current;
    unsigned int units;
    money_t energy_paise;
    money_t fixed_paise;
    money_t total_paise;
    int category;
} Bill;

int main(void) {
    printf("Electricity Billing Data Structure\n");
    printf("Meter size: %zu bytes\n", sizeof(meter_t));
    printf("Money size: %zu bytes\n", sizeof(money_t));
    return 0;
}
