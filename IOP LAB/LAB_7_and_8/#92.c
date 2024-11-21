#include <stdio.h>

int findBiggest(int *arr, int n) {
    int biggest = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > biggest) {
            biggest = *(arr + i);
        }
    }
    return biggest;
}

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int biggest = findBiggest(arr, n);
    printf("The biggest number is: %d\n", biggest);

    return 0;
}
