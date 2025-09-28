#include <stdio.h>

int main() {
    // Array defining number of stars in each group
    int groups[] = {1, 3, 5, 3, 1};
    int i, j;

    for (i = 0; i < 5; i++) {
        // Print stars for current group
        for (j = 0; j < groups[i]; j++) {
            printf("*\n");
        }

        // Print empty line after each group except the last
        if (i != 4) {
            printf("\n");
        }
    }

    return 0;
}
