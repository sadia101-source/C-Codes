#include <stdio.h>

// Recursive function to print Fibonacci series up to N terms
void printFibonacci(int n, int a, int b) {
    if (n <= 0)  // Base case: if no terms left to print, stop recursion
        return;
    
    printf("%d ", a);
    
    // Recursive call for the next term, a becomes b, b becomes a + b
    printFibonacci(n - 1, b, a + b);
}

int main() {
    int N;

    printf("Enter the number of terms: ");
    scanf("%d", &N);

    printf("Fibonacci series up to %d terms: ", N);
    printFibonacci(N, 0, 1);

    return 0;
}

