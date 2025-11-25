#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (numbers from 1 to n-1 with one repeated): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sum of numbers from 1 to n-1
    int expectedSum = (n - 1) * n / 2;

    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += arr[i];  // single iteration to compute sum
    }

    int repeated = actualSum - expectedSum;
    printf("Repeated element: %d\n", repeated);

    return 0;
}

