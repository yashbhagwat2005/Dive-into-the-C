#include <stdio.h>
int main(){
    // declaring i,j,k,l,leadin_spaces(spaces to form t he pyramid),n(input from the user the number of rows)
    int i,j,k,l,leading_space,n;
    // input from the user for n
    printf("Enter the number of rows you want to print of the pattern");
    scanf("%d",&n);
    // as there is no leadin space in the last row
    leading_space = n-1;
    // first loop is for going to the next line 
    for (i=1;i<=n;i++){
        printf("\n");
        // second loop is for printing the leading spaces
        for (j=1;j<=leading_space;j++){
            printf(" ");
        // third loop is for printing the the numbers in increasing order
        }for (k=1;k<=i;k++){
            printf("%d",k);
        // fourth loop is for printing the numbers in decreasing order    
        }for (l=i-1;l>0;l--){
            if (i!=1){
                printf("%d",l);
            }
        }
        // the number of leqading spaces decreases row by row
        leading_space-=1;
    }
}


// =)
