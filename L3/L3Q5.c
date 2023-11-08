#include <stdio.h>

void decimalToBinary(int decimal);

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    if (decimalNumber < 0) 
    {
        printf("Please enter a non-negative decimal number.\n");
    } 
    else 
    {
        printf("Binary representation: ");
        decimalToBinary(decimalNumber);
        printf("\n");
    }

    return 0;
}

void decimalToBinary(int decimal) 
{
    if (decimal > 0) 
    {
        decimalToBinary(decimal / 2);
        printf("%d", decimal % 2);
    }
}

