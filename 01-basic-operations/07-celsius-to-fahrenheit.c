#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    printf("Temperature in Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = celsius * 9 / 5 + 32;

    printf("Temperature in Fahrenheit = %.2lf\n", fahrenheit);

    return 0;
}
