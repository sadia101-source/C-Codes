#include <stdio.h>

struct Student {
    char name[50], class_name[20], enrolment[20];
    int roll_no;
    float marks;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    struct Student students[n];
    // Input student data
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        getchar(); 
        fgets(students[i].name, 50, stdin);
        
        printf("Class: ");
        fgets(students[i].class_name, 20, stdin);
        
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        
        getchar();
        printf("Enrolment Number: ");
        fgets(students[i].enrolment, 20, stdin);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    // Print student data
    printf("\nStudent Records:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s", students[i].name);
        printf("Class: %s", students[i].class_name);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Enrolment No: %s", students[i].enrolment);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}

