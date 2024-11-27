#include <stdio.h>
#include <string.h>

// Function prototype to generate permutations
void permute(char *str, int start, int end);

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

            // Backtrack: undo the swap to restore the original string
            swap((str + start), (str + i));
        }
    }
}

int main() {
    // Variable to store the string
    char str[100];

    // Input for the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    int length = strlen(str);

    // Sort the string to ensure permutations are in lexicographical order
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (str[i] > str[j]) {
                swap(&str[i], &str[j]);
            }
        }
    }

    // Call the permutation function
    printf("The permutations of the string are:\n");
    permute(str, 0, length - 1);

    return 0;
}
