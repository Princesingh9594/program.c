#include <stdio.h>

// Function to find GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, lcm, gcdValue;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Get absolute values to handle negative numbers
    int a = (num1 < 0) ? -num1 : num1;
    int b = (num2 < 0) ? -num2 : num2;

    gcdValue = gcd(a, b);

    // Calculate LCM using the formula
    lcm = (a / gcdValue) * b;

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
