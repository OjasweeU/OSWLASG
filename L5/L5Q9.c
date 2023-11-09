#include <stdio.h>

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    int arr[100]; 
    int n, position;
 
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the position (1 to %d) to delete an element: ", n);
    scanf("%d", &position);

    if (position < 1 || position > n) 
    {
        printf("Invalid position. Please enter a valid position.\n");
        return 1;
    }

    
    for (int i = position - 1; i < n - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Updated array after deleting the element at position %d:\n", position);
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
