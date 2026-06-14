#include <stdio.h>

int main()
{
    int n, i, max1, max2;

    //Input the size of array
    printf("Enter the size of array: ");
    scanf("%d", &n);

    //Validate the input 
    if(n < 2)
    {
        printf("Array must contain atleast 2 elements.");
        return 1;
    }

    int arr[n];
    //Input the elements of array
    printf("Enter the elements of array:\n");
    for(i = 0; i < n; i++)
    {
        printf("Element %d:",i+1);
        scanf("%d", &arr[i]);
    }

    max1 = arr[0];
    max2 = arr[0];

    for(i = 0; i < n; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }

    //Print the results
    printf("The largest element is : %d \n",max1);
    printf("The second largest number is : %d",max2);
    
    
    return 0;
}