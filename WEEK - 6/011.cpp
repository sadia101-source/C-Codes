#include <stdio.h>

int main() {
    int number, digit1, digit2, digit3, sum;

    printf("Armstrong numbers between 0 and 999 are:\n");

    // Loop through all numbers from 0 to 999
    for (number = 0; number <= 999; number++) {
        // Extract digits
        digit1 = number / 100;        // Hundreds place
        digit2 = (number / 10) % 10;  // Tens place
        digit3 = number % 10;         // Ones place

        // Calculate the sum of cubes of digits
        sum = digit1 * digit1 * digit1 + digit2 * digit2 * digit2 + digit3 * digit3 * digit3;

        // Check if the sum of cubes equals the number itself
        if (sum == number) {
            printf("%d\n", number);  // Print Armstrong number
        }
    }

    return 0;
}

