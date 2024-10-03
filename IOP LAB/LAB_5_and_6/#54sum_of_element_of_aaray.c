#include <stdio.h>
int main() {
//declaring array,sum(sum of all elements in the array) as a integer
    int arr[10], sum = 0;
// input from the user for the 10 elements and doing the addition of all the elements
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of the numbers: %d\n", sum);
    return 0;
}


// =)
