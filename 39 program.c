#include <stdio.h>

int main() {
    int num, remainder;
    unsigned long long product = 1;
    int foundOdd = 0;  // To check if there is at least one odd digit

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Extract digits and multiply odd digits
    while (num > 0) {
        remainder = num % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            foundOdd = 1;
        }
        num /= 10;
    }

    if (foundOdd)
        printf("Product of odd digits of %d is %llu\n", original, product);
    else
        printf("No odd digits found in %d.\n", original);

    return 0;
}
