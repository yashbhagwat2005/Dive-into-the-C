#include <stdio.h>

int main()
{
    int number,n_1,n_2,n_3;// declaring n_1,n_2,n_3 as an integer where n represents number
    printf("Enter the number of how long you want the FIBONACCI series you want: ");//input from the user where the user chooses how long they want the series to be long 
    scanf("%d",&number);
    int series;
    n_1 = 0;
    n_2 = 1;// starting 2 digits of fibonacci is 0 and 1
    n_3 = n_1+n_2;
    printf("%d,%d,%d",n_1,n_2,n_3);
    // as by default the first three number of the series will be printed
    series = number-3;
    while (number!=0){
        n_1 = n_2;
        n_2 = n_3;
        // every third number after the 2 numbers is the sum of both the 2 numbers
        n_3 = n_1+n_2;
        printf(",%d",n_3);
        number-=1;
    }
    return 0;
}


// =)
