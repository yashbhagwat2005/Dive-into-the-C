#include <stdio.h>
int main(){
    // declaring N(number of terms in the series),i(checks the number of terms printed)
    int N,i,term;
    // input from the user for N
    printf("Enter a number to decide how long the series should be: ");
    scanf("%d",&N);
    if(N==0){
        printf("No terms will be printed ");
        return 0;
    }
    // as the first term is going to be 2
    term = 2;
    i = N-1;
    // subtracting 1 from N as the first term as already been printedd
    printf("%d",term);
    while(i!=0){
        // adding 2 to each term to continue the series
        term+=2 ;
        printf(",%d",term);
        i-=1;
    }
    
}
    
// =)
