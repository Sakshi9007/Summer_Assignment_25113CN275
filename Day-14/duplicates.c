#include <stdio.h>

int main() 
{
    int size, count;

    // Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d",&size);

    int arr[size];
    // Input array elements from the user
    printf("Enter elements:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("Element %d : ",i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate elements in the array are: ");
    int found_duplicate = 0;

    // 3. Find duplicates using nested loops
    for (int i = 0; i < size; i++) 
    {
        for (int j = i + 1; j < size; j++) 
        {
            
            // Check if a match is found ahead in the array
            if (arr[i] == arr[j]) 
            {
                
                // Track if we have already printed this specific number
                count = 0;
                for (int k = 0; k < i; k++) 
                {
                    if (arr[k] == arr[i]) 
                    {
                        count = 1;
                        break;
                    }
                }

                // If it is the first time finding this duplicate, print it
                if (count == 0) 
                {
                    printf("%d ", arr[i]);
                    found_duplicate = 1;
                }
                break; 
            }
        }
    }

    // If no duplicates were found 
    if (found_duplicate == 0)
    {
        printf("None");
    }

    return 0;
}
