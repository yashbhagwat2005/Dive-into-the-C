#include <stdio.h>

int countWords(char *str) {
    int count = 0;
    int inWord = 0;
    
    while (*str != '\0') {
        if (*str != ' ' && *str != '\t' && *str != '\n') {
            if (inWord == 0) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int wordCount = countWords(str);
    printf("Number of words: %d\n", wordCount);

    return 0;
}
