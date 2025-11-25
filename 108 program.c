#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int answer[n];

    // Calculate total product first
    int totalProduct = 1;
    int zeroCount = 0;  // count zeros in array

    for (int i = 0; i < n; i++) {
        if (nums[i] != 0)
            totalProduct *= nums[i];
        else
            zeroCount++;
    }

    for (int i = 0; i < n; i++) {
        if (zeroCount > 1) {
            // If more than one zero, all products are zero
            answer[i] = 0;
        } else if (zeroCount == 1) {
            // If exactly one zero
            if (nums[i] == 0)
                answer[i] = totalProduct;  // position of zero gets product of other elements
            else
                answer[i] = 0;
        } else {
            // No zeros
            answer[i] = totalProduct / nums[i];
        }
    }

    // Print the result
    printf("Product array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}

