#include <stdio.h>

int countDigits(int num);

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    int digitCount = countDigits(number);
    printf("Number of digits in %d is: %d\n", number, digitCount);

    return 0;
}

int countDigits(int num) 
{
    if (num == 0) 
    {
        return 0;
    } 
    else 
    {
        return 1 + countDigits(num / 10);
    }
}

