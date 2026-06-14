#include <stdio.h>

int main()
{
    int n, target, position = 0;

    printf("Enter the number of elements in array:");
    scanf("%d", &n);

    //validate size of array
    if(n <= 0)
    {
        printf("Invalid array size.");
        return 0;
    }

    int arr[n];
    printf("Enter the elements of array:\n");
    //Get the elements of array from user
    for(int i = 0; i < n; i++)
    {
        printf("Element %d :", i+1);
        scanf("%d", &arr[i]);
    }

    //Get the number to be searched from user
    printf("Enter the target element:");
    scanf("%d", &target);

    //Loop for linear search
    for(int i=0; i < n; i++)
    {
        if(arr[i] == target)
        {
            position = i+1;
            break;
        }
    }

    //print output
    if(position != 0)
    {
        printf("Element %d found at position %d.", target, position);
    }
    else
    {
        printf("Element %d is not present in the array.", target);
    }
    return 0;
}