#include <stdio.h>

int main() {
    char alphabet;

    // Ask the user to enter an alphabet
    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);

    // Check if the input is an alphabet
    if ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z')) {
        // Check if the alphabet is a vowel
        if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' ||
            alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U') {
            printf("%c is a vowel.\n", alphabet);
        } else {
            printf("%c is a consonant.\n", alphabet);
        }
    } else {
        printf("Invalid input! Please enter an alphabet.\n");
    }

    return 0;
}

