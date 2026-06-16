#include <stdio.h>

int main()
{
    int size, i, j, k;

    //Input the size of the array from user
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < size; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d", &arr[i]);
    }

    // Loop to remove duplicate elements
    for (i = 0; i < size; i++) 
    {
        for (j = i + 1; j < size; ) 
        {
            // If a duplicate element is found
            if (arr[i] == arr[j]) 
            {
                // Shift all subsequent elements to the left by 1 position
                for (k = j; k < size - 1; k++) 
                {
                    arr[k] = arr[k + 1];
                }
                size--;              // Reduce the logical size of the array
                // Do not increment j, check the new element at the current index j
            } 
            else 
            {
                // Move to the next element if no duplicate is found
                j++;
            }
        }
    }
    
    //Print new array
    printf("Modified array: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}