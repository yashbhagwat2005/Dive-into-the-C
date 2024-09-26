#include <stdio.h>
int main(){
    // declaring A[input from the user for every element in array A],B[input from the user for every element in array B] 
    // declaring C[addition of the element of array A and array B in whose index value is the same]
    int A[3],B[3],C[3];
    // input from the user for array A and array B
    // addition of every element and entering it into array c
    for (int i = 0; i<3;i++){
        printf(" \nEnter a number for the array A:" );
        scanf("%d",&A[i]);
        printf(" \nEnter a number for the array B:" );
        scanf("%d",&B[i]);
        C[i]= A[i]+B[i];
    }
    // printing the elements from array c 
    for (int j = 0; j<3;j++){
        printf("%d \t",C[j]);
    }
    
}


// =)
