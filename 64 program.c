#include <stdio.h>

int main() {
    int num, temp;
    int digitCount[10] = {0};  // To count digits 0-9

    printf("Enter an integer number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    temp = num;

    // Count the frequency of each digit
    if (temp == 0) {
        digitCount[0]++;
    }
    while (temp > 0) {
        int digit = temp % 10;
        digitCount[digit]++;
        temp /= 10;
    }

    // Find the digit with maximum occurrence
    int maxCount = digitCount[0];
    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            maxDigit = i;
        }
    }

    printf("Digit %d occurs the most times: %d times\n", maxDigit, maxCount);

    return 0;
}
