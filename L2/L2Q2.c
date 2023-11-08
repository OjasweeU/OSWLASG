#include<stdio.h>

int main()
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    for(int i=0;i<=6;i++)
    {
        for(int j=65;j<=71-i;j++) 
        {
            printf("%c",j);
        }
        for(int sp=1;sp<=i*2-1;sp++)
            printf(" ");
        for(int k=71-i;k>=65;k--) 
        {
            if(k==71);
            else
                printf("%c", k);
        }
    printf("\n");
    }   
 return 0;
}
