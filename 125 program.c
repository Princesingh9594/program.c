#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    printf("Enter the filename to append text: ");
    scanf("%s", filename);

    // Clear input buffer
    getchar();

    // Open file in append mode
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char text[500];
    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);

    // Remove trailing newline from fgets
    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n') {
        text[len - 1] = '\0';
    }

    // Append text to file
    fprintf(file, "%s\n", text);

    fclose(file);

    printf("Text successfully appended to %s\n", filename);

    return 0;
}

