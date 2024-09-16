#include <stdio.h>
int main(){
    // declaring total(the sum of the series), factorial,N(how long the series should be)
   float total,factorial,N;
   int i,j;
   factorial = 1;
   // input from the user for N 
   printf("Enter how long you want the series to be: ");
   scanf("%f",&N);
   total = 0;
   // the outer loop is for the numerator
   for (i = 1;i<=N;++i){
       // the inner loop is for the factorial which will be in the denominator
       for (j = 1;j<=i;++j){
           factorial*=j;
       }
    total+=i/factorial;
    factorial = 1;
   }
   printf("The total sum of the entire series is %f",total);
    
}
    

// =)
