#include <stdio.h>

int main()
{
    int n, i, first, position;

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

    //Input the number of position to rotate left
    printf("Enter the number of positions to rotate left: ");
    scanf("%d",&position);
    
    //Loop to ratate array to left by 'position'
    for(i = 0; i < position; i++)
    {
        first = arr[0];     //Secure first element of array

        //Shift all elements to one position left
        for (int j = 0; j < n - 1; j++) 
        {
            arr[j] = arr[j + 1];
        }
        //Move the first element of array to end
        arr[n-1] = first;
    }

    //Print the rotated array
    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}