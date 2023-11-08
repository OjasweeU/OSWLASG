#include <stdio.h>

int findMaxDifference(int arr[], int size);

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

    int maxDifference = findMaxDifference(arr, size);

    if (maxDifference == -1) 
    {
        printf("There are not enough elements in the array to find the maximum difference.\n");
    } 
    else 
    {
        printf("The maximum difference between two elements in the array is: %d\n", maxDifference);
    }

    return 0;
}

int findMaxDifference(int arr[], int size) 
{
    if (size < 2) 
    {
        return -1; 
    }

    int minElement = arr[0];
    int maxDifference = arr[1] - arr[0];

    for (int i = 1; i < size; i++) 
    {
        if (arr[i] - minElement > maxDifference) 
        {
            maxDifference = arr[i] - minElement;
        }

        if (arr[i] < minElement) 
        {
            minElement = arr[i];
        }
    }
    return maxDifference;
}

