#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // reads the whole line, including spaces

    while (str[i] != '\0') {
        if (str[i] != '\n')           // ignore newline from fgets
            printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
