#include <stdio.h>
#include <math.h>  // For mathematical functions like sqrt and pow

#define PI 3.14159  // Constant for pi value

int main() {
    int choice;
    float radius, length, width, side1, side2, side3, base, height;
    float area, perimeter;

    // Display the menu for shape selection
    printf("Choose a shape to calculate Area and Perimeter:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Circle
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            
            // Area and perimeter of circle
            area = PI * radius * radius;
            perimeter = 2 * PI * radius;
            
            printf("Area of the circle: %.2f\n", area);
            printf("Perimeter (Circumference) of the circle: %.2f\n", perimeter);
            break;
        
        case 2:
            // Rectangle
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            
            // Area and perimeter of rectangle
            area = length * width;
            perimeter = 2 * (length + width);
            
            printf("Area of the rectangle: %.2f\n", area);
            printf("Perimeter of the rectangle: %.2f\n", perimeter);
            break;
        
        case 3:
            // Triangle
            printf("Enter the lengths of the three sides of the triangle:\n");
            scanf("%f %f %f", &side1, &side2, &side3);

            // Calculate perimeter of triangle
            perimeter = side1 + side2 + side3;
            
            // Check if the sides form a valid triangle
            if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
                // Using Heron's formula to calculate the area of the triangle
                float s = perimeter / 2;  // Semi-perimeter
                area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
                
                printf("Area of the triangle: %.2f\n", area);
                printf("Perimeter of the triangle: %.2f\n", perimeter);
            } else {
                printf("The sides do not form a valid triangle.\n");
            }
            break;
        
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}

