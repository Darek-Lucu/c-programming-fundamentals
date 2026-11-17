#include <stdio.h>

int main() {
    int numbers[100];
    int n, i, minimum;

    printf("How many elements? ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Please enter a number between 1 and 100.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    minimum = numbers[0];

    for (i = 1; i < n; i++) {
        if (numbers[i] < minimum) {
            minimum = numbers[i];
        }
    }

    printf("Minimum = %d\n", minimum);

    return 0;
}
