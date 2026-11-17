#include <stdio.h>

int main() {
    double length, width, area, perimeter;

    printf("Enter length and width: ");
    scanf("%lf %lf", &length, &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area = %.2lf\n", area);
    printf("Perimeter = %.2lf\n", perimeter);

    return 0;
}
