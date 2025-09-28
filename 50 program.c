#include <stdio.h>

int main() {
    int i, j, n = 5;

    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= n - i + 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
