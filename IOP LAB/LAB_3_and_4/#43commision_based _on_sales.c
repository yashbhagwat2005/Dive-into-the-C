#include <stdio.h>
int main(){
    // declaring salary,commision,total_salary(salary+commision),salaes as a float variables
    float salary,commision,total_salary,sales;
    // input from the user for salary
    printf("Enter your salary per month: ");
    scanf("%f",&salary);
    //input from the user for sales
    printf("Enter your sales:  ");
    scanf("%f",&sales);
    // commision based on the sales
    if(salary<=500){
        commision = sales*(0.05);
        total_salary = salary+commision;
        printf("The commisionsion on your sales of ruppes %f is rupees %f \n",sales,commision);
        printf("Your total salary for (this month this is including the commision is rupees) %f",total_salary);
    }else if (500<salary<=2000){
        commision = sales*(0.1)+35;
        total_salary = salary+commision;
        printf("The commision on your sales of ruppes %f is  rupees %f\n",sales,commision);
        printf("Your total salary for this month (this is including the commision is rupees) %f",total_salary);
    }else if (sales>5000){
        commision = sales*(0.125)+185;
        total_salary = salary+commision;
        printf("The commision on your sales of rupees %f is rupees %f\n",sales,commision);
        printf("Your total salary for this month (this is including the commision is rupees) %f",total_salary);
        
    }
}


// =)
