#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous greater elements: ");

    for (int i = 0; i < n; i++) {
        int pge = -1;  // default if no previous greater element exists
        // Loop to the left of current element
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                pge = arr[j];
                break;  // nearest greater element on left found
            }
        }
        printf("%d", pge);
        if (i != n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}

