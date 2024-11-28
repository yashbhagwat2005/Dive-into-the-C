#include<stdio.h>
#define big(a,b)  ((a)>(b)?(a):(b))

int main()
{   int num1,num2;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);

    int result = big(num1,num2);
    printf("%d is the biggest among entered numbers",result);
    return 0;

}
