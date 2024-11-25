#include <stdio.h>
int main(){
    // declaring n(element input from the user),count_pos(total number of postive numbers),count_negative(total number of negative numbers)) as a int
    // decalring count_0 (counts the total number of zeroes) as a int
    int n,count_pos = 0,count_neg = 0,count_0 = 0;
    // declaring a(10 elements in the array "a") as a int
    int a[10];
    // input from the user for n and adding it to the array a
    for (int i = 0; i<10 ; i++){
        printf("\nEnter a number: ");
        scanf("%d",&n);
        a[i]=n;
    }
    for (int i = 0; i<10 ;i++){
        if (a[i]<0){
            count_neg+=1;
        }else if(a[i]>0){
            count_pos+=1;
        }
        else if(a[i]==0){
            count_0+=1;
        }
    }
    printf("\nTotal number of postive number: %d",count_pos);
    printf("\nTotal number of negative number: %d",count_neg);
    printf("\nTotal number of 0 value elements : %d",count_0);

}


// =)
