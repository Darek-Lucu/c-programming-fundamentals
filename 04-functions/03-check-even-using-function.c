#include <stdio.h>

int isEven(int number);

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isEven(number)) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}

int isEven(int number) {
    return number % 2 == 0;
}
