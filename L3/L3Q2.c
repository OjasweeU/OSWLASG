#include <stdio.h>

int sumOfDigits(int num);

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    int digitSum = sumOfDigits(number);
    printf("Sum of the digits in %d is: %d\n", number, digitSum);

    return 0;
}

int sumOfDigits(int num) 
{
    if (num == 0) 
    {
        return 0;
    } 
    else 
    {
        return (num % 10) + sumOfDigits(num / 10);
    }
}

