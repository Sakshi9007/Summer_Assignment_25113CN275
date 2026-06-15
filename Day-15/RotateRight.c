#include <stdio.h>

int main()
{
    int n, i, last, position;

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

    //input the number of position to rotate right
    printf("Enter the number of positions to rotate right: ");
    scanf("%d",&position);
    
    //Loop to ratate array to right by 'position'
    for(i = 0; i < position; i++)
    {
        last = arr[n-1];     //Secure last element of array

        //Shift all elements to right by one position
        for (int j = n-1; j > 0; j--) 
        {
            arr[j] = arr[j - 1];
        }
        //Move the last element of array to first
        arr[0] = last;
    }

    //Print the rotated array
    printf("Array after right rotation: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}