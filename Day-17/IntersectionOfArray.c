#include <stdio.h>

//Function to check for duplicates
int is_duplicate(int arr[], int size, int element)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == element)
        {
            return 1;    //Found duplicate
        }
    }
    return 0;    //Not a duplicate
}

int main()
{
    int size1, size2, size3 = 0, i;

    //Input the size and elements of first array
    printf("Enter the size of first array:");
    scanf("%d", &size1);

    int arr1[size1];
    printf("Enter the elements of first array:\n");
    for ( i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    //Input the size and elements of second array
    printf("Enter the size of second array:");
    scanf("%d", &size2);

    int arr2[size2];
    printf("Enter the elements of second array:\n");
    for ( i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int intersection[size1 + size2];

    for (int i = 0; i < size1; i++) 
    {
        for (int j = 0; j < size2; j++) 
        {
            // Check if element is common to both arrays
            if (arr1[i] == arr2[j]) 
            {
                // Avoid duplicates
                if (!is_duplicate(intersection, size3, arr1[i])) 
                {
                    intersection[size3] = arr1[i];
                    size3++;
                }
                break; 
            }
        }
    }

    // Print the intersection array
    printf("Intersection of the two arrays: ");
    if (size3 == 0) 
    {
        printf("No common elements found.");
    } 
    else 
    {
        for (int i = 0; i < size3; i++) 
        {
            printf("%d ", intersection[i]);
        }
    }
    return 0;
}