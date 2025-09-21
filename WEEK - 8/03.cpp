#include <stdio.h>

unsigned long long factorial(int n) {
    if (n < 0) {
        return 0;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main() {
    int number;
    // Get user input
    printf("Enter a non-negative integer to find its factorial: ");
    scanf("%d", &number);
    // Calculate and display factorial
    unsigned long long fact = factorial(number);
    
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("The factorial of %d is %llu.\n", number, fact);
    }

    return 0;
}

