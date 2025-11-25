#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student data
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]s", students[i].name);  // Read full line including spaces
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // Write to file
    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "%s %d %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }
    fclose(file);

    printf("\nData successfully saved to students.txt\n\n");

    // Read from file and display
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("Student Records:\n");
    while (fscanf(file, "%s %d %f", students[0].name, &students[0].roll, &students[0].marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", students[0].name, students[0].roll, students[0].marks);
    }

    fclose(file);
    return 0;
}

