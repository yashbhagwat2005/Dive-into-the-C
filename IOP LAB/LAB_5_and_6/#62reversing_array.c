#include <stdio.h>

int main() {
    // declaring array(size of 10), temp as a integer
    int a[10], temp;
    // input from the user for the 10 elements 
    for (int i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    // revering the array
    for (int i = 0; i < 10 / 2; i++) {
        temp = a[i];
        a[i] = a[10 - i - 1];
        a[10 - i - 1] = temp;
    }
    printf("Array after reversal: \n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}


// =)
