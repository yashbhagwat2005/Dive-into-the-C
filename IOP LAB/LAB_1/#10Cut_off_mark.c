#include <stdio.h>
int main(){
    // declaring M(math),P(physics),C(chemistry),E(english),CM(cut off mark)
    float M,P,C,E,CM;
    printf("Calculate the cut off marks of a student using this tool \n");
    // input from the user for the marks scored in math
    printf("Enter your marks in mathematics out off 200: ");
    scanf("%f",&M);
    // input from the user for the marks scored in physics
    printf("Enter your marks in Physics out off 200: ");
    scanf("%f",&P);
    // input from the user for the marks in chemistry
    printf("Enter your marks in Chemistry out off 200: ");
    scanf("%f",&C);
    // input from the user for the marks in entrance exam
    printf("Enter your marks in Entrance exam marks out off 100: ");
    scanf("%f",&CM);
    // calculation of the cut off mark 
    CM = M/2+P/2+C/2+CM;
    printf("The cut off mark of a student is :%f",CM);
    return 0 ;
}


// =)
    