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

    //Loop to sort in descending order
    for(i = 0; i < size-1; i++)
    {
        for(j = i+1; j < size; j++)
        {
            //Compare adjacent elements
            if(arr[i] < arr[j])
            {
                //swap elements
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //Print sorted array
    printf("Sorted array in descending order: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}