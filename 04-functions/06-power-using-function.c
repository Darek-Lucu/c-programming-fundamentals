#include <stdio.h>

long long power(int base, int exponent);

int main() {
    int base, exponent;

    printf("Enter base and non-negative exponent: ");
    scanf("%d %d", &base, &exponent);

    if (exponent < 0) {
        printf("The exponent must be non-negative.\n");
    } else {
        printf("Result = %lld\n", power(base, exponent));
    }

    return 0;
}

long long power(int base, int exponent) {
    long long result = 1;
    int i;

    for (i = 1; i <= exponent; i++) {
        result = result * base;
    }

    return result;
}
