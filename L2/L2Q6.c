#include <stdio.h>

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    int n,first=0,second=1,next,i;
    printf("Enter the number of terms: ");
    scanf("%d",&n);

    printf("Fibonacci Series for %d terms:\n ",n);

    for (i=0;i<n;i++) 
    {
        if (i<=1)
            next=i;
        else 
        {
            next=first+second;
            first=second;
            second=next;
        }
        printf("%d",next);
    }
return 0;
}
