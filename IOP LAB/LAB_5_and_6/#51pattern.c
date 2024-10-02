#include <stdio.h>
int main(){
    /*declaring n_1(it works as a index to print 1),i,n(input from the user for asking how many wows to print of the pattern),j */
    
    int n_1,i,n,j;
    // input from the user for n
    printf("Enter the number of rows for the pattern: ");
    scanf("%d",&n);
    // as the 1 will be printed first 
    n_1 = 0;
    for (i=0;i<n;i++){
        printf("\n");
        for (j=0;j<n;j++){
            if (j==n_1){
                printf("1");
            }else{
                printf("0");
            }
        }
        // the postion of 1 increases line by line 
        n_1+=1;

    }
}
