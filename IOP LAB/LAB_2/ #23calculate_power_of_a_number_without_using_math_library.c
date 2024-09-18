#include <stdio.h>

int main() {
    // declaring base and power as a integer variable where both of are taken from the user
    int base,power;
    // declaring i as an integer 
    int i;
    int exponent;
    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the power: ");
    scanf("%d",&power);
    i = power;
    exponent = 1;// assigning exponent as 1 as unassignied exponents are considered as 0
    while (i!=0){
        exponent*=base;
        i-=1;
    }
    printf("%d powered to %d is %d",base,power,exponent);
    return 0 ;
}
    

// =)
