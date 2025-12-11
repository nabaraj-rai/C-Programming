#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nEven numbers up to %d:\n", n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\n\nSum of even numbers = %d\n", sum);

    return 0;
}
