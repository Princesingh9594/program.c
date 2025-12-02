#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to print student details
void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s;

    // Input student data
    printf("Enter student's name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Call the function to print details
    printf("\nStudent Details:\n");
    printStudent(s);

    return 0;
}

