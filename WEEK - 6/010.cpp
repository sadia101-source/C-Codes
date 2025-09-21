#include <stdio.h>

int main() {
    int number, sum = 0, reverse = 0, digit;

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    int originalNumber = number;  // Store the original number for display later

    // Process each digit of the number
    while (number > 0) {
        digit = number % 10;  // Extract the last digit
        sum += digit;         // Add the digit to the sum
        reverse = reverse * 10 + digit;  // Append the digit to reverse the number
        number /= 10;         // Remove the last digit
    }

    // Output the results
    printf("Reversed number: %d\n", reverse);
    printf("Sum of digits: %d\n", sum);

    return 0;
}

