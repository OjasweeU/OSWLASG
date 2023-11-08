#include <stdio.h>

void separateOddEven(int arr[], int size);

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

    separateOddEven(arr, size);

    printf("Array after separating odd and even numbers:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void separateOddEven(int arr[], int size) 
{
    int left = 0; 
    int right = size - 1; 

    while (left < right) 
    {
        while (arr[left] % 2 == 0 && left < right) 
        {
            left++;
        }

        while (arr[right] % 2 != 0 && left < right) 
        {
            right--;
        }
        if (left < right) 
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
}

