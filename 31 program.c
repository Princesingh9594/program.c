#include <stdio.h>

int main() {
    int num, i;
    int binary[32];  // Array to store binary digits (assuming 32-bit int)
    int index = 0;

    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Handle zero explicitly
    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    // Convert decimal to binary
    while (num > 0) {
        binary[index] = num % 2;  // Store remainder (0 or 1)
        num = num / 2;
        index++;
    }

    // Print binary number in reverse order
    printf("Binary representation: ");
    for (i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
