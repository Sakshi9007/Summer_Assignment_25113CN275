#include <stdio.h>

int main()
{
    int size, i, j, temp, min_index;

    //Input the size and elements of the array
    printf("Enter the size of the array:");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    //Loop for selection sort
    for(i = 0; i < size-1; i++)
    {
        //Assume current element to be minimum
        min_index = i;
        for(j = i+1; j < size; j++)
        {
            //Find actual minimum element
            if(arr[j] < arr[min_index])
            {
                //Update min_index
                min_index = j;
            }
        }
        // Swap values
        if(min_index != i)
        {
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }

    //Print sorted array
    printf("Sorted array : ");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}