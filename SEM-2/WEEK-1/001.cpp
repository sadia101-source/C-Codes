#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeVowels(char *str) {
    int i, j = 0;
    int length = strlen(str);
    char temp[length + 1];

    for(i = 0; i < length; i++) {
        char ch = str[i];
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
           ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            temp[j++] = str[i];
        }
    }
    temp[j] = '\0';
    
    strcpy(str, temp);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = 0;

    removeVowels(str);

    printf("String after removing vowels: %s\n", str);
    return 0;
}
