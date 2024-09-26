#include <stdio.h>
int main(){
    // declaring A(input from the user for every element in array A), B (input from the user for every element in array B) as a array integer
    int A[3],B[3],temp;
    for (int i = 0; i<3;i++){
        printf(" \nEnter a number for the array A:" );
        scanf("%d",&A[i]);
        printf(" \nEnter a number for the array B:" );
        scanf("%d",&B[i]);
    }
    for (int j = 0; j<3;j++){
        temp = A[j];
        A[j] = B[j];
        B[j] = temp;
    }
    for (int k = 0; k<3;k++){
        printf("%d \t",A[k]);
    }
    printf("\n");
    for (int k = 0; k<3;k++){
        printf("%d \t",B[k]);
    }
}
