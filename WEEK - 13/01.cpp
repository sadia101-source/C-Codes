#include <stdio.h>

// Swap using a third variable (Call by Reference)
void swapWithThirdVar(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Swap without using a third variable (Call by Value)
void swapWithoutThirdVar(int x, int y) {
    x = x + y;  // x becomes the sum of x and y
    y = x - y;  // y becomes the original x
    x = x - y;  // x becomes the original y
    printf("Inside swapWithoutThirdVar: x = %d, y = %d\n", x, y);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap using third variable (Call by Reference)
    swapWithThirdVar(&a, &b);
    printf("After swapWithThirdVar: a = %d, b = %d\n", a, b);

    // Swap without third variable (Call by Value)
    swapWithoutThirdVar(a, b);  // Does not modify original a and b
    printf("Output of swapWithoutThirdVar: a = %d, b = %d\n", a, b);

    return 0;
}

