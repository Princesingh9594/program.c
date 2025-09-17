#include <stdio.h>

int main() {
    int number;

    // Ask the user to input an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Nested if-else to check whether the number is positive, negative, or zero
    if (number > 0) {
        printf("%d is positive.\n", number);
    } else {
        if (number < 0) {
            printf("%d is negative.\n", number);
        } else {
            printf("%d is zero.\n", number);
        }
    }

    return 0;
}
