#include <stdio.h>
int main(){
    /* Declaring B_s,HRA_perc,allowence,gross_salary as a float variable
    where B_s is Basic salary,HRA is House rent allowence */
    float B_s,HRA_perc,allowence,gross_salary,HRA;
    // input from the user for basic salary
    printf("Enter your basic salary: ");
    scanf("%f",&B_s);
    // input from the user for the HRA percentage
    printf("Enter your House rent allownce percentage of the basic salary");
    scanf("%f",&HRA_perc);
    // input from the user for allowence
    printf("Enter the allowence: ");
    scanf("%f",&allowence);
    // calculating HRA
    HRA = B_s*(HRA_perc/100);  
    // calculating the gross salary
    gross_salary = HRA+allowence+B_s;
    printf("Your gross salary %f",gross_salary);
    return 0;
}


// =) 
