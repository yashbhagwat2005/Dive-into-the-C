#include <stdio.h>
int main(){
    // declaring N(the number),sum(summ of all the number)
    int N,sum;
    // intially the sum will be equal to 0
    sum = 0 ;
    // N input from the user 
    printf("Enter a number: ");
    scanf("%d",&N);
    // to take the input from the user for N until the the user enters a negative number
    while (N>=0){
        sum+=N;
        printf("Enter a number: ");
        scanf("%d",&N);
    }
    printf("As you have entered a negative number the sum of all the numbers except the last negative number: %d",sum);

}


// =)
