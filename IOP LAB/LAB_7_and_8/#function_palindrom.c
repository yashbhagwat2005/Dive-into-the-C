#include <stdio.h>

int checkPalindrome(int n) {
    int reversed = 0, original, remainder;
    original = n;
    
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    if (original == reversed) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (checkPalindrome(num)) {
        printf("%d is a palindrome\n", num);
    } else {
        printf("%d is not a palindrome\n", num);
    }

    return 0;
}
