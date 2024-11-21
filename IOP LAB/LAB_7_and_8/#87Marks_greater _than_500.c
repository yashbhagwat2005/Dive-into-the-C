#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

void displayPassStudents(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        if (students[i].marks > 500) {
            printf("Student Name: %s\n", students[i].name);
            printf("Marks: %d\n\n", students[i].marks);
        }
    }
}

int main() {
    struct Student students[10];
    int n = 10;

    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        gets(students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
        getchar();
    }

    printf("\nStudents who passed (marks > 500):\n");
    displayPassStudents(students, n);

    return 0;
}
