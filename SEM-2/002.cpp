#include <stdio.h>
#include <string.h>

void removeWord(char *str, const char *word) {
    char temp[1000];
    int i = 0, j = 0, wordLen = strlen(word);

    while (str[i]) {
        if (strncmp(&str[i], word, wordLen) == 0) {
            i += wordLen;
        } else {
            temp[j++] = str[i++];
        }
    }

    temp[j] = '\0';
    strcpy(str, temp);
}

int main() {
    char str[1000], word[100];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    printf("Enter the word to remove: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = 0;

    removeWord(str, word);

    printf("String after removal: %s\n", str);
    return 0;
}

