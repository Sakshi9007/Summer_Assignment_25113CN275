#include <stdio.h>

int main()
{
    int size, i, j, temp;

    //Input the size and elements of the array
    printf("Enter the size of the array:");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    //Loop for bubble sort
    for(i = 0; i < size-1; i++)
    {
        for(j = 0; j < size-i-1; j++)
        {
            //Compare adjacent elements
            if(arr[j] > arr[j+1])
            {
                //swap elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    //Print sorted array
    printf("Sorted array: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}