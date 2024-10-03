#include <stdio.h>

int main() {
// declaring array a[3][3](2d array),max,min as a integer
    int a[3][3], max, min;
    // input from the user for every element in the a[3][3]
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    // initially keeping the fist number of the matrix as a max and min number
    max = min = a[0][0];
    // loop for finding the max and min number 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}

// =)
