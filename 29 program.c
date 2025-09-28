#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1; // For large results

    // Input the number
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
