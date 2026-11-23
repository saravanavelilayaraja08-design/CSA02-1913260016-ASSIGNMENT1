#include <stdio.h>

#define RUPEES_TO_PAISE(r) ((long long)(r) * 100LL)
#define SQUARE(x) ((x) * (x))
#define MAX(a,b) (((a) > (b)) ? (a) : (b))

static inline int max_int(int a, int b) {
    return (a > b) ? a : b;
}

int main(void) {
    int a = 3;
    int b = 5;

    printf("Square = %d\n", SQUARE(a + 1));
    printf("Maximum = %d\n", max_int(a, b));
    printf("Rupees to paise = %lld\n",
           RUPEES_TO_PAISE(12));

    return 0;
}
