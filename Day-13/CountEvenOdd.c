#include <stdio.h>

int main()
{
    int n, i, CountEven = 0, CountOdd = 0;

    //Take the number of elements from user
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    //Validate the array
    if(n <= 0)
    {
        printf("Array size must be greater than 0.");
        return 1;
    }

    int arr[n];
    printf("Enter the %d elements of array:\n ",n);

    //Get elements as input from user
    for(i = 0; i < n; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d",&arr[i]);
    }
    
    
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            CountEven ++;
        }
        else
        {
            CountOdd ++;
        }
    }
    //Print the result
    printf("Even elements = %d\n", CountEven);
    printf("Odd elements = %d", CountOdd);

    return 0;
}