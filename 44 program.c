#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int numerator = 1, denominator = 2;

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;

        numerator += 2;     // next odd number
        denominator += 2;   // next even number
    }

    // Output the result
    printf("Sum of the series up to %d terms is: %.4f\n", n, sum);

    return 0;
}
