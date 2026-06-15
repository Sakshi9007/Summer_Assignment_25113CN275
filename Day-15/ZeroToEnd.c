#include <stdio.h>

int main()
{
    int n, i, count = 0;

    //Input the number of elements in the array
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    //Input elements of array
    printf("Enter the elements of array:\n ");
    for(i = 0; i < n; i++)
    {
        printf("Element %d: " ,i+1);
        scanf("%d", &arr[i]);
    }
    
    //Move non-zero elements to start of array
    for(i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[count] = arr[i];
            count++;
        }
    }

    //Move zero to end
    while(count < n)
    {
        arr[count] = 0;
        count++;
    }

    //Print the array
    printf("Array after moving zeroes to end:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}