#include <stdio.h>

void insertElement(int arr[], int *size, int element, int position);

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    int size, element, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) 
    {
        printf("Invalid array size. Please enter a positive size.\n");
        return 1; 
    }

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position to insert the element (0 to %d): ", size);
    scanf("%d", &position);

    if (position < 0 || position > size) 
    {
        printf("Invalid position. Please enter a valid position between 0 and %d.\n", size);
    } 
    else 
    {
        insertElement(arr, &size, element, position);

        printf("Array after inserting %d at position %d:\n", element, position);
        for (int i = 0; i < size; i++) 
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

void insertElement(int arr[], int *size, int element, int position) 
{
    for (int i = *size; i > position; i--) 
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    (*size)++; // Increase the size of the array
}

