#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // Read string (including spaces)

    // Print each character on a new line
    while (str[i] != '\0') {
        if (str[i] != '\n')          // ignore newline character from fgets
            printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
