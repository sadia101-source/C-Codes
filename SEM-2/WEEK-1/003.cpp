#include <stdio.h>
#include <ctype.h>

void countCharacters(const char *str) {
    int vowels = 0, consonants = 0, digits = 0, whitespaces = 0;
    
    while (*str) {
        if (isalpha(*str)) {
            if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
                *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(*str)) {
            digits++;
        } else if (isspace(*str)) {
            whitespaces++;
        }
        str++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Whitespaces: %d\n", whitespaces);
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    countCharacters(str);
    return 0;
}
