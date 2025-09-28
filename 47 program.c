#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows
    for (i = 1; i <= 5; i++) {
        // Inner loop for printing stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}
