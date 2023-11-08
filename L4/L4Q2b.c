#include <stdio.h>

void insertSorted(int arr[], int *size, int element);

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    int size, element;

    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);

    if (size <= 0) 
    {
        printf("Invalid array size. Please enter a positive size.\n");
        return 1; 
    }

    int arr[size];

    printf("Enter the elements of the sorted array in ascending order:\n");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    insertSorted(arr, &size, element);

    printf("Array after inserting %d in sorted order:\n", element);
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void insertSorted(int arr[], int *size, int element) 
{
    int i = *size - 1;
    while (i >= 0 && arr[i] > element) 
    {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = element;
    (*size)++; 
}

