#include <stdio.h>

int main() {
    int x, y, n;

    // Input values for x and n
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Compute Y(x, n) based on the value of n
    if (n == 1) {
        y = 1 + x;
    } else if (n == 2) {
        y = 1 + x / n;
    } else if (n == 3) {
        y = 1 + x * n;
    } else if (n > 3 || n < 1) {
        y = 1 + n * x;
    }

    // Output the result
    printf("The value of Y(x, %d) is: %d\n", n, y);

    return 0;
}
