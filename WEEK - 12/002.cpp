#include <stdio.h>

struct Student {
    char name[50];
    char class_1[20];
    int roll_no;
};

int main() {
    FILE *file;
    struct Student student;

    // Open the file in read mode
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    // Read and display the data from the file
    printf("Reading student information from file...\n");

    while (fscanf(file, "Name: %[^\n]\n", student.name) == 1 && // Read Name
           fscanf(file, "Class: %[^\n]\n", student.class_1) == 1 && // Read Class
           fscanf(file, "Roll No: %d\n", &student.roll_no) == 1) { // Read Roll No

        printf("\nName: %s\n", student.name);
        printf("Class: %s\n", student.class_1);
        printf("Roll No: %d\n", student.roll_no);
    }

    // Close the file
    fclose(file);

    return 0;
}
