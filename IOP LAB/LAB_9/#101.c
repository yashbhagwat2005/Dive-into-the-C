#include <stdio.h>
#include <stdlib.h>

// Function prototype to append student details to a file
void append_student_details(const char *file_name, int num_students);

int main() {
    // File name to which the data will be appended
    char file_name[100] = "LNMIITSTUDENT.dat";
    // Variable to store the number of students to append
    int num_students;

    // Input for the number of students to append
    printf("Enter the number of students to append: ");
    scanf("%d", &num_students);

    // Call the function to append student details
    append_student_details(file_name, num_students);

    printf("Student details have been successfully appended to the file: %s\n", file_name);

    return 0;
}

// Function to append student details to a file
void append_student_details(const char *file_name, int num_students) {
    // Open the file in append mode
    FILE *file = fopen(file_name, "a");

    // Check if the file can be opened
    if (file == NULL) {
        printf("Error: Could not open the file for appending.\n");
        exit(1);
    }

    // Variables to store student details
    int roll_number;
    char name[100];
    float total_marks;

    // Input and append details of each student to the file
    for (int i = 0; i < num_students; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        
        // Input for roll number
        printf("Enter roll number: ");
        scanf("%d", &roll_number);

        // Input for name
        printf("Enter name: ");
        scanf(" %[^\n]s", name); // Use %[^\n] to allow spaces in the name

        // Input for total marks
        printf("Enter total marks: ");
        scanf("%f", &total_marks);

        // Append student details to the file
        fprintf(file, "Roll Number: %d\n", roll
