#include <stdio.h>

struct Distance {
    int feet;
    int inches;
};

struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.inches = d1.inches + d2.inches;
    result.feet = d1.feet + d2.feet + (result.inches / 12);
    result.inches = result.inches % 12;
    return result;
}

void inputDistance(struct Distance* d) {
    printf("Enter feet: ");
    scanf("%d", &d->feet);
    printf("Enter inches: ");
    scanf("%d", &d->inches);
}

void displayDistance(struct Distance d) {
    printf("%d feet %d inches\n", d.feet, d.inches);
}

int main() {
    struct Distance d1, d2, result;
    printf("Enter the first distance:\n");
    inputDistance(&d1);
    printf("Enter the second distance:\n");
    inputDistance(&d2);
    result = addDistances(d1, d2);
    printf("The sum of the distances is: ");
    displayDistance(result);
    return 0;
}
