#include <stdio.h>

int main() {
    int number;

    // Ask the user to input an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even or odd using if-else
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
