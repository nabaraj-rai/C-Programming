#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Recursive function to print Fibonacci series up to n terms
void printFibonacci(int n, int current) {
    if (current < n) {
        printf("%d ", fibonacci(current));
        printFibonacci(n, current + 1);
    }
}

int main() {
    int terms;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci series up to %d terms: ", terms);
    printFibonacci(terms, 0);
    printf("\n");

    return 0;
}
