#include <stdio.h>

int main() {
    // declaring number as a integer variable where the user will give the input 
    int number,temp,q,reversed_number;
    printf("Enter a number :  ");
    scanf("%d",&number);
    temp = number;// to store the original value
    while (number!=0){
        q=number%10;
        reversed_number=reversed_number*10+q;
        number/=10;
    }
    printf("The reverse of %d is %d",temp,reversed_number);
    
    
    
    return 0;
}


// =)
    
