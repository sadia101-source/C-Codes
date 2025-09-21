#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("%d is %s prime number.\n", number, isPrime(number) ? "a" : "not a");
    
    return 0;
}

