#include <stdio.h>

// prototyping a function with parameters array_1, array_2, and sum_1_2 to swap the elements of two arrays
int sum_of_2_arrays(int array_1[], int array_2[], int sum_1_2[]);

int main() {
    // declaring array_1 of size 5
    int array_1[5];
    
    // declaring array_2 of size 5
    int array_2[5];
    
    // declaring sum_1_2 to store results (although it's unused here)
    int sum_1_2[5];
    
    // input from the user to store in the 1st array
    printf("Enter numbers to store in the 1st array: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array_1[i]);
    }
    
    // input from the user to store in the 2nd array
    printf("Enter numbers to store in the 2nd array: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array_2[i]);
    }
    
    // calling the function to swap the elements of array_1 and array_2
    sum_of_2_arrays(array_1, array_2, sum_1_2);
    
    // printing the elements of the 1st array after swapping
    printf("Elements of the 1st array: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d \n", array_1[i]);
    }
    
    // printing the elements of the 2nd array after swapping
    printf("Elements of the 2nd array: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d \n", array_2[i]);
    }

    return 0;
}

// function to swap the elements of array_1 and array_2
int sum_of_2_arrays(int array_1[], int array_2[], int sum_1_2[]) {
    int temp;
    // swapping corresponding elements of array_1 and array_2
    for (int i = 0; i < 5; i++) {
        temp = array_1[i];
        array_1[i] = array_2[i];
        array_2[i] = temp;
    }
}
