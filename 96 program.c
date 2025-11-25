#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, start, end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    i = 0;
    while (str[i] != '\0') {
        // Find start of a word
        start = i;

        // Move i to the end of the word
        while (str[i] != ' ' && str[i] != '\0') {
            i++;
        }

        end = i - 1;

        // Reverse the word in place
        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }

        // Skip the space
        if (str[i] == ' ')
            i++;
    }

    printf("Sentence with reversed words: %s\n", str);

    return 0;
}

