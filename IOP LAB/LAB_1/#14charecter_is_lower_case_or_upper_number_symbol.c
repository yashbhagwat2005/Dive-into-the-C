#include <stdio.h>

int main() {
    // declaring char_u_input as  a charecter variable
    char char_u_input;
    // int_u_input is a integer variable
    int int_u_input;
    // input from the user 
    printf("Enter a character to check if it is a capital letter, lower case letter, a digit, or a symbol: ");
    scanf("%c", &char_u_input);
    // accesesing the ascii code 
    int_u_input = char_u_input;
    // the range of capital letter is (65,90)
    if (65 <= int_u_input && int_u_input <= 90) {
        printf("%c is an upper case letter\n", char_u_input);
    // the range of lower case letters is (97,122)
    } else if (97 <= int_u_input && int_u_input <= 122) {
        printf("%c is a lower case letter\n", char_u_input);
    // the range of the numbers 0-9 is (48,57)
    } else if (48 <= int_u_input && int_u_input <= 57) {
        printf("%c is a digit\n", char_u_input);
    } else {
        printf("%c is a symbol\n", char_u_input);
    }

    return 0;
}


// =)

