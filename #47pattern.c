#include <stdio.h>
int main(){
    int row,letter,j,i;
    printf("Enter the number of rows you want");
    scanf("%d",&row);
    if (row>90){
        printf("Please enter a number less than 90");
        return 1;
    }
    for (i=1;i<=row;++i){
        printf("\n");
        letter=65;
        for (j=1;j<=i;++j){
            printf("%c",letter);
            letter+=1;
        }
        
    }
        
}
