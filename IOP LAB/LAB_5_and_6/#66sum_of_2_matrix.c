#include <stdio.h>

int main() {
// declaring array a1[3][3](2d array),a2[3][3](2d array),sum[3][3](sum of the 2 arrays) as a integer
    int a1[3][3], a2[3][3], sum[3][3];
    // input from the user for every element in matrix a1
    printf("Enter elements of the first 3x3 matrix:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &a1[i][j]);
        }
    }
    // input from the user for every element in matrix a2
    printf("Enter elements of the second 3x3 matrix:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
            scanf("%d", &a2[i][j]);
    }
    // loop for adding the corresponding element of matrix a and matrix b
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
          sum[i][j] = a1[i][j] + a2[i][j];}
    }
    printf("Resultant Matrix:\n");
    // printing the resultant matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}


//=)
