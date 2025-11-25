
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        // Toggle lowercase to uppercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // or str[i] = str[i] - 32;
        }
        // Toggle uppercase to lowercase
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');  // or str[i] = str[i] + 32;
        }
        // Leave other characters unchanged
        i++;
    }

    printf("Toggled string: %s", str);

    return 0;
}
