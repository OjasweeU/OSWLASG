#include <stdio.h>

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    int arr[100]; 
    int n;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    
    if (n == 0) 
    {
        printf("Array is empty. Deletion not possible.\n");
        return 1;
    }

    
    for (int i = 0; i < n - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }
    
    n--;

    
    printf("Updated array after deleting the first element:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

