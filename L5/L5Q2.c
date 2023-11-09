#include <stdio.h>

int main() 
{
    printf("Name: <OJASWEE UDGATA>\n");
    printf("Regd No.: <2141021001>\n");
    int arr[100]; 
    int n, element;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the element to insert at the first position: ");
    scanf("%d", &element);

    
    for (int i = n; i > 0; i--) 
    {
        arr[i] = arr[i - 1];
    }

    
    arr[0] = element;
    n++; 

    printf("Updated array:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
