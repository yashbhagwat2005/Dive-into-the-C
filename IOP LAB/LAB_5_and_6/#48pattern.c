#include <stdio.h>
int main(){
    // declaring N(how long the patttern is going to be),spaces(number of spaces to print) as integer
    int N,space;
    // input from N from the user
    printf("Enter a number to decide how long the pattern should be: ");
    scanf("%d",&N);
    space = N;
    for (int i=1;i<=N;++i){
        for (int j=1;j<space;++j){
            printf(" ");
        }for (int k=1;k<=i;++k){
            printf("%d",k);
        }
        printf("\n");
        space = space-1;
    }
    
}


// =)
