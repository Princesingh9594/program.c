#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input data for all students
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Find student with highest marks
    int highestIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[highestIndex].marks) {
            highestIndex = i;
        }
    }

    // Print student with highest marks
    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", students[highestIndex].name);
    printf("Roll Number: %d\n", students[highestIndex].roll_no);
    printf("Marks: %.2f\n", students[highestIndex].marks);

    return 0;
}

