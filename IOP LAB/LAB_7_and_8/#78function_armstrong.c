#include <stdio.h>
#include <math.h>
int checkArmstrong(int n) {
    int original = n, sum = 0, remainder, digits = 0;
    while (n != 0) {
        n /= 10;
        digits++;
    }
    
    n = original;
    while (n != 0) {
        remainder = n % 10;
        sum += pow(remainder, digits);
        n /= 10;
    }
    
    if (sum == original) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (checkArmstrong(num)) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }

    return 0;
}
