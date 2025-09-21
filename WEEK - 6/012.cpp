#include <stdio.h>

int main() {
    int number, originalNumber, reverse = 0, digit;

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;  // Store the original number for comparison

    // Process each digit to reverse the number
    while (number > 0) {
        digit = number % 10;  // Extract the last digit
        reverse = reverse * 10 + digit;  // Update reverse
        number /= 10;  // Remove the last digit
    }

    // Check if the original number is equal to its reverse
    if (originalNumber == reverse) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }

    return 0;
}

