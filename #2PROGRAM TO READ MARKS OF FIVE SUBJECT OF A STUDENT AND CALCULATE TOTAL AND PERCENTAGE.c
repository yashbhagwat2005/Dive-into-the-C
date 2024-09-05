#include <stdio.h>
int main(){
    // declaring s_1,s_2,s_3,s_4,s_5,percentage as a float(s represents subject )
    float s_1,s_2,s_3,s_4,s_5,percentage;
    printf("Enter the marks of subject 1 out of 100: ");
    scanf("%f",&s_1);
    printf("Enter the marks of subject 2 out of 100: ");
    scanf("%f",&s_2);
    printf("Enter the marks of subject 3 out of 100: ");
    scanf("%f",&s_3);
    printf("Enter the marks of subject 4 out of 100: ");
    scanf("%f",&s_4);
    printf("Enter the marks of subject 5 out of 100: ");
    scanf("%f",&s_5);
    //calculating the percentage 
    percentage = ((s_1+s_2+s_3+s_4+s_5)/500)*100;
    printf("Total marks secured %f \n",s_1+s_2+s_3+s_4+s_5);
    printf("You have scored %f percentage",percentage);
    return 0;
}

//=)
