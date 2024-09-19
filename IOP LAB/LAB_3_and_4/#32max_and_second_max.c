#include <stdio.h>
int main(){
    // declaring n( number od numbers the user is going  to enter),N(user from the input the variable gets updated every time the user enters a new number),
    //max(biggest number among the given numbers),second_max(2nd biggest number among the given numbers) are integers. 
    int n,N,i,max,second_max;
    // input from the user for n
    printf("How many numbers will you enter: \n");
    scanf("%d",&n);
    // the user should enter n more than 2 or equal to 2 
    if(n<2){
        printf("Please enter more than 2 or equal to 2");
        return 1;
    }
    // input from the user for N
    printf("Enter a number: /n");
    scanf("%d",&N);
    // initially assigning N to max and second_max
    max = N;
    second_max = N;
    for (i=2;i<=n;++i){
        printf("Enter a number: /n");
        scanf("%d",&N);
        if (max>N&&N>second_max){
            second_max = N;
        }
        else if (N>max){
            second_max = max;
            max = N;
        }
    }
    printf("The largest number among the given numbers is %d \n",max);
    printf("The 2nd largest number among the given number is %d \n",second_max);
}


// =)
