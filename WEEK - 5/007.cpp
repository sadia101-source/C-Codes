#include <stdio.h>

int main() {
    char character;

    // Ask the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &character);

    // Display the ASCII value of the entered character
    printf("The ASCII value of '%c' is: %d\n", character, character);

    return 0;
}

