#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the size of subarray k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid subarray size.\n");
        return 1;
    }

    printf("First negative integers in each subarray of size %d: ", k);

    // Loop over each window of size k
    for (int i = 0; i <= n - k; i++) {
        int firstNegative = 0; // default if no negative element exists
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNegative = arr[j];
                break;  // first negative found
            }
        }
        printf("%d", firstNegative);
        if (i != n - k)
            printf(" ");
    }

    printf("\n");
    return 0;
}


