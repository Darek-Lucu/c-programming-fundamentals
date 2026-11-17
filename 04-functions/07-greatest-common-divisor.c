#include <stdio.h>

int gcd(int a, int b);

int main() {
    int a, b;

    printf("Enter two non-negative integers: ");
    scanf("%d %d", &a, &b);

    if (a < 0 || b < 0 || (a == 0 && b == 0)) {
        printf("Please enter valid values (not both zero).\n");
    } else {
        printf("GCD = %d\n", gcd(a, b));
    }

    return 0;
}

int gcd(int a, int b) {
    int remainder;

    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}
