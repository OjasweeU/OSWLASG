#include <stdio.h>

void deleteElement(int arr[], int *size, int position);

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    int size, position;

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

    printf("Enter the position to delete an element (0 to %d): ", size - 1);
    scanf("%d", &position);

    if (position < 0 || position >= size) 
    {
        printf("Invalid position. Please enter a valid position between 0 and %d.\n", size - 1);
    } 
    else 
    {
        deleteElement(arr, &size, position);

        printf("Array after deleting element at position %d:\n", position);
        for (int i = 0; i < size; i++) 
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

void deleteElement(int arr[], int *size, int position) 
{
    for (int i = position; i < *size - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }

    (*size)--; // Decrease the size of the array
}

