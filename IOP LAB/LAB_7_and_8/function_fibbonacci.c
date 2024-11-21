#include <stdio.h>
void generateFibonacci(int n) {
    int a = 0, b = 1, next, i;
    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}
int main() {
    printf("First 5 Fibonacci numbers: ");
    generateFibonacci(5);
    printf("First 10 Fibonacci numbers: ");
    generateFibonacci(10);
    printf("First 15 Fibonacci numbers: ");
    generateFibonacci(15);
    return 0;
}
