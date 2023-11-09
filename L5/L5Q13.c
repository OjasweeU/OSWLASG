#include <stdio.h>

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    int arr[100]; 
    int reversedArr[100]; 
    int n;
   
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    
    for (int i = 0; i < n; i++) 
    {
        reversedArr[i] = arr[n - 1 - i];
    }

   
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", reversedArr[i]);
    }
    return 0;
}
