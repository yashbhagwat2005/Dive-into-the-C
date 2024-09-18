#include <stdio.h>

int main() {
    // declaring a(first input from the user),b(second input from the user),c(third input from the user) as an integer 
    int a, b, c;
    // input for "a" from the user
    printf("Enter the first number: ");
    scanf("%d", &a);
    // input for "b" from the user
    printf("Enter the second number: ");
    scanf("%d", &b);
    // input for "c" from the user
    printf("Enter the third number: ");
    scanf("%d", &c);
    // logic to find the greatest between the three numbers using && operators
    if (a > b && a > c) {
        printf("%d is the greatest between the three\n", a);
    } else if (b > c && b > a) {
        printf("%d is the greatest between the three\n", b);
    } else if (c > a && c > b) {
        printf("%d is the greatest between the three\n", c);
    } else {
        printf("All of them are equal\n");
    }

    return 0;
}


// =)
