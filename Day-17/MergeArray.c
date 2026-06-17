#include <stdio.h>

int main()
{
    int size1, size2, size3, i;

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
    
    //Define the size of third/merging array
    size3 = size1 + size2;

    int merged[size3];

    //Copy the elements of arr1 and arr2 in merged array
    for(i = 0; i < size1; i++)
    {
        merged[i] = arr1[i];
    }
    for(i = 0; i < size2; i++)
    {
        merged[size1 + i] = arr2[i];
    }

    //Print the merged array
    printf("Merged array: ");
    for(i = 0; i < size3; i++)
    {
        printf("%d ",merged[i]);
    }
    return 0;
}