#include <stdio.h>

int findPivot(int arr[], int low, int high) {
    if (high < low) {
        return -1;
    }
    int mid = low + (high - low) / 2;

    if (mid > low && arr[mid] < arr[mid - 1]) {
        return mid;
    }
    if (mid < high && arr[mid] > arr[mid + 1]) {
        return mid + 1;
    }
    if (arr[low] <= arr[mid]) {
        return findPivot(arr, mid + 1, high); 
    }
    return findPivot(arr, low, mid - 1);
}
int main() {
    int arr[] = {6, 7, 9, 15, 19, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pivot = findPivot(arr, 0, n - 1);

    if (pivot == -1) {
        printf("Array is not rotated\n");
    } else {
        printf("Pivot element is %d\n", arr[pivot]);
    }
    return 0;
}
