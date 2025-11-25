#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        // If character is lowercase a–z, convert to uppercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');   // or str[i] = str[i] - 32;
        }
        i++;
    }

    printf("Uppercase string: %s", str);

    return 0;
}
