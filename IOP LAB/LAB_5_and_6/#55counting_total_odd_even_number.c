#include <stdio.h>
int main(){
    // declaring n(element input from the user),count_o(total number of odd numbers),count_e(total number of even numbers)) as a int
    int n,count_o,count_e;
    // declaring a(10 elements in the array "a") as a int
    int a[10];
    // input from the user for n and adding it to the array a
    for (int i = 0; i<10 ; i++){
        printf("\nEnter a number: ");
        scanf("%d",&n);
        a[i]=n;
    }
    // counting the total number of even number and odd numbers by checking if the element is divisible by 2
    for (int i = 0; i<10 ;i++){
        if (i%2!=0){
            count_o+=1;
        }
        else if (i%2==0){
            count_e+=1;
        }
    }
    printf("\nTotal number of odd number: %d",count_o);
    printf("\nTotal number of even number: %d",count_e);
}


// =)
