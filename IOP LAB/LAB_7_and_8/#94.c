#include <stdio.h>

void reverseString(char *str1, char *str2) {
    char *end = str1;
    while (*end != '\0') {
        end++;
    }
    end--;

    while (end >= str1) {
        *str2 = *end;
        str2++;
        end--;
    }
    *str2 = '\0'; // Null-terminate the reversed string
}

int main() {
    char str1[] = "SVNITJAVA";
    char str2[100];

    reverseString(str1, str2);
    
    printf("Original string: %s\n", str1);
    printf("Reversed string: %s\n", str2);

    return 0;
}
