#include <stdio.h>

int main() {
    int A, B, temp;

    // Taking input for A and B
    printf("Enter value of A: ");
    scanf("%d", &A);

    printf("Enter value of B: ");
    scanf("%d", &B);

    // Swapping using a temporary variable
    temp = A;   // Store A in temp
    A = B;      // Assign B to A
    B = temp;   // Assign temp (original A) to B

    // Output the swapped values
    printf("After swapping (using temporary variable): A = %d, B = %d\n", A, B);

    return 0;
}

