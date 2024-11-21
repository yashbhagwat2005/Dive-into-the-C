#include <stdio.h>
int main() {
    int a[100], n, x, i, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        printf("Checking element %d at index %d...\n", a[i], i);
        if (a[i] == x) {
            printf("Element %d found at index %d\n", x, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element %d not found\n", x);
    }
    return 0;
}
