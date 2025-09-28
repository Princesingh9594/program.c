#include <stdio.h>

int main() {
    int n, key, i, pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to delete: ");
    scanf("%d", &key);

    // Find the position of element to delete
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Element %d not found in the array.\n", key);
        return 0;
    }

    // Shift elements left from pos
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;  // Reduce size

    // Print updated array
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
