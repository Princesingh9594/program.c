#include <stdio.h>

int main() {
    int year;

    // Ask the user to input a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year using conditional statements
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a leap year.\n", year);
            } else {
                printf("%d is not a leap year.\n", year);
            }
        } else {
            printf("%d is a leap year.\n", year);
        }
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
