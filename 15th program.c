#include <stdio.h>
#include <ctype.h>  // For isdigit(), isalpha(), isupper(), and islower()

int main() {
    char ch;

    // Ask the user to input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is an uppercase alphabet
    if (isupper(ch)) {
        printf("%c is an uppercase alphabet.\n", ch);
    }
    // Check if the character is a lowercase alphabet
    else if (islower(ch)) {
        printf("%c is a lowercase alphabet.\n", ch);
    }
    // Check if the character is a digit
    else if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    }
    // Otherwise, it's a special character
    else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
