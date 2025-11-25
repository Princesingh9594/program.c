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

    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    int pivotIndex = -1;

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i]; // sum of elements to the right
        if (leftSum == rightSum) {
            pivotIndex = i;
            break;  // leftmost pivot
        }
        leftSum += arr[i];
    }

    printf("Pivot index: %d\n", pivotIndex);

    return 0;
}

