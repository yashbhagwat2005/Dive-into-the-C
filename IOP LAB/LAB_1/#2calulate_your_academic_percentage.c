#include <stdio.h> 
int main(){

    printf("Calculate your total marks and your percentage \n");
    // declearing 5 subjects as variables
    int s_1,s_2,s_3,s_4,s_5;
    // declraing maximum marks as a variable to see if what are the maximum marks can be scored per subject
    int max_marks;
    // decleaing percentage as a float
    float percentage;
    printf("Enter the maximum marks that can be scored in the subjects: ");
    scanf("%d",&max_marks);
    printf("Enter the marks of your first subject: ");
    scanf("%d",&s_1);
    printf("Enter the marks of your second subject: ");
    scanf("%d",&s_2);
    printf("Enter the marks of your third subject: ");
    scanf("%d",&s_3);
    printf("Enter the marks of your fourth subject: ");
    scanf("%d",&s_4);
    printf("Enter the marks of your fifth subject: ");
    scanf("%d",&s_5);
    // Calculate and print the total marks
    float total_marks = (s_1 + s_2 + s_3 + s_4 + s_5);
    printf("Total marks of all the subjects: %f \n", total_marks);

    // calculation for percentage
    percentage = ((float)total_marks / (max_marks * 5)) * 100;
    printf("Percentage you got: %f", percentage);

    return 0;

}

// =) 
