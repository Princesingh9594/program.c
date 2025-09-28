#include <stdio.h>

int main() {
    int num, sum = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a perfect number.\n", num);
        return 0;
    }

    // Calculate sum of proper divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if number is perfect
    if (sum == num)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);

    return 0;
}
