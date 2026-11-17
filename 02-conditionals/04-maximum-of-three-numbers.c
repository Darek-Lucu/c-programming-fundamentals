#include <stdio.h>

int main() {
    int a, b, c, maximum;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    maximum = a;

    if (b > maximum) {
        maximum = b;
    }

    if (c > maximum) {
        maximum = c;
    }

    printf("Maximum = %d\n", maximum);

    return 0;
}
