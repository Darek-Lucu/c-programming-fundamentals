#include <stdio.h>

int maximum(int a, int b);

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Maximum = %d\n", maximum(a, b));

    return 0;
}

int maximum(int a, int b) {
    if (a > b) {
        return a;
    }

    return b;
}
