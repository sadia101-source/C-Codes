#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_number;
    float marks;
};

void inputStudentInfo(struct Student* student) {
    printf("Enter the student's name: ");
    fgets(student->name, sizeof(student->name), stdin);
    student->name[strcspn(student->name, "\n")] = '\0';

    printf("Enter the roll number: ");
    scanf("%d", &student->roll_number);

    printf("Enter the marks: ");
    scanf("%f", &student->marks);
}

void displayStudentInfo(struct Student student) {
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll_number);
    printf("Marks: %.2f\n", student.marks);
}

int main() {
    struct Student student1;

    inputStudentInfo(&student1);
    displayStudentInfo(student1);

    return 0;
}
