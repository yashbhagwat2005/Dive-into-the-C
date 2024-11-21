#include <stdio.h>
#include <string.h>

void sortStrings(char *arr[], int n) {
    char *temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar();  

    char *arr[n];
    char str[100];

    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        gets(str);
        arr[i] = strdup(str);
    }

    sortStrings(arr, n);

    printf("\nSorted strings in ascending order:\n");
    for (int i = 0; i < n; i++) {
        puts(arr[i]);
    }

    return 0;
}
