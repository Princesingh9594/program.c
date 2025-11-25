#include <stdio.h>

int main() {
    char str[1000];
    int count[26] = {0};  // To store frequency of 'a' to 'z'
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through the string
    while (str[i] != '\0') {
        char ch = str[i];

        // Only consider lowercase letters
        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';
            count[index]++;

            // If frequency becomes 2, this is the first repeating character
            if (count[index] == 2) {
                printf("First repeating lowercase alphabet: %c\n", ch);
                return 0;
            }
        }

        i++;
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}

