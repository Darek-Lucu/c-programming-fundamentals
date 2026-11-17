#include <stdio.h>

int main() {
    double a, b;
    char operation;

    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (operation) {
        case '+':
            printf("Result = %.2lf\n", a + b);
            break;
        case '-':
            printf("Result = %.2lf\n", a - b);
            break;
        case '*':
            printf("Result = %.2lf\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Result = %.2lf\n", a / b);
            } else {
                printf("Division by zero is not possible.\n");
            }
            break;
        default:
            printf("Unknown operation.\n");
    }

    return 0;
}
