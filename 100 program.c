#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    printf("All substrings of the string are:\n");

    // Generate all substrings
    for (int start = 0; start < len; start++) {
        for (int end = start; end < len; end++) {
            // Print substring from str[start] to str[end]
            for (int k = start; k <= end; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}

