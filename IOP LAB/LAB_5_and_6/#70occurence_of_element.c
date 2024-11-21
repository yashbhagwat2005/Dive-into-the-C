#include <stdio.h>
int main() {
    int a[100], n, x, i, count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to count: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            count++;
        }
    }
    printf("Element %d occurred %d times\n", x, count);
    return 0;
}
