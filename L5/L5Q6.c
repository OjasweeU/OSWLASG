#include <stdio.h>

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    int arr[100]; 
    int n, element;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    printf("Enter the sorted elements of the array in ascending order:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    
    int position = n;
    for (int i = 0; i < n; i++) 
    {
        if (element < arr[i]) 
        {
            position = i;
            break;
        }
    }

    
    for (int i = n; i > position; i--) 
    {
        arr[i] = arr[i - 1];
    }

    
    arr[position] = element;
    n++; 

   
    printf("Updated sorted array:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

