#include <stdio.h>

int main() {
    char name[100];
    int age;

    // Take user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character from fgets, if present
    int len = 0;
    while (name[len] != '\0') {
        if (name[len] == '\n') {
            name[len] = '\0';
            break;
        }
        len++;
    }

    printf("Enter your age: ");
    scanf("%d", &age);

    // Open file in write mode
    FILE *file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write name and age to file
    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);

    // Close the file
    fclose(file);

    printf("Data successfully saved to info.txt\n");

    return 0;
}

