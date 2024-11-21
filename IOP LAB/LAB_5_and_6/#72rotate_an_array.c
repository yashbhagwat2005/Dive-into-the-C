#include <stdio.h>
void rotateArray(int arr[], int n, int d) {
    int temp[d], i;
    for (i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    for (i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }
    for (i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d;
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &d);
    d = d % n;
    rotateArray(arr, n, d);
    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
