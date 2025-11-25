#include <stdio.h>

int main() {
    char filename[100];
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try opening the file in read mode
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: File '%s' does not exist or cannot be opened.\n", filename);
        return 1;
    }

    printf("Contents of '%s':\n", filename);

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);  // Display the file content
    }

    fclose(file);
    return 0;
}

