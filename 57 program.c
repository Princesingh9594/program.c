#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Output the sum
    printf("Sum of array elements = %d\n", sum);

    return 0;
}
