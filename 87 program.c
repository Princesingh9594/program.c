#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through the string until null character
    while (str[i] != '\0') {
        char ch = str[i];

        if (ch >= '0' && ch <= '9') {
            digits++;
        } 
        else if (ch == ' ' || ch == '\n') {  // consider newline as space
            spaces++;
        } 
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // do nothing for alphabets
        } 
        else {
            special++;
        }

        i++;
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}

