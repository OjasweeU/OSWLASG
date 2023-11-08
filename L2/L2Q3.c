#include <stdio.h>

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    int choice,num,factorial=1,isPrime=1;
    
    while (1) 
    {
        printf("\nMenu:\n");
        printf("1. Factorial of a number\n");
        printf("2. Prime or not\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                factorial=1;
                for(int i=1;i<=num;i++) 
                {
                    factorial*=i;
                }
                printf("Factorial of %d is %d\n",num,factorial);
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                isPrime=1;
                if (num<=1) 
                {
                    isPrime=0;
                } 
                else 
                {
                    for(int i=2;i*i<=num;i++)
                     {
                        if(num%i==0) 
                        {
                            isPrime=0;
                            break;
                        }
                    }
                }
                if(isPrime) 
                {
                    printf("%d is prime.\n",num);
                } 
                else 
                {
                    printf("%d is not prime.\n",num);
                }
                break;
            case 3:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

return 0;
}
