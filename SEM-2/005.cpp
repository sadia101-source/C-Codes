#include <stdio.h>
#include <string.h>
void stringAdd(char str1[], char str2[]) {
    strcat(str1, str2);
    printf("After Concatenation: %s\n", str1);
}

void stringCopy(char str1[], char str2[]) {
    strcpy(str1, str2);
    printf("After Copying: %s\n", str1);
}

void stringReverse(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("After Reversing: %s\n", str);
}

void stringLength(char str[]) {
    int length = strlen(str);  
    printf("Length of String: %d\n", length);
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  

    stringAdd(str1, str2);
    stringCopy(str1, str2);
    stringReverse(str2);
    stringLength(str1); 
    return 0;
}
