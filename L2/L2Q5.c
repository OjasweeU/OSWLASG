#include <stdio.h>

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    int num1, num2, originalNum1, originalNum2, temp, hcf, lcm;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    originalNum1 = num1;
    originalNum2 = num2;

    while (num2!=0) 
    {
        temp=num2;
        num2=num1%num2;
        num1=temp;
    }
    
    hcf=num1;  //H.C.F.
    lcm=(originalNum1 * originalNum2)/hcf;  //L.C.M

    printf("H.C.F of %d and %d is %d\n", originalNum1, originalNum2, hcf);
    printf("L.C.M of %d and %d is %d\n", originalNum1, originalNum2, lcm);

return 0;
}
