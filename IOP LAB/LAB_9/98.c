#include <stdio.h>
#include <stdlib.h>

// Function prototype for matrix multiplication
void multiply_matrices(int *matrix1, int rows1, int cols1, int *matrix2, int rows2, int cols2, int *result);

int main() {
    // Variables to store dimensions of matrices
    int rows1, cols1, rows2, cols2;

    // Input for dimensions of the first matrix
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);

    // Input for dimensions of the second matrix
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d");

    // Check if multiplication is possible
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible. Columns of the first matrix must equal rows of the second matrix.\n");
        return 1;
    }

    // Dynamically allocate memory for the matrices
    int *matrix1 = (int *)malloc(rows1 * cols1 * sizeof(int));
    int *matrix2 = (int *)malloc(rows2 * cols2 * sizeof(int));
    int *result = (int *)malloc(rows1 * cols2 * sizeof(int));

    // Check for memory allocation failure
    if (matrix1 == NULL || matrix2 == NULL || result == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input elements for the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", (matrix1 + i * cols1 + j));
        }
    }

    // Input elements for the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", (matrix2 + i * cols2 + j));
        }
    }

    // Call the function to multiply matrices
    multiply_matrices(matrix1, rows1, cols1, matrix2, rows2, cols2, result);

    // Display the resulting matrix
    printf("The resulting matrix is:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", *(result + i * cols2 + j));
        }
        printf("\n");
    }

   
