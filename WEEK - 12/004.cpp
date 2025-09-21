#include <stdio.h>
#include <ctype.h>  // For toupper()

int main() {
    FILE *inFile, *outFile;
    char inFilename[100], outFilename[100];
    int ch;

    // Get filenames from user
    printf("Enter input file: ");
    scanf("%s", inFilename);
    printf("Enter output file: ");
    scanf("%s", outFilename);
    // Open input file in read mode
    if ((inFile = fopen(inFilename, "r")) == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }
    // Open output file in write mode
    if ((outFile = fopen(outFilename, "w")) == NULL) {
        printf("Error opening output file.\n");
        fclose(inFile);
        return 1;
    }
    // Read, convert to uppercase, and write
    while ((ch = fgetc(inFile)) != EOF) {
        fputc(toupper(ch), outFile);
    }

    printf("Content converted to uppercase.\n");

    fclose(inFile);
    fclose(outFile);
    return 0;
}

