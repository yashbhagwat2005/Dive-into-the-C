#include <stdio.h>
int main(){
    // declaring term,i(to check the number of terms printed),N(how long the series will be) as a integer 
    int term,i,N;
    // as the first term is going to be the 1st number
    term = 1;
    // input from the user for N
    printf("Enter the number for how long the series will be: ");
    scanf("%d",&N);
    if (N==0){
        printf("No terms will be printed");
        return 0;
    }
    // as the first number is going to be 1
    printf("%d",term);
    term+=1;
    i=2;
    for (i;i<=N;i++){
        printf(",%d",term*term);
        term+=1;
    }

    
}
    
