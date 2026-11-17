#include <stdio.h>

int main() {
    int number, digit, reversed = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number = number / 10;
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
