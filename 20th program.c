#include <stdio.h>

int main() {
    int day;

    // Ask the user to input a number between 1 and 7
    printf("Enter a number between 1 and 7: ");
    scanf("%d", &day);

    // Use switch-case to display the corresponding day of the week
    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
