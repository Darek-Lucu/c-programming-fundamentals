#include <stdio.h>

int main() {
    int numbers[100];
    int n, i, value, found = 0;

    printf("How many elements? ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Please enter a number between 1 and 100.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Enter the value to search for: ");
    scanf("%d", &value);

    for (i = 0; i < n; i++) {
        if (numbers[i] == value) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Value found at position %d.\n", i + 1);
    } else {
        printf("Value not found.\n");
    }

    return 0;
}
