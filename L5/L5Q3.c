#include <stdio.h>

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    int arr[100]; 
    int n, element;
    int size;

    
    printf("Enter the number of elements: ");
    scanf("%d", &size);

   
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

   
    printf("Enter the position (1 to %d) to insert the element: ", size + 1);
    scanf("%d", &n);

    if (n < 1 || n > size + 1) 
    {
        printf("Invalid position. Please enter a valid position.\n");
        return 1;
    }

    
    printf("Enter the element to insert at position %d: ", n);
    scanf("%d", &element);

    
    for (int i = size; i >= n; i--) 
    {
        arr[i] = arr[i - 1];
    }

    
    arr[n - 1] = element;
    size++; 

    printf("Updated array:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
