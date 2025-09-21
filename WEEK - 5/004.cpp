#include <stdio.h>

int main() {
    int A, B;

    // Taking input for A and B
    printf("Enter value of A: ");
    scanf("%d", &A);

    printf("Enter value of B: ");
    scanf("%d", &B);

    // Swapping without using a temporary variable
    A = A + B;  // Step 1: A becomes A + B
    B = A - B;  // Step 2: B becomes original A
    A = A - B;  // Step 3: A becomes original B

    // Output the swapped values
    printf("After swapping (without temporary variable): A = %d, B = %d\n", A, B);

    return 0;
}

