#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)  // Base case: factorial of 0 or 1 is 1
        return 1;
    else
        return n * factorial(n - 1);  // Recursive step
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Check for negative input
    if (number < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("Factorial of %d is %d\n", number, factorial(number));

    return 0;
}

