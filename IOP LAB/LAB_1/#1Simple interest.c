#include <stdio.h>
int main(){
    printf("Calculate the simple intrest by entring principle,rate,time\n");
    // variables for principal,rate,time
    /*making an extra variable to ask the unit of the rate which can be per day,annum,month*/
    float p,r,t;
    int unit_of_rate;
    // input from the user for principle
    printf("Enter the principal: ");
    scanf("%f",&p);
    // input from the user for the rate
    printf("Enter rate: ");
    scanf("%f",&r);
    // input from the user for the unit of the rate
    printf("If the rate of the simple intrest is per day enter 1 \n");
    printf("if the rate of the simple intrest is per month enter  2 \n");
    printf("if the rate of the simple intrest is per year enter 3:  \n");
    scanf("%d",&unit_of_rate);
    /* using switch case to take input from the user for time which can be in months,date,years and gives the correct simple intrest */
    switch(unit_of_rate)
    { 
    case 1: printf("Enter the time in number of day(s): ");
            scanf("%f",&t);
            printf("The simple intrest is %f",(p*r*t)/100);
            break;
    case 2: printf("Enter the time in number of month(s): ");
            scanf("%f",&t);
            printf("The simple intrest is %f",(p*r*t)/100);
            break;
    case 3: t = t;
            printf("Enter the time in number of year(s): ");
            scanf("%f",&t);
            printf("The simple intrest is %f",(p*r*t)/100);
            break;
    default : printf("Enter the correct number");
            return 1;
    }
    return 0;
    
    
}


// =)