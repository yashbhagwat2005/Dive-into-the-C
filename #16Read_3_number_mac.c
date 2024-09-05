#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    if (a>b){
        if (a>c){
            printf("%d is the greatest number between the three given numbers",a);
        }else if (c>a){
            printf("%d is the greatest number between the three given numbers",a);
        }else{
            printf("%d and %d are both equal",a,c);
        }
    }else if (b>a){
        if (b>c){
            print("%d is the greatest number between the three given numbers",b);
        
        }else if(c>b){
            printf("%d is the greatest number between the three given numbers",c)
        }
        else{
            printf("%d and %d are both equal",b,c);
        }
    }else if (a==b && b==c){
        printf("All the given numbers are equal");
    }
        
    }
}

// =)
