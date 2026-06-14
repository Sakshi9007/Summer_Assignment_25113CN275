#include <stdio.h>

int main()
{
    int n, i, target, frequency = 0;

    //Input the size of array from user
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);
    
    //Validate the size of array
    if(n <= 0)
    {
        printf("Invalid size.");
        return 1;
    }

    int arr[n];
    printf("Enter elements of array:\n");
    //Input elements of the array
    for(i = 0; i < n; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d", &arr[i]);
    }

    //Input the target element
    printf("Enter the element whose frequency is to be found:");
    scanf("%d",&target);

    //Loop for frequency
    for(i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            frequency++;
        }
    }

    //Print output
    if(frequency != 0)
    {
        printf("Frequency of element %d is %d.", target, frequency);
    }
    else
    {
        printf("Element %d is not present in the array.",target);
    }

    return 0;
}