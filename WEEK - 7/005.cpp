#include <stdio.h>

int main() {
    // Declare an array with some elements
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Calculate the number of elements in the array
    int numberOfElements = sizeof(arr) / sizeof(arr[0]);

    // Output the result
    printf("The number of elements in the array is: %d\n", numberOfElements);

    return 0;
}

