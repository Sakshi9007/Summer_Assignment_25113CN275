#include <stdio.h>

int main()
{
    int size, i, j, sum_target, found = 0;

    //Input the size of the array from user
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < size; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d", &arr[i]);
    }

    //Input the target sum
    printf("Enter the target sum: ");
    scanf("%d", &sum_target);
    
    //Loop to find pairs possesing target sum
    for(i = 0; i < size-1; i++)
    {
        for(j = i+1; j < size; j++)
        {
            //check if current pairs matches the target
            if(arr[i] + arr[j] == sum_target)
            {
                printf("Pair found: %d and %d at indices %d and %d.\n",arr[i], arr[j], i, j);
                found = 1;
            }
        }
    }
    //output if no pair found
    if(found == 0)
    {
        printf("No pair found.");
    }
    return 0;
}