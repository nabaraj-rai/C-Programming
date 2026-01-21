#include <stdio.h>

// Recursive function to calculate the sum of first n natural numbers
int sumNaturalNumbers(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sumNaturalNumbers(n - 1);
    }
}

int main() {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    printf("Sum of first %d natural numbers is: %d\n", n, sumNaturalNumbers(n));

    return 0;
}
