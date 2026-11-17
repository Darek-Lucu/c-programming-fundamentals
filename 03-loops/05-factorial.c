#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter an integer between 0 and 20: ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Number out of range.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial = factorial * i;
        }

        printf("%d! = %llu\n", n, factorial);
    }

    return 0;
}
