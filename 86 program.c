#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, j, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find string length manually
    while (str[i] != '\0') {
        i++;
    }

    // Remove newline character if present
    if (str[i - 1] == '\n') {
        str[i - 1] = '\0';
        i--;
    }

    // Initialize pointers
    j = i - 1;

    // Check palindrome
    int start = 0;
    while (start < j) {
        if (str[start] != str[j]) {
            isPalindrome = 0;
            break;
        }
        start++;
        j--;
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

