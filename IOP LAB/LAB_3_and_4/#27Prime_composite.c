#include <stdio.h>

int main() {
    // declaring N(input from the user forto check if it is a prime number),factors(factors of N) as a integer
    int N,factors,i;
    factors = 0;
    // input from the user for N
    printf("Enter a number to check if it is a prime number: ");
    scanf("%d",&N);
    // from 1 to N to check which numbers are divisible
    for (i=1;i<=N;++i){
        if (N%i==0){
            factors+=1;
        }
    }
        if (factors>2){
            printf("It is a composite number");
        }else if (factors==2){
            printf("It is a prime number");
        }
    return 0;
}
