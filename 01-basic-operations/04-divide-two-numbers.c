#include <stdio.h>

int main() {
    double a, b;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    if (b != 0) {
        printf("Result = %.2lf\n", a / b);
    } else {
        printf("Division by zero is not possible.\n");
    }

    return 0;
}
