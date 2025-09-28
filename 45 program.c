#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    int numerator = 2;
    int denominator = 3;

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Calculate the sum
    for (int i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;

        numerator += 2;      // next even number
        denominator += 4;    // denominator increases by 4
    }

    // Print the result
    printf("Sum of the series up to %d terms is: %.4f\n", n, sum);

    return 0;
}
