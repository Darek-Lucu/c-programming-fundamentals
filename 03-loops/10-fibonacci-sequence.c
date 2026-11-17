#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    printf("How many terms do you want? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a positive number of terms.\n");
    } else {
        for (i = 1; i <= n; i++) {
            printf("%d ", first);
            next = first + second;
            first = second;
            second = next;
        }
        printf("\n");
    }

    return 0;
}
