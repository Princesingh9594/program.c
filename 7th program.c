#include <stdio.h>

int main() {
    int a, b;

    // Ask the user to enter two numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);

    // Swap the numbers without using a third variable
    a = a + b;  // Now a contains the sum of a and b
    b = a - b;  // Subtract b from the sum to get the original value of a
    a = a - b;  // Subtract the new b (original a) from the sum to get the original value of b

    // Display the swapped values
    printf("After swapping:\n");
    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);

    return 0;
}
