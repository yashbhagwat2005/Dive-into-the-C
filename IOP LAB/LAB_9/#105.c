#include <stdio.h>
#include <string.h>

// Function prototype for generating permutations
void permute(char *str, int start, int end);

int main() {
    // Variable to store the string
    char str[100];

    // Input for the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    int length = strlen(str);

    // Call the permutation function
    printf("All permutations of the string are:\n");
    permute(str, 0, length - 1);

    return 0;
}

// Function to swap two characters using pointers
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Function to generate permutations of the string
void permute(char *str, int start, int end) {
    if (start == end) {
        // Print the current permutation
        printf("%s\n", str);
    } else {
        // Loop through each character to generate permutations
        for (int i = start; i <= end; i++) {
            // Swap the current character with the start character
            swap((str + start), (str + i));

            // Recursively generate permutations for the rest of the string
            permute(str, start + 1, end);

            // Backtrack: undo the swap
            swap((str + start), (str + i));
        }
    }
}
