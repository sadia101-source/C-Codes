#include <stdio.h>

// function to calculate the sum of the array elements
int findSum(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i]; 
    }
    
    return sum;
}

int main() {
    int n;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the array elements
    int sum = findSum(arr, n);
    
    // Output the sum
    printf("The sum of the array elements is: %d\n", sum);
    
    return 0;
}

