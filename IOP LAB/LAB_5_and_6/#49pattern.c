#include <stdio.h>

int main() {
// declaring n(number of stars input from the user),i,j,leading_space(space before the stars)
    int n,i,j,k,leading_space;
// input from the user for n 
    printf("Enter the number of rows you want to print: ");
    scanf("%d", &n);
// spaces are  not present in the final row this the loop space won't use it. 
    leading_space = n - 1;
// first loop is for next line     
    for (i = 1; i <= n; ++i) {
        printf("\n");
// the second loop is for the spaces 
        for (j = leading_space; j > 0; j--) {
            printf(" ");
        }
// the third loop is for stars 
        for (k = 1; k <= i; k++) {
            printf("* ");
        }
// decreasing the the spaces row by row 
        leading_space--;
    }
    return 0;
}
