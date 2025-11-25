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

    printf("Maximum elements in each subarray of size %d: ", k);

    // Loop over each window of size k
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];  // first element of window
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }
        printf("%d", max);
        if (i != n - k)
            printf(" ");
    }

    printf("\n");
    return 0;
}

