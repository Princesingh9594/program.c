#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, original, remainder, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Calculate sum of factorial of digits
    while (num > 0) {
        remainder = num % 10;
        sum += factorial(remainder);
        num /= 10;
    }

    // Check if number is strong number
    if (sum == original)
        printf("%d is a Strong Number.\n", original);
    else
        printf("%d is not a Strong Number.\n", original);

    return 0;
}
