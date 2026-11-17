#include <stdio.h>

int main() {
    double a, b, c;

    printf("Enter the three side lengths: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 &&
        a + b > c && a + c > b && b + c > a) {
        printf("The sides can form a triangle.\n");
    } else {
        printf("The sides cannot form a triangle.\n");
    }

    return 0;
}
