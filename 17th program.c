#include <stdio.h>
#include <math.h>  // For sqrt() function

int main() {
    float a, b, c, discriminant, root1, root2;

    // Ask the user to input the coefficients a, b, and c
    printf("Enter coefficient a: ");
    scanf("%f", &a);
    printf("Enter coefficient b: ");
    scanf("%f", &b);
    printf("Enter coefficient c: ");
    scanf("%f", &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Categorize the roots based on the discriminant
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        // Two real and equal roots
        root1 = root2 = -b / (2 * a);
        printf("The roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } else {
        // Two imaginary roots
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are imaginary.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}
