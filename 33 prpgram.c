#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, digits = 0;
    double sum = 0.0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count digits
    while (original != 0) {
        digits++;
        original /= 10;
    }

    original = num;

    // Calculate sum of digits raised to the power of digits count
    while (original != 0) {
        remainder = original % 10;
        sum += pow(remainder, digits);
        original /= 10;
    }

    // Check if number is Armstrong
    if ((int)sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
