#include <stdio.h>

int main() {
    int n, x;

    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in sorted order: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int ceilIndex = -1;

    // Traverse array to find first element >= x
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceilIndex = i;
            break;
        }
    }

    printf("Index of ceil of %d: %d\n", x, ceilIndex);

    return 0;
}

