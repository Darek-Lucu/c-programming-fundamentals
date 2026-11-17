#include <stdio.h>

int main() {
    int numbers[100];
    int n, i, count = 0;

    printf("How many elements? ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Please enter a number between 1 and 100.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);

        if (numbers[i] > 0) {
            count++;
        }
    }

    printf("Positive elements = %d\n", count);

    return 0;
}
