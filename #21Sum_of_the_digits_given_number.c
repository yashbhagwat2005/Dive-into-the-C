#include <stdio.h>

int main() {
    // declaring number as a integer variable where the user will give the input 
    int number,temp,q,sum;
    printf("Enter a number to check if it is a palindrome: ");
    scanf("%d",&number);
    temp = number;// to store the original value
    sum = 0;
    while (number!=0){
        q=number%10;
        sum+=q;
        number/=10;
    }
    printf("The sum of all the digits of  %d is %d",temp,sum);
    
    
    
    return 0;
}


// =)
