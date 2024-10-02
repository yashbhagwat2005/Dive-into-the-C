#include <stdio.h>
int main(){
//declaring i,j,ascii_code,n(input from the user for how long are the patterns)
    int i,j,ascii_code,n;
// input from the user for n
    printf("Enter the number of rows you want to print for the pattern: \n");
    scanf("%d",&n);
// ascii_code=65 is A
    ascii_code = 65;
// loop for the next line 
    for (i=1;i<=n;i++){
// loop for printing the letters
        for (j=1;j<=i;j++){
            printf("%c",ascii_code);
        }
        // increaing the value of ascii code ie going to the next letter
        ascii_code+=1;
    printf("\n");
    }
    
}
