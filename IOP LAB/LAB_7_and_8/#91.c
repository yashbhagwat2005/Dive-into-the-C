#include <stdio.h>

void calculateSquareAndCube(int *num) {
    int square = (*num) * (*num);
    int cube = (*num) * (*num) * (*num);
    printf("Square: %d\n", square);
    printf("Cube: %d\n", cube);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    calculateSquareAndCube(&num);

    return 0;
}
