#include <stdio.h>
int main(){
    // declaring n(input from the user for n  for the elements in the array),MAX(largest number in the array),SEC_MAC(second largest number in the array)
    int n,MAX,SEC_MAX;
    int a[10];
    // input for n from the user and adding that number to array "a"
    for (int i = 0; i<10 ; i++){
        printf("\nEnter a number: ");
        scanf("%d",&n);
        a[i]=n;
    // initially setting max equal to the first number in array
    MAX = a[0];
    // initially setting second max equal to the second number in array
    SEC_MAX = a[0];
    }
    // comparing every element of the array to the max and second max number 
    for (int i = 1; i<10 ;i++){
        if(a[i]>MAX){
            SEC_MAX = MAX;
            MAX = a[i];
        }
        else if (a[i]<MAX && a[i]>SEC_MAX){
            SEC_MAX = a[i];
        }
    }
    printf("\n The largest number in the array is %d",MAX);
    printf("\n The second largest number in the array is %d",SEC_MAX);
}


// =)
