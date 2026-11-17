#include <stdio.h>

unsigned long long factorial(int n);

int main() {
    int n;

    printf("Enter an integer between 0 and 20: ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Number out of range.\n");
    } else {
        printf("Factorial = %llu\n", factorial(n));
    }

    return 0;
}

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    int i;

    for (i = 1; i <= n; i++) {
        result = result * i;
    }

    return result;
}
