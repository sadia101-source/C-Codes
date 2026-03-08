#include <stdio.h>

struct Time {
    int hours, minutes, seconds;
};

void inputTime(struct Time* t) {
    printf("Enter hours: ");
    scanf("%d", &t->hours);
    printf("Enter minutes: ");
    scanf("%d", &t->minutes);
    printf("Enter seconds: ");
    scanf("%d", &t->seconds);
}

struct Time timeDifference(struct Time t1, struct Time t2) {
    int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int diffSeconds = totalSeconds1 - totalSeconds2;
    if (diffSeconds < 0) diffSeconds = -diffSeconds;
    
    struct Time diff;
    diff.hours = diffSeconds / 3600;
    diff.minutes = (diffSeconds % 3600) / 60;
    diff.seconds = diffSeconds % 60;
    return diff;
}

void displayTime(struct Time t) {
    printf("%02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}

int main() {
    struct Time t1, t2, diff;
    printf("Enter the first time:\n");
    inputTime(&t1);
    printf("Enter the second time:\n");
    inputTime(&t2);
    diff = timeDifference(t1, t2);
    printf("Time difference: ");
    displayTime(diff);
    return 0;
}
