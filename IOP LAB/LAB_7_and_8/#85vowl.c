#include <stdio.h>

int isVowel(char c) {
    c = (c >= 'a' && c <= 'z') ? c : (c + 'a' - 'A'); // Convert to lowercase
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1;
    }
    return 0;
}

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (isVowel(c)) {
        printf("%c is a vowel.\n", c);
    } else {
        printf("%c is not a vowel.\n", c);
    }

    return 0;
}
