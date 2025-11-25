#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers (0 to %d, with one missing): ", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Total sum of numbers from 0 to n
    int totalSum = n * (n + 1) / 2;

    // Sum of elements in the array
    int arrSum = 0;
    for (int i = 0; i < n; i++) {
        arrSum += arr[i];
    }

    int missing = totalSum - arrSum;
    printf("Missing number: %d\n", missing);

    return 0;
}

