#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, simpleInterest, compoundInterest;

    // Ask the user for the principal, rate, and time
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    
    printf("Enter the time in years: ");
    scanf("%f", &time);

    // Calculate Simple Interest: SI = (P * R * T) / 100
    simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interest: CI = P * (1 + R/100)^T - P
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    // Display the results
    printf("\nSimple Interest: %.2f\n", simpleInterest);
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}
