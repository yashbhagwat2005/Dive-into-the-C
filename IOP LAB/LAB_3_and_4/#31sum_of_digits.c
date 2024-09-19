#include <stdio.h>
int main(){
    // declaring N(input from the user to caalculate the sum of the digits),sum(sum of the digits),temp as integer variable
    int N,sum,temp;
    // input for N
    printf("Enter a number to calculate the sum of the digits: ");
    scanf("%d",&N);
    // initially the value of sum is 0
    sum = 0;
    // using temp aws the value of N gets update in the while loop due to which orignal value is stored properly
    temp = N;
    while(temp!=0){
        sum = sum+temp%10;
        temp/=10;
    }
    printf("The sum of the digits in %d is %d",N,sum);
}
