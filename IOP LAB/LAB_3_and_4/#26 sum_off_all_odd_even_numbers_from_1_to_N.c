#include <stdio.h>

int main() {
    // declaring n and i as a integer 
    int n, i;
    int sum_odd = 0, sum_even = 0;

    // Input value for N
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Calculate the sum of odd and even numbers between 1 and N
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum_even += i;
        } else {
            sum_odd += i;
        }
    }

    printf("Sum of all even numbers between 1 and %d is: %d\n", n, sum_even);
    printf("Sum of all odd numbers between 1 and %d is: %d\n", n, sum_odd);

    return 0;
}
