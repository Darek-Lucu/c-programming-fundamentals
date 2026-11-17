#include <stdio.h>

int main() {
    int numbers[100];
    int n, i;

    printf("How many elements? ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Please enter a number between 1 and 100.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("numbers[%d] = ", i);
        scanf("%d", &numbers[i]);
    }

    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");
    return 0;
}
