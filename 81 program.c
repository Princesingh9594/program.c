#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read input string

    // Count characters manually
    while (str[count] != '\0') {
        count++;
    }

    // Subtract 1 if newline is included from fgets()
    if (str[count - 1] == '\n')
        count--;

    printf("Number of characters = %d\n", count);

    return 0;
}
