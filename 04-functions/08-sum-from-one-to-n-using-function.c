#include <stdio.h>

int sumToN(int n);

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Enter a positive integer.\n");
    } else {
        printf("Sum = %d\n", sumToN(n));
    }

    return 0;
}

int sumToN(int n) {
    int i, sum = 0;

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    return sum;
}
