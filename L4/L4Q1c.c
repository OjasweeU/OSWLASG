#include <stdio.h>

void findSmallestAndSecondSmallest(int arr[], int size);

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

    if (size < 2) 
    {
        printf("There are not enough elements in the array to find the smallest and second smallest.\n");
    } 
    else 
    {
        findSmallestAndSecondSmallest(arr, size);
    }

    return 0;
}

void findSmallestAndSecondSmallest(int arr[], int size) 
{
    int smallest, secondSmallest;

    if (arr[0] < arr[1]) 
    {
        smallest = arr[0];
        secondSmallest = arr[1];
    } 
    else 
    {
        smallest = arr[1];
        secondSmallest = arr[0];
    }

    for (int i = 2; i < size; i++) 
    {
        if (arr[i] < smallest) 
        {
            secondSmallest = smallest;
            smallest = arr[i];
        } 
        else if (arr[i] < secondSmallest && arr[i] != smallest) 
        {
            secondSmallest = arr[i];
        }
    }
    printf("The smallest element in the array is: %d\n", smallest);
    printf("The second smallest element in the array is: %d\n", secondSmallest);
}

