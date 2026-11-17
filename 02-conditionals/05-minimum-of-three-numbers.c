#include <stdio.h>

int main() {
    int a, b, c, minimum;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    minimum = a;

    if (b < minimum) {
        minimum = b;
    }

    if (c < minimum) {
        minimum = c;
    }

    printf("Minimum = %d\n", minimum);

    return 0;
}
