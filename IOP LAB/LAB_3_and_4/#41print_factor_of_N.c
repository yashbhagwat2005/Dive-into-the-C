#include <stdio.h>
int main(){
    // declaring i(every number from 1 to N to check if it is divisible) and N (input from the user to see the list of the factors of it)
    int i,N;
    // input for N from the user 
    printf("Enter a number to check the factors of it: ");
    scanf("%d",&N);
    // the fisrt factor for any number is always 1
    printf("The factors of %d is:1",N);
    for(i=2;i<N;i++){
        if(N%i==0){
            printf(",%d",i);
        }
    }
   
}


// =)
