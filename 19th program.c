#include <stdio.h>

int main() {
    float side1, side2, side3;

    // Ask the user to input the lengths of the three sides of the triangle
    printf("Enter the length of the first side: ");
    scanf("%f", &side1);
    
    printf("Enter the length of the second side: ");
    scanf("%f", &side2);

    printf("Enter the length of the third side: ");
    scanf("%f", &side3);

    // Check if the input sides can form a valid triangle
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Invalid input! Side lengths must be positive.\n");
    } else if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        printf("Invalid triangle! The sum of any two sides must be greater than the third side.\n");
    } else {
        // Classify the triangle
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is Equilateral.\n");
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }
    }

    return 0;
}
