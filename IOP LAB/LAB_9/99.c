#include <stdio.h>
#include <stdlib.h>

// Function prototype to count vowels in a file
int count_vowels_in_file(FILE *file);

int main() {
    // Variable to store the file name
    char file_name[100];
    // Variable to store the count of vowels
    int vowel_count;

    // Input for the file name
    printf("Enter the name of the file to read: ");
    scanf("%s", file_name);

    // Open the file in read mode
    FILE *file = fopen(file_name, "r");

    // Check if the file exists
    if (file == NULL) {
        printf("Error: Could not open the file. Please check the file name and try again.\n");
        return 1;
    }

    // Call the function to count vowels
    vowel_count = count_vowels_in_file(file);

    // Display the number of vowels
    printf("The number of vowels in the file is: %d\n", vowel_count);

    // Close the file
    fclose(file);

    return 0;
}

// Function to count the vowels in a file
int count_vowels_in_file(FILE *file) {
    char character;
    int count = 0;

    // Loop through each character in the file
    while ((character = fgetc(file)) != EOF) {
        // Convert character to lowercase for easy comparison
        character = tolower(character);

        // Check if the character is a vowel
        if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == '
