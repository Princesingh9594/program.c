#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    printf("Enter the filename to read: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int characters = 0, words = 0, lines = 0;
    char ch;
    int inWord = 0;

    while ((ch = fgetc(file)) != EOF) {
        characters++;  // count every character

        if (ch == '\n') {
            lines++;   // count lines
        }

        // Check word boundaries
        if (isspace(ch)) {
            if (inWord) {
                words++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }

    // If last character is not space, count the last word
    if (inWord) {
        words++;
    }

    fclose(file);

    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    return 0;
}

