#include <stdio.h>

int main()
{
    int missing_num, size, n, expected_sum, actual_sum = 0, i;
    int arr[] = {1, 2, 3, 4, 6, 7};

    //calculate size of the array
    size = sizeof(arr)/sizeof(arr[0]);

    //size of array if none were missing
    n = size + 1;

    //Calculate expected sum
    expected_sum = (n*(n+1)) / 2;

    for(i = 0; i < size; i++)
    {
        actual_sum += arr[i];
    }

    missing_num = expected_sum - actual_sum;

    //Print the given array
    printf("Given array: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    //Print missing number
    printf("Missing number is %d.", missing_num);
    
    return 0;
}