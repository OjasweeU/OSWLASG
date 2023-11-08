#include<stdio.h>

int main() 
{
    printf("Name: OJASWEE UDGATA\n");
    printf("Regd No.: 2141021001\n");
    int n;
    long long int sum=0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n<=0) 
    {
        printf("Please enter a positive integer.\n");
        return 1; 
    }
    sum=n+n*n+n*n*n;
    printf("Sum of first three powers of %d: %lld\n", n,sum);

    return 0;
}
