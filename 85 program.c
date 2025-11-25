#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, j, temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find string length manually
    while (str[i] != '\0') {
        i++;
    }

    // If fgets adds newline, remove it
    if (str[i - 1] == '\n') {
        str[i - 1] = '\0';
        i--;
    }

    // Reverse using two-pointer method
    j = i - 1;          // last index
    int start = 0;

    while (start < j) {
        temp = str[start];
        str[start] = str[j];
        str[j] = temp;

        start++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}

