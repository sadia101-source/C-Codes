#include <stdio.h>

struct Student {
    char name[50];
    char class_1[20];
    int roll_no;
};

int main() {
    FILE *file;
    struct Student student;
    
    // Open the file in write mode (create if it doesn't exist)
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input student details
    printf("Enter student details:\n");
    printf("Name: ");
    fgets(student.name, sizeof(student.name), stdin);
    
    printf("Class: ");
    fgets(student.class_1, sizeof(student.class_1), stdin);

    printf("Roll No: ");
    scanf("%d", &student.roll_no);

    // Write student details to file
    fprintf(file, "Name: %s", student.name);
    fprintf(file, "Class: %s", student.class_1);
    fprintf(file, "Roll No: %d\n", student.roll_no);

    // Close the file
    fclose(file);

    printf("Student information has been written to 'students.txt'.\n");

    return 0;
}
