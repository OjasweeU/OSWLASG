/*#include<stdio.h>

int main() 
{
    double principal, rate, time, simpleInterest;

    
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time in years: ");
    scanf("%lf", &time);

    rate=rate/100.0;

    simpleInterest = (principal * rate * time);
    printf("Simple Interest = %.2lf\n", simpleInterest);

    return 0;
}*/

#include <stdio.h>

// Function to calculate simple interest
double calculateSimpleInterest(double principal, double rate, double time) {
    return (principal * rate * time) / 100.0;
}

int main() {

    printf("Name: OJASWEE UDGATA\n");
    printf("Regd No.: 2141021001\n");
    double principal, rate, time, simpleInterest;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time in years: ");
    scanf("%lf", &time);

    // Call the user-defined function to calculate simple interest
    simpleInterest = calculateSimpleInterest(principal, rate, time);

    printf("Simple Interest = %.2lf\n", simpleInterest);

    return 0;
}
