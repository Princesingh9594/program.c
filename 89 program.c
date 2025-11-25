
#include <stdio.h>

int main() {
    char str[1000];
    char ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    // Loop through the string
    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("The character '%c' appears %d times in the string.\n", ch, count);

    return 0;
}
