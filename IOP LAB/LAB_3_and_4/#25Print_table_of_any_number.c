
#include <stdio.h>
int main() {
    // declaring number as a integer the user gives the input for this variable
    int number;
    // declaring i as a integer 
    int i;
    printf("Enter a number to print the multiplication table of the given number: ");
    scanf("%d",&number);
    i=1;
    // using while statement to print table of the given number 
    while(i<=10){
        printf("%d x %d = %d \n",number,i,number*i);
        i +=1;
    }
    return 0;
}
    

// =)
