#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Total sum of numbers from 1 to n
    int totalSum = n * (n + 1) / 2;
    int leftSum = 0;
    int pivot = -1;

    for (int x = 1; x <= n; x++) {
        leftSum += x;               // sum from 1 to x
        int rightSum = totalSum - (leftSum - x); // sum from x to n

        if (leftSum == rightSum) {
            pivot = x;
            break; // pivot found
        }
    }

    printf("Pivot integer: %d\n", pivot);

    return 0;
}

