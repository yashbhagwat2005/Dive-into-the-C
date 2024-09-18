#include <stdio.h>

int main() {
    // declaring u_operator(input from the user where the user specifies the operator) as a integer
    int u_operator;
    // declaring num_1,num_2(2 numbers from the user to use the operator between them) as a float
    float num_1, num_2;
    // displaying the menu for the user 
    printf("Welcome to the calculator. Please choose an operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Division (/)\n");
    // user input for u_operator
    printf("Please enter the number for the operation: ");
    scanf("%d", &u_operator);
    //input for num_1
    printf("Enter the first number: ");
    scanf("%f", &num_1);
    // input for num_2
    printf("Enter the second number: ");
    scanf("%f", &num_2);
    switch (u_operator) {
        case 1:
            printf("The output is %f\n", num_1 + num_2);
            break;
        case 2:
            printf("The output is %f\n", num_1 - num_2);
            break;
        case 3:
            if (num_2 != 0) {
                printf("The output is %f\n", num_1 / num_2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        // if the user enters a number other than the given options in the menu then it will print error
        default:
            printf("Error: Invalid choice\n");
            return 1;
    }

    return 0;
}
