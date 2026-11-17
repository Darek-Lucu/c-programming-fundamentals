#include <stdio.h>

int main() {
    double a, b, average;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    average = (a + b) / 2;

    printf("Average = %.2lf\n", average);

    return 0;
}
