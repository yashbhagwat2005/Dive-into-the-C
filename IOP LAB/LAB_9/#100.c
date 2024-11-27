#include <stdio.h>
#include <stdlib.h>

// Function prototype to store student details in a file
void store_student_details(const char *file_name, int num_students);

int main() {
    // Variable to store the file name
    char file_name[100] = "LNMIITSTUDENT.java";
    // Variable to store the number of students
    int num_students;

    // Input for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Call the function to store student details
    store_student_details(file_name, num_students);

    printf("Student details have been successfully saved to the file: %s\n", file_name);

    return 0;
}

// Function to store student details in a file
void store_student_details(const char *file_name, int num_students) {
    // Open the file in write mode
    FILE *file = fopen(file_name, "w");

    // Check if the file can be opened
    if (file == NULL) {
        printf("Error: Could not create or open the file.\n");
        exit(1);
    }

    // Variables to store student details
    int roll_number;
    char name[100];
    float total_marks;

    // Input and write details of each student
