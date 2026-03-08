#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student *student;
    
    student = (struct Student *)malloc(sizeof(struct Student));
    
    if (student == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }

    printf("Enter student's name: ");
    scanf("%s", student->name);
    printf("Enter student's age: ");
    scanf("%d", &student->age);
    printf("Enter student's marks: ");
    scanf("%f", &student->marks);

    printf("\nStudent Information:\n");
    printf("Name: %s\n", student->name);
    printf("Age: %d\n", student->age);
    printf("Marks: %.2f\n", student->marks);

    free(student);
    
    return 0;
}
