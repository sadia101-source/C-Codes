#include <stdio.h>
#include <ctype.h>  //for toupper() and tolower() functions

// function to convert upper case to lower and lower case to upper
void convertCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert the case of the string
    convertCase(str);

    // Output the modified string
    printf("Converted string: %s", str);

    return 0;
}

