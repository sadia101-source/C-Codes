#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target;
    printf("Enter a number to search: ");
    scanf("%d", &target);
    printf("%d %s in the array.\n", target, binarySearch(arr, sizeof(arr)/sizeof(arr[0]), target) != -1 ? "found" : "not found");
    return 0;
}

