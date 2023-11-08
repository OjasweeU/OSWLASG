#include<stdio.h>

int main()
{
    char cV;
    int iV;
    unsigned int uIV;
    float fV;
    double dV;
    long lV;
    long double lDV;
    //unsigned long int lUV;
    
    printf("Name: OJASWEE UDGATA\n");
    printf("Regd No.: 2141021001\n");
    printf("Assign the variables: ");
    scanf(" %c%d%u%f%lf%ld%Lf", &cV,&iV,&uIV,&fV,&dV,&lV,&lDV);
    
    //datatype, size, and value of each variable
    printf("char, %lu bytes, %c\n", sizeof(cV), cV);
    printf("int, %lu bytes, %d\n", sizeof(iV), iV);
    printf("unsigned int, %lu bytes, %u\n", sizeof(uIV), uIV);
    printf("float, %lu bytes, %f\n", sizeof(fV), fV);
    printf("double, %lu bytes, %lf\n", sizeof(dV), dV);
    printf("long, %lu bytes, %ld\n", sizeof(lV), lV);
    printf("long double, %lu bytes, %Lf\n", sizeof(lDV), lDV);
    //printf("long unsigned int, %lu bytes, %lu\n", sizeof(lUV), lUV);
return 0;
}


