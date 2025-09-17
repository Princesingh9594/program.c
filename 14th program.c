#include <stdio.h>

int main() {
    char ch;

    // Ask the user to input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a vowel or consonant
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}
