#include <stdio.h>

int main() {
    // Declare variables for two numbers and their results
    float num1, num2, sum, difference, product, quotient;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Calculate sum, difference, product, and quotient
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Check for division by zero
    if (num2 != 0) {
        quotient = num1 / num2;
        printf("The quotient of %.2f and %.2f is: %.2f\n", num1, num2, quotient);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    // Display the results
    printf("The sum of %.2f and %.2f is: %.2f\n", num1, num2, sum);
    printf("The difference of %.2f and %.2f is: %.2f\n", num1, num2, difference);
    printf("The product of %.2f and %.2f is: %.2f\n", num1, num2, product);

    return 0;
}
