#include <stdio.h>

int main() {
    int grade;

    printf("Enter your grade (1-10): ");
    scanf("%d", &grade);

    if (grade < 1 || grade > 10) {
        printf("Invalid grade.\n");
    } else if (grade >= 5) {
        printf("Passed.\n");
    } else {
        printf("Failed.\n");
    }

    return 0;
}
