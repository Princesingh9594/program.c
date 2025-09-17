#include <stdio.h>

int main() {
    int n, sum;

    // Ask the user for the number of terms (n)
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the input is valid
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;  // Exit the program with an error code
    }

    // Calculate the sum of first n natural numbers using the formula: n(n + 1)/2
    sum = n * (n + 1) / 2;

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
