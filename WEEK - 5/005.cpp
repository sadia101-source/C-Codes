#include <stdio.h>

int main() {
    float a, b, c;

    // Input the sides of the triangle
    printf("Enter the length of the first side (a): ");
    scanf("%f", &a);

    printf("Enter the length of the second side (b): ");
    scanf("%f", &b);

    printf("Enter the length of the third side (c): ");
    scanf("%f", &c);

    // Check if the input forms a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        // Determine the type of triangle
        if (a == b && b == c) {
            printf("The triangle is an Equilateral triangle.\n");
        } else if (a == b || b == c || a == c) {
            printf("The triangle is an Isosceles triangle.\n");
        } else {
            printf("The triangle is a Scalene triangle.\n");
        }
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}

