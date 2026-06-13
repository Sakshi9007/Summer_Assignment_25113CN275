#include <stdio.h>

int main()
{
    int n, i, largest, smallest;

    //Get the number of elements from user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    //Validate the array
    if(n <= 0)
    {
        printf("Array size must be greater than 0.");
        return 1;
    }

    int arr[n];
    //Input elements of the array
    printf("Enter the %d elements of array:\n",n);
    for(i = 0; i < n; i++)
    {
        printf("Element %d:", i+1);
        scanf("%d",&arr[i]);
    }

    //Assume the first element of array to be both smallest and largest
    largest = arr[0];
    smallest = arr[0];

    //compare arr[0] with rest elements for largest and smallest
    for(i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    //Print the results
    printf("Largest element in the array is %d.\n", largest);
    printf("Smallest element in the array is %d.", smallest);

    return 0;
}