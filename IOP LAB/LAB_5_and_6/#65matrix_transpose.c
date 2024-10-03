#include <stdio.h>

int main() {
// declaring array[3][3](2d array),transpose(transpose of array a),i,j as a integer
    int a[3][3], transpose[3][3], i, j;
    // input for every element in the matrix
    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // transposing the the matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            transpose[j][i] = a[i][j];
        }
    }
    // printing the transposed matrix
    printf("Transpose of the matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}


//=)
