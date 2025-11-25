#include <stdio.h>
#include <ctype.h>

int main() {
    char name[1000];
    int i = 0;

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first character if it is a letter
    if (isalpha(name[0])) {
        printf("%c", toupper(name[0]));
    }

    // Loop through the string to find spaces
    while (name[i] != '\0') {
        if (name[i] == ' ' && isalpha(name[i + 1])) {
            printf("%c", toupper(name[i + 1]));
        }
        i++;
    }

    printf("\n");
    return 0;
}

