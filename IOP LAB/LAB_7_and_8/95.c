#include <stdio.h>
#include <string.h>

// Maximum number of employees
#define MAX_EMPLOYEES 50

// Function prototypes
void inputEmployeeDetails(int employee_numbers[], char employee_names[][100], float basic_pays[], int count);
void displayEmployeeDetails(int employee_numbers[], char employee_names[][100], float basic_pays[], int count);

int main() {
    int employee_numbers[MAX_EMPLOYEES];  // Array for employee numbers
    char employee_names[MAX_EMPLOYEES][100]; // Array for employee names
    float basic_pays[MAX_EMPLOYEES];  // Array for basic pay of employees
    int number_of_employees;  // Total number of employees

    // Input number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &number_of_employees);

    // Validate the number of employees
    if (number_of_employees > MAX_EMPLOYEES || number_of_employees <= 0) {
        printf("Invalid number of employees.\n");
        return 1; // Exit with an error
    }

    // Input details of all employees
    inputEmployeeDetails(employee_numbers, employee_names, basic_pays, number_of_employees);

    // Display details of all employees
    displayEmployeeDetails(employee_numbers, employee_names, basic_pays, number_of_employees);

    return 0;
}

// Function to input details for all employees
void inputEmployeeDetails(int employee_numbers[], char employee_names[][100], float basic_pays[], int count) {
    for (int i = 0; i < count; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);

        printf("Employee Number: ");
        scanf("%d", &employee_numbers[i]);

        printf("Employee Name: ");
        scanf(" %s", employee_names[i]);

        printf("Basic Pay: ");
        scanf("%f", &basic_pays[i]);
    }
}

// Function to display details of all employees
void displayEmployeeDetails(int employee_numbers[], char employee_names[][100], float basic_pays[], int count) {
    printf("\nEmployee Details:\n");

    for (int i = 0; i < count; i++) {
        printf("\nEmployee Number: %d\n", employee_numbers[i]);
        printf("Employee Name: %s\n", employee_names[i]);
        printf("Basic Pay: %.2f\n", basic_pays[i]);
    }
}
