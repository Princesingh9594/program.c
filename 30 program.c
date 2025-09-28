#include <stdio.h>

int main() {
    int num, reversed = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; // Store original number for display

    // Reverse the number
    while (num != 0) {
        int digit = num % 10;            // Get the last digit
        reversed = reversed * 10 + digit; // Append digit
        num = num / 10;                   // Remove last digit
    }

    // Output the reversed number
    printf("Reversed number of %d is %d\n", original, reversed);

    return 0;
}
