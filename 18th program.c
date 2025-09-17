#include <stdio.h>

int main() {
    float percentage;

    // Ask the user to input the percentage
    printf("Enter the percentage (0-100): ");
    scanf("%f", &percentage);

    // Check if the percentage is within the valid range
    if (percentage < 0 || percentage > 100) {
        printf("Invalid input! Percentage should be between 0 and 100.\n");
    } else {
        // Assign grades based on the percentage
        if (percentage >= 90) {
            printf("Grade A\n");
        } else if (percentage >= 80) {
            printf("Grade B\n");
        } else if (percentage >= 70) {
            printf("Grade C\n");
        } else if (percentage >= 60) {
            printf("Grade D\n");
        } else {
            printf("Grade F\n");
        }
    }

    return 0;
}
