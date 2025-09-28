#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the first n odd numbers
    for (int i = 1, count = 0; count < n; i += 2) {
        sum += i;
        count++;
    }

    // Output the result
    printf("Sum of the first %d odd numbers = %d\n", n, sum);

    return 0;
}
