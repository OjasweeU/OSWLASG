#include <stdio.h>

int main()
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    int arr[100]; 
    int n;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    
    int uniqueArr[100];
    int uniqueCount = 0;

    
    for (int i = 0; i < n; i++) 
    {
        int isDuplicate = 0;
        for (int j = 0; j < uniqueCount; j++) 
        {
            if (arr[i] == uniqueArr[j]) 
            {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) 
        {
            uniqueArr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    
    for (int i = 0; i < uniqueCount; i++) 
    {
        arr[i] = uniqueArr[i];
    }

    
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < uniqueCount; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
