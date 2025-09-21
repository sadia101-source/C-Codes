#include <stdio.h>
#include <stdlib.h>

void countFileDetails(FILE *file) {
    int ch;
    int lines = 0, characters = 0, blankSpaces = 0;
    // Read character by character until EOF
    while ((ch = fgetc(file)) != EOF) {
        characters++;  // Every character encountered
        if (ch == ' ') {
            blankSpaces++;  // Blank space encountered
        }
        if (ch == '\n') {
            lines++;  // Newline character, which signifies the end of a line
        }
    }
    // Output the results
    printf("\nTotal number of lines: %d\n", lines);
    printf("Total number of characters: %d\n", characters);
    printf("Total number of blank spaces: %d\n", blankSpaces);
}

int main() {
    FILE *file;
    char filename[100];

    printf("Enter the name of the file: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error: Could not open the file %s\n", filename);
        return 1;
    }
    // Count lines, characters, and blank spaces
    countFileDetails(file);
    // Close the file
    fclose(file);

    return 0;
}
