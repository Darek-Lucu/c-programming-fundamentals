#include <stdio.h>

int main() {
    const double PI = 3.14159;
    double radius, area, circumference;

    printf("Enter circle radius: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area = %.2lf\n", area);
    printf("Circumference = %.2lf\n", circumference);

    return 0;
}
