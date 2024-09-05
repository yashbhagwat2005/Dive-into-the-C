
#include <stdio.h>
int main() {
    char u_operator;
    float num_1, num_2;

    // input from user to enter an operator
    printf("Enter an operator (+, -, /): ");
    scanf(" %c", &u_operator); 

    // input from the user for the two numbers
    printf("Enter the first number: ");
    scanf("%f", &num_1);
    printf("Enter the second number: ");
    scanf("%f", &num_2);

    // Perform the operation based on the operator
    switch (u_operator) {
        case '+':
            printf("The output is %f\n", num_1 + num_2);
            break;
        case '-':
            printf("The output is %f\n", num_1 - num_2);
            break;
        case '/':
            if (num_2 != 0) { // Check to prevent division by zero
                printf("The output is %f\n", num_1 / num_2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1; 
    }

    return 0; 
}


// =)

