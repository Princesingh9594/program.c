#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[500];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    // Convert first character to uppercase if it's a letter
    if (len > 0 && isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    // Convert rest of characters after first character
    for (int i = 1; i < len; i++) {
        // If previous character is '.' and current is a letter, make uppercase
        if (str[i - 1] == '.' && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
    }

    printf("Sentence case: %s\n", str);

    return 0;
}

