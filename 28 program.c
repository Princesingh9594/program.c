#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1; // Use long long for large results
    int foundEven = 0; // To check if there's at least one even number

    // Input n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate product of even numbers
    for (int i = 2; i <= n; i += 2) {
        product *= i;
        foundEven = 1;
    }

    // Output the result
    if (foundEven)
        printf("Product of even numbers from 1 to %d = %llu\n", n, product);
    else
        printf("No even numbers found between 1 and %d.\n", n);

    return 0;
}
