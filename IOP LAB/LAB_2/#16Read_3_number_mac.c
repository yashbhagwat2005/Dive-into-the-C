#include<stdio.h>
int main(){
    // declaring a(1st_input),b(2nd_input),c(3rd_input)
    int a,b,c;
    // input for a
    printf("Enter the first number: ");
    scanf("%d",&a);
    // input for b
    printf("Enter the second number: ");
    scanf("%d",&b);
    // input for c
    printf("Enter the third number: ");
    scanf("%d",&c);
    // if a is greater than b
    if (a>b){
        // if a is greater than c then it is the greatest between the three numbers
        if (a>c){
            printf("%d is the greatest number between the three given numbers",a);
        // if c is greater than a then it is the greates among the three numbers 
        }else if (c>a){
            printf("%d is the greatest number between the three given numbers",a);
        }else{
        // a and b are equal
            printf("%d and %d are both equal",a,c);
        }
    // same logic for b
    }else if (b>a){
        if (b>c){
            printf("%d is the greatest number between the three given numbers",b);
        
        }else if(c>b){
            printf("%d is the greatest number between the three given numbers",c);
        }
        else{
            printf("%d and %d are both equal",b,c);
        }
    }else if (a==b && b==c){
        printf("All the given numbers are equal");
    }
        
    
}


// =)
