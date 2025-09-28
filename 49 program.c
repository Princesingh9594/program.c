#include <stdio.h>

int main() {
    int i, j;

    // Loop for each row
    for (i = 1; i <= 5; i++) {
        // Print numbers from (6 - i) to 5
        for (j = 6 - i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}
