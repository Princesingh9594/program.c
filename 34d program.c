#include <stdio.h>

int main() {
    // Declare variables for length, breadth, area, and perimeter
    float length, breadth, area, perimeter;

    // Input the length and breadth of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate the area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display the results
    printf("The area of the rectangle is: %.2f\n", area);
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

    return 0;
}
