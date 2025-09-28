#include <stdio.h>

int main() {
    int n, pos, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];  // +1 for new element

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    // Shift elements to right from position
    for (int i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos - 1] = key;  // Insert element

    n++;  // Increase array size

    // Print updated array
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

