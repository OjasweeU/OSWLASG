#include <stdio.h>

double calculateTriangleArea(double base, double height) 
{
    return 0.5*base*height;
}

int main() 
{
    printf("Name: OJASWEE UDGATA\n");
    printf("Regd No.: 2141021001\n");
    double base, height, area;
    printf("Enter the base and height of the triangle: ");
    scanf("%lf %lf", &base, &height);

    area=calculateTriangleArea(base, height);

    printf("The area of the triangle with base %.2lf and height %.2lf is %.21f\n", base, height, area);

    return 0;
}
