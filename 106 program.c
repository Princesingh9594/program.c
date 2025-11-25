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

    printf("Next greater elements: ");

    for (int i = 0; i < n; i++) {
        int nge = -1;  // default if no greater element exists
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nge = arr[j];
                break;  // first greater element found
            }
        }
        printf("%d", nge);
        if (i != n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}

