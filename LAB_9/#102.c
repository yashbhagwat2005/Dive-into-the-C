#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Function prototype to count characters, words, and lines in a file
void count_file_content(const char *file_name, int *char_count, int *word_count, int *line_count);

int main() {
    // Variable to store the file name
    char file_name[100];
    // Variables to store the counts
    int char_count = 0, word_count = 0, line_count = 0;

    // Input for the file name
    printf("Enter the name of the text file: ");
    scanf("%s", file_name);

    // Call the function to count characters, words, and lines
    count_file_content(file_name, &char_count, &word_count, &line_count);

    // Display the results
    printf("Number of characters: %d\n", char_count);
    printf("Number of words: %d\n", word_count);
    printf("Number of lines: %d\n", line_count);

    return 0;
}

// Function to count characters, words, and lines in a file
void count_file_content(const char *file_name, int *char_count, int *word_count, int *line_count) {
    // Open the file in read mode
    FILE *file = fopen(file_name, "r");

    // Check if the file exists
    if (file == NULL) {
        printf("Error: Could not open the file. Please check the file name and try again.\n");
        exit(1);
    }

    // Variables to track the current character and word status
    char current_char;
    int in_word = 0;

    // Read the file character by character
    while ((current_char = fgetc(file)) != EOF) {
        // Increment character count
        (*char_count)++;

        // Check for line breaks
        if (current_char == '\n') {
            (*line_count)++;
        }

        // Check for word boundaries
        if (isspace(current_char)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            (*word_count)++;
        }
    }

    // Increment line count if the last line doesn't end with a newline
    if (*char_count > 0 && current_char != '\n') {
        (*line_count)++;
    }

    // Close the file
    fclose(file);
}
