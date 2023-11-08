#include <stdio.h>
#define PI 3.1428

float calculateArea(int radius) 
{
    return PI*radius*radius;
}

double calculateCircumference(int radius) 
{
    return 2 *PI*radius;
}

int main() 
{
    printf("Name: OJASWEE UDGATA\n");
    printf("Regd No.: 2141021001\n");
    int r=2;
    float area;
    double circumference;

    area=calculateArea(r);
    circumference=calculateCircumference(r);

    printf("Radius=%d, Area=%.2f\n", r, area);
    printf("Circumference=%.2f\n", circumference);

    return 0;
}
