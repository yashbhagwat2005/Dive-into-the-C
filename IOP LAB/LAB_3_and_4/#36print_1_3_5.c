#include <stdio.h>
int main(){
    // declaring number,i,n_1 as an integer 
    // where n represnets a number in the series
    int number,i,n;
    // input from the user for how long will be the series
    printf("Enter a number to decide how long the series will be: \n");
    scanf("%d",&number);
    i = number-1;
    n = 1;
    printf("%d",n);
    while(i!=0){
        n+=2;
        i-=1 ;
        printf(",%d",n);
    }
}


// =)
