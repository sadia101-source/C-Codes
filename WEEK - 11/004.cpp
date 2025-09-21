#include <stdio.h>
#include <string.h>

struct Employee {
    char name[25];
    int age;
    int Basic;
    float total_salary;
};
// Function to calculate the total salary
void calculateSalary(struct Employee *e) {
    float DA = 0.10 * e->Basic;  // DA = 10% of Basic
    float HRA = 0.05 * e->Basic; // HRA = 5% of Basic
    e->total_salary = e->Basic + DA + HRA;
}
// Function to sort employees by total salary in descending order
void sortEmployees(struct Employee employees[], int n) {
    struct Employee temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (employees[j].total_salary < employees[j + 1].total_salary) {
                temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Employee employees[5];
    // Input employee records
    for (int i = 0; i < 5; i++) {
        printf("Enter details for employee %d\n", i + 1);
        printf("Name: ");
        getchar();
        fgets(employees[i].name, 25, stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0';

        printf("Age: ");
        scanf("%d", &employees[i].age);

        printf("Basic Salary: ");
        scanf("%d", &employees[i].Basic);

        calculateSalary(&employees[i]);
    }
    // Sort employees based on total salary in descending order
    sortEmployees(employees, 5);
    
    // Display sorted employee details
    printf("\nEmployee Records (sorted by Total Salary):\n");
    for (int i = 0; i < 5; i++) {
        printf("\nName: %s\nAge: %d\nTotal Salary: %.2f\n", employees[i].name, employees[i].age, employees[i].total_salary);
    }

    return 0;
}
