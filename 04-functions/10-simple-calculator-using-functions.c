#include <stdio.h>

double calculate(double a, double b, char operation);

int main() {
    double a, b;
    char operation;

    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    if (operation == '/' && b == 0) {
        printf("Division by zero is not possible.\n");
    } else if (operation == '+' || operation == '-' ||
               operation == '*' || operation == '/') {
        printf("Result = %.2lf\n", calculate(a, b, operation));
    } else {
        printf("Unknown operation.\n");
    }

    return 0;
}

double calculate(double a, double b, char operation) {
    switch (operation) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }

    return 0;
}
