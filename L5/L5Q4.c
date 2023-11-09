#include <stdio.h>

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    int arr[100]; 
    int n, element, insertValue;
    int size;

    
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the element value before which you want to insert: ");
    scanf("%d", &insertValue);

    
    printf("Enter the element to insert before %d: ", insertValue);
    scanf("%d", &element);

    
    int position = -1;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == insertValue) 
        {
            position = i;
            break;
        }
    }

    if (position == -1) 
    {
        printf("Element %d not found in the array.\n", insertValue);
        return 1;
    }

    
    for (int i = size; i > position; i--) 
    {
        arr[i] = arr[i - 1];
    }

    
    arr[position] = element;
    size++; 

    
    printf("Updated array:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
