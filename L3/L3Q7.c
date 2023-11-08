#include <stdio.h>

double power(double base, int exponent);

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    double base, result;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    result = power(base, exponent);

    printf("%.2lf ^ %d = %.2lf\n", base, exponent, result);

    return 0;
}

double power(double base, int exponent) 
{
    if (exponent == 0) 
    {
        return 1; 
    } 
    else if (exponent < 0) 
    {
        return 1 / (base * power(base, -exponent - 1));
    } else 
    {
        return base * power(base, exponent - 1);
    }
}

