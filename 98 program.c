#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[1000];
    int i = 0, len;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    name[strcspn(name, "\n")] = '\0';

    len = strlen(name);

    // Print initials for all words except the last
    while (i < len) {
        // Skip any leading spaces
        while (i < len && name[i] == ' ')
            i++;

        // Find end of current word
        int start = i;
        while (i < len && name[i] != ' ')
            i++;
        int end = i - 1;

        // Check if this is the last word
        int temp = i;
        while (temp < len && name[temp] == ' ') temp++;
        if (temp >= len) {
            // Last word (surname) → print fully
            for (int j = start; j <= end; j++)
                printf("%c", name[j]);
            break;
        } else {
            // Print first letter of word as initial
            if (isalpha(name[start]))
                printf("%c ", toupper(name[start]));
        }
    }

    printf("\n");
    return 0;
}

