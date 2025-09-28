#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum, middlePart;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle single-digit numbers
    if (num >= 0 && num < 10) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    int original = num;

    // Count digits
    digits = (int)log10(num);

    // Extract last digit
    lastDigit = num % 10;

    // Extract first digit
    firstDigit = (int)(num / pow(10, digits));

    // Extract middle part (between first and last digit)
    middlePart = (num % (int)pow(10, digits)) / 10;

    // Construct new number: lastDigit * 10^digits + middlePart * 10 + firstDigit
    swappedNum = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
