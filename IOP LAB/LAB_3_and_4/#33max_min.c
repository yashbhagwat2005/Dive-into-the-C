#include <stdio.h>
int main(){
    // declaring n(input from the user for how many numbers will the user enter),N(input from the user for N),max,min as an integer
    
    int n,N,i,max,min;
    // input from the user for n
    printf("How many numbers will you enter: \n");
    scanf("%d",&n);
    // if the user enters less than 2 for n
    if(n<2){
        printf("Please enter more than 2");
        return 1;
    }
    // input from the user for N
    printf("Enter a number: \n");
    scanf("%d",&N);
    max = N;
    min = N;
    for (i=2;i<=n;++i){
        printf("Enter a number: \n");
        scanf("%d",&N);
        if (max<N){
            max = N;
        }
            
        else if (N<min){
            min = N;
        }
    }
    printf("%d is the largest between the given numbers \n",max);
    printf("%d is the smallest between the given numbers \n",min);
}


// =)
