#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n > 1) {
        n = n / 2;
        count++;
    }

    printf("The number can be divided by 2 exactly %d times before it becomes less that or equal to 1.\n", count);

    return 0;
}
