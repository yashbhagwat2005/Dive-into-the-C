#include <stdio.h>

int main() {
    // declaring a,b,c as an variable integer 
    int a,b,c;
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    printf("Enter the third number");
    scanf("%d",&c);
    // Using nested conditional operators to find the greatest of three numbers
    int greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The greatest number is: %d\n", greatest);
    
    return 0;
}


//=)
