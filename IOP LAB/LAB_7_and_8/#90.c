#include <stdio.h>

int lengthIncludingSpaces(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int lengthExcludingSpaces(char *str) {
    int length = 0;
    while (*str != '\0') {
        if (*str != ' ') {
            length++;
        }
        str++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Length including spaces: %d\n", lengthIncludingSpaces(str));
    printf("Length excluding spaces: %d\n", lengthExcludingSpaces(str));

    return 0;
}
