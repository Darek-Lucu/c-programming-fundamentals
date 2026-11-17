#include <stdio.h>

int main() {
    int a, b, difference;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    difference = a - b;

    printf("Difference = %d\n", difference);

    return 0;
}
