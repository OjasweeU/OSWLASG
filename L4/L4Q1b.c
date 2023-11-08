#include <stdio.h>

int findSecondLargestElement(int arr[], int size);

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
        printf("There are not enough elements in the array to find the second largest.\n");
    } 
    else 
    {
        int secondLargest = findSecondLargestElement(arr, size);
        printf("The second largest element in the array is: %d\n", secondLargest);
    }

    return 0;
}

int findSecondLargestElement(int arr[], int size) 
{
    int largest = arr[0];
    int secondLargest = arr[1];

    if (secondLargest > largest) 
    {
        largest = arr[1];
        secondLargest = arr[0];
    }

    for (int i = 2; i < size; i++) 
    {
        if (arr[i] > largest) 
        {
            secondLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secondLargest && arr[i] != largest) 
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

