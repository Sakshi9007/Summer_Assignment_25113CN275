#include <stdio.h>

int main()
{
    int n, i, sum=0, average;

    //Get the number of elements from user
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    //Validate the array
    if(n <= 0)
    {
        printf("Array size must be greater than 0.");
        return 1;
    }
    
    int arr[n];
    //Take the elements as input from users
    for(i=0; i < n; i++)
    {
        printf("Element %d : " ,i+1);
        scanf("%d",&arr[i]);
    }

    //Calculate sum of elements
    for(i=0; i < n; i++)
    {
        sum += arr[i];
    }
    //Calculate average of elements
    average = sum / n;

    printf("Sum of elements of the array is: %d\n",sum);
    printf("Average of elements of the array is: %d",average);

    return 0;
}