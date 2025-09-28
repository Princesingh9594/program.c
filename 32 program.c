#include <stdio.h>

int main() {
    int num, original, reversed = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Reverse the number
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    // Check palindrome
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
