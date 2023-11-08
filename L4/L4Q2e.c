#include <stdio.h>

void removeDuplicates(int arr[], int *size);

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    int size;

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

    removeDuplicates(arr, &size);

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void removeDuplicates(int arr[], int *size) 
{
    if (*size <= 1) 
    {
        return; 
    }

    int newSize = 1; 

    for (int i = 1; i < *size; i++) 
    {
        int isDuplicate = 0; 

        
        for (int j = 0; j < newSize; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                isDuplicate = 1;
                break; 
            }
        }

        if (!isDuplicate) 
        {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    *size = newSize; 
}

