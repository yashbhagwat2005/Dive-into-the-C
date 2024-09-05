#include <stdio.h>
int main(){
    // declaring number as an integer variable
    int number;
    // input from the user 
    printf("Enter a number to check it it is an even number");
    scanf("%d",&number);
    // to check if the number is divisible by 2
    if (number%2==0){
        printf("It is an even number");
    }else{
        printf("It is an odd number");
    }
    return 0;
}


// =)
