#include <stdio.h>
#include <string.h>

int main() {
    char binary[65];  // Support up to 64 bits + null terminator

    // Input binary number as a string
    printf("Enter a binary number: ");
    scanf("%s", binary);

    int length = strlen(binary);

    // Calculate 1's complement by flipping bits
    for (int i = 0; i < length; i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        } else {
            // Invalid character found
            printf("Error: Invalid binary number.\n");
            return 1;
        }
    }

    printf("1's complement: %s\n", binary);

    return 0;
}
