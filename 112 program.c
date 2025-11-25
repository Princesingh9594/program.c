#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSoFar = arr[0]; // stores max subarray sum found so far
    int maxEndingHere = arr[0]; // stores max subarray sum ending at current position

    for (int i = 1; i < n; i++) {
        // Either extend the previous subarray or start new from arr[i]
        if (maxEndingHere + arr[i] > arr[i])
            maxEndingHere = maxEndingHere + arr[i];
        else
            maxEndingHere = arr[i];

        if (maxEndingHere > maxSoFar)
            maxSoFar = maxEndingHere;
    }

    printf("Maximum sum of contiguous subarray: %d\n", maxSoFar);

    return 0;
}

