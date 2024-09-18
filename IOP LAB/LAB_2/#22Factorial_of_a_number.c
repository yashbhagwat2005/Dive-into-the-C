
#include <stdio.h>

int main() {
    // declaring number(input from the user to calculate its factorial) as a integer
    int number;
    // declaring length(length will be equal to "number" this will be used in the while loop) as a integer
    int length;
    // declaring factorial as a integer variable
    int factorial;
    // input from the user for "number"
    printf("Enter a number to calculate its factorial: ");
    scanf("%d",&number);
    factorial = number;
    length = number;
    while(length!=1){
        length-=1;
        factorial*=length;
    }
    printf("The factorial of %d is %d",number,factorial);
    return 0;
}
    

// =)
