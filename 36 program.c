#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Make sure both numbers are positive
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    // Euclidean algorithm to find GCD
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF (GCD) = %d\n", a);

    return 0;
}
