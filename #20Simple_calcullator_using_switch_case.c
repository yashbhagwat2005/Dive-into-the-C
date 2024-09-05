#include <stdio.h>

int main() {
    int u_operator;
    float num_1, num_2;

    printf("Welcome to the calculator. Please choose an operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Division (/)\n");

    printf("Please enter the number for the operation: ");
    scanf("%d", &u_operator);

    printf("Enter the first number: ");
    scanf("%f", &num_1);
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
        default:
            printf("Error: Invalid choice\n");
            return 1;
    }

    return 0;
}
