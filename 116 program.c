#include <stdio.h>

int main() {
    int n, target;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d positive integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &target);

    int found = 0;

    // Brute-force search for two indices
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break; // break inner loop
            }
        }
        if (found) break; // break outer loop if pair found
    }

    if (!found) {
        printf("-1 -1\n");
    }

    return 0;
}

