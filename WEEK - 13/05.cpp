#include <stdio.h>

int countEven(int *arr, int size) {
    int count = 0;
    
    // Iterate through the array and check for even numbers
    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int evenCount = countEven(arr, n);
    printf("Number of even numbers in the array: %d\n", evenCount);

    return 0;
}

