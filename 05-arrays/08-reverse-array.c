#include <stdio.h>

int main() {
    int numbers[100];
    int n, i, temp;

    printf("How many elements? ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Please enter a number between 1 and 100.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < n / 2; i++) {
        temp = numbers[i];
        numbers[i] = numbers[n - 1 - i];
        numbers[n - 1 - i] = temp;
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");
    return 0;
}
