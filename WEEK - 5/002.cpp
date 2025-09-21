#include <stdio.h>
#include <math.h>  // for pow() function to calculate compound interest

int main() {
    float principal, rate, time, simpleInterest, compoundInterest, amount;

    // Taking user input for Principal, Rate, and Time
    printf("Enter the Principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter the Rate of interest: ");
    scanf("%f", &rate);
    
    printf("Enter the Time (in years): ");
    scanf("%f", &time);
    
    // Calculating Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculating Compound Interest
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    // Output the results
    printf("\nSimple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}

