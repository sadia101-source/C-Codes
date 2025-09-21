#include <stdio.h>

// function to find the largest element in the array
int findLargest(int arr[], int n) {
    int max = arr[0];  // assume the first element is the largest
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];  // update max if a larger element is found
        }
    }
    return max;
}

int main() {
    int n;
    
    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the largest element
    int largest = findLargest(arr, n);
    
    // Output the largest element
    printf("The largest element in the array is: %d\n", largest);
    
    return 0;
}

