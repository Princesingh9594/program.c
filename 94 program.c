#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char longest[1000];
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int i = 0, start = 0;
    int len = 0;

    while (1) {
        // End of word or end of string
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            if (len > maxLength) {
                maxLength = len;
                int k;
                for (k = 0; k < len; k++) {
                    longest[k] = str[start + k];
                }
                longest[k] = '\0';
            }
            len = 0;
            start = i + 1;
        } else {
            len++;
        }

        if (str[i] == '\0' || str[i] == '\n')
            break;

        i++;
    }

    printf("Longest word: %s\n", longest);

    return 0;
}

