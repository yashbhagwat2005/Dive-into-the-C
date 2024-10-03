#include <stdio.h>

int main() {
// declaring n(number of stars input from the user),i,j,leading_space(space before the stars),m,o,p
    int n,i,j,k,leading_space,m,o,p;
// input from the user for n
    printf("Enter the number of rows you want to print: ");
    scanf("%d", &n);
// as there are no leading spaces at the row which has the n stars
    leading_space = n - 1;
    // 1st loop for going to the next line 
    for (i = 1; i <= n; ++i) {
        printf("\n");
        // second loop for printing the leading spaces
        for (j = leading_space; j > 0; j--) {
            printf(" ");
        }
        // third loop for printing the stars with spaces 
        for (k = 1; k <= i; k++) {
            printf("* ");
        }
        // as the one star increases in each row one spaces decreases
        leading_space--;
    }
    // the following logic is for the upside down pyramid
    // the the number os stars start to decrease the spaces also increases
    leading_space = n - (n-1);
    // first loop for going to the next line 
    for (m=n-1;m>0;--m){
        printf("\n");
        // second loop for printing the leading spaces
        for (o= leading_space; o > 0; o--) {
            printf(" ");
        }
        // third loop for printing the stars 
        for (p = 1; p <=m ; p++) {
            printf("* ");
        }
        // leading space is increasing as on star decreases in every row
        leading_space++;
    }
    return 0;
    
}
    

// =)
    
