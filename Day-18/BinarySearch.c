#include <stdio.h>

int main()
{
    int size, i, j, temp, search, found = 0, first, last, mid;

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
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    //Input the element to be found from user
    printf("Enter value to find:");
    scanf("%d", &search);

    first = 0;
    last = size-1;
    //Binary search logic loop
    while(first <= last)
    {
        //calculate mid
        mid = first + (last - first)/2;     //to prevent overflow

        if(arr[mid] < search)
        {
            first = mid + 1;
        }
        else if(arr[mid] == search)
        {
            printf("%d is found in array at index %d.",search,  mid);
            found = 1;
            break;
        }
        else
        {
            last = mid - 1;
        }
    }

    if(found == 0)
    {
        printf("Element not found in array.");
    }
    return 0;
}    