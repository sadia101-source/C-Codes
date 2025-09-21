#include <stdio.h>

int main() {
    int day;

    // Prompt the user for input
    printf("Enter a digit (1-7) to find the corresponding weekday: ");
    scanf("%d", &day);

    // Use switch-case to determine the day
    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a digit between 1 and 7.\n");
    }

    return 0;
}

