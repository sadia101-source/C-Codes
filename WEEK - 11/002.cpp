#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        getchar();  // To consume newline left by scanf
        printf("\nName: ");
        fgets(students[i].name, 50, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';  // Remove newline
        
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (students[j].marks < students[j + 1].marks) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }

    printf("\nRanked Student Records:\n");
    for (int i = 0; i < n; i++)
        printf("\nRank %d:\nName: %s\nRoll No: %d\nMarks: %.2f\n", i + 1, students[i].name, students[i].roll_no, students[i].marks);

    return 0;
}

