#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num, int divisor);

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1) 
    {
        printf("Prime numbers are greater than 1. Please enter a valid number.\n");
    } 
    else if (isPrime(number, 2)) 
    {
        printf("%d is a prime number.\n", number);
    } 
    else 
    {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

bool isPrime(int num, int divisor) 
{
    if (divisor * divisor > num) 
    {
        return true; 
    }
    if (num % divisor == 0) 
    {
        return false; 
    }
    return isPrime(num, divisor + 1); 
}

