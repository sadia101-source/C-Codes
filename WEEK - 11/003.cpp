#include <stdio.h>

struct Distance {
    int feet;
    int inches;
};

int main() {
    struct Distance d1, d2, result;

    // Input two distances
    printf("Enter first distance (feet inches): ");
    scanf("%d %d", &d1.feet, &d1.inches);
    printf("Enter second distance (feet inches): ");
    scanf("%d %d", &d2.feet, &d2.inches);

    // Add the distances
    result.inches = d1.inches + d2.inches;
    result.feet = d1.feet + d2.feet + result.inches / 12;
    result.inches = result.inches % 12;

    // Output the result
    printf("Total distance: %d feet and %d inches\n", result.feet, result.inches);

    return 0;
}

