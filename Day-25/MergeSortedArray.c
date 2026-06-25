#include <stdio.h>

// Function to merge two sorted arrays into a third array
void mergeSortedArrays (int arr1[], int n1, int arr2[], int n2, int merged[]);

int main()
{
    int size1, size2, size3, i;

    //Input the size of first array
    printf("Enter the size of first array:");
    scanf("%d", &size1);

    int arr1[size1];
    printf("Enter the sorted elements of first array:\n");
    for ( i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    //Input the size of second array
    printf("Enter the size of second array:");
    scanf("%d", &size2);

    int arr2[size2];
    printf("Enter the sorted elements of second array:\n");
    for ( i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    
    //Define the size of third/merging array
    size3 = size1 + size2;

    int merged[size3];

    //Call the merging function
    mergeSortedArrays(arr1, size1, arr2, size2, merged);

    // Print the final result
    printf("\nMerged sorted array:\n");
    for (int i = 0; i < size1 + size2; i++) 
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}

void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) 
{
    int i = 0; // Pointer for arr1
    int j = 0; // Pointer for arr2
    int k = 0; // Pointer for merged array

    // Traverse both arrays and copy the smaller element into the merged array
    while (i < n1 && j < n2) 
    {
        if (arr1[i] < arr2[j]) 
        {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while (i < n1) 
    {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while (j < n2) 
    {
        merged[k++] = arr2[j++];
    }
}
