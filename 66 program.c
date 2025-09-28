#include <stdio.h>

int main() {
    int n, key;

    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    int arr[n + 1];  // +1 for the new element

    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    int i;
    // Find the position to insert
    for (i = n - 1; (i >= 0 && arr[i] > key); i--) {
        arr[i + 1] = arr[i];  // Shift elements right
    }
    arr[i + 1] = key;  // Insert key

    n++;  // Increase size

    // Print the updated array
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
