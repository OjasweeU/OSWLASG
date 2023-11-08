#include<stdio.h>

int main() 
{
    printf("Name: OJASWEE UDGATA\n");
    printf("Regd No.: 2141021001\n");
    
    float miles, kilometers;

    printf("Enter distance in miles and in kilometers: ");
    scanf("%f%f", &miles,&kilometers);

    kilometers = miles*1.60934;
    printf("Distance in kilometers: %.2f\n", kilometers);

    miles = kilometers/1.60934;
    printf("Distance in miles: %.2f\n", miles);
    
  return 0;
}
