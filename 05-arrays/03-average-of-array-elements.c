#include <stdio.h>

int main() {
    int numbers[100];
    int n, i, sum = 0;

    printf("How many elements? ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Please enter a number between 1 and 100.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum = sum + numbers[i];
    }

    printf("Average = %.2f\n", (double)sum / n);

    return 0;
}
