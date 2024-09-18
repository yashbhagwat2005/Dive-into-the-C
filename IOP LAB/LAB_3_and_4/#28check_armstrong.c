#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder, n = 0;
    double result = 0.0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    // Calculate the number of digits in the number
    while (originalNumber != 0) {
        originalNumber /= 10;
        n++;
    }

    originalNumber = number;

    // Calculate the sum of the nth powers of each digit
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // Check if the sum of nth powers of digits equals the original number
    if ((int)result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}


// =)
