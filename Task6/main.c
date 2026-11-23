#include <stdio.h>

int main(void) {
    int units;
    long bill_paise = 16250;

    printf("Enter units: ");

    if (scanf("%d", &units) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    printf("Units = %d\n", units);

    printf("Bill = Rs %ld.%02ld\n",
           bill_paise / 100,
           bill_paise % 100);

    return 0;
}
