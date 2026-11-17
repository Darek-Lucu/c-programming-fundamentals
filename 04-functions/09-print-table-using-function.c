#include <stdio.h>

void printTable(int number);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printTable(number);

    return 0;
}

void printTable(int number) {
    int i;

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}
