#include <stdio.h>

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    int decimal,binary=0,base=1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal==0) 
    {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    while (decimal>0) 
    {
        int remainder=decimal%2;
        binary=binary+remainder*base;
        decimal=decimal/2;
        base=base*10;
    }
    printf("Binary equivalent: %d\n", binary);
return 0;
}

