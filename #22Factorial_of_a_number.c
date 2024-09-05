#include <stdio.h>

int main() {
    // declaring number as a integer variable where the user's input will be taken
    int number;
    // declaring length as a integer variable
    int length;
    // declaring factorial as a integer variable
    int factorial;
    // declaring i as a integer variable
    int i;
    // input from the user for the factorial if it
    printf("Enter a number to calculate its factorial");
    scanf("%d",&number);
    factorial = number;
    length = number;
    i = number;
    while(i!=0&&length!=1){
        length-=1;
        factorial*=length;
        i-=1;
    }
    printf("The factorial of %d is %d",number,factorial);
    return 0;
}
    

// =)
