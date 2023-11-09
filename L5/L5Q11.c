#include <stdio.h>

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    int arr[100]; 
    int n, deleteValue;
    int size;

    
    printf("Enter the number of elements: ");
    scanf("%d", &size);

   
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

   
    printf("Enter the element value after which you want to delete: ");
    scanf("%d", &deleteValue);

    
    int position = -1;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == deleteValue) 
        {
            position = i;
            break;
        }
    }

    if (position == -1) 
    {
        printf("Element %d not found in the array.\n", deleteValue);
        return 1;
    }

    for (int i = position + 1; i < size - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }

    
    size--;

    
    printf("Updated array after deleting the element after %d:\n", deleteValue);
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
