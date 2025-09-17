#include <stdio.h>

int main() {
    int a, b, temp;

    // Ask the user to enter two numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);

    // Swap the numbers using a third variable
    temp = a;
    a = b;
    b = temp;

    // Display the swapped values
    printf("After swapping:\n");
    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);

    return 0;
}
