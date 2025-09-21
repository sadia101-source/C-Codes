#include <stdio.h>

// Function to print Fibonacci series
void printFibonacci(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int number;
    printf("Enter the number of terms: ");
    scanf("%d", &number);
    printFibonacci(number);
    return 0;
}

