#include <stdio.h>

int main()
{
    int n, i, temp, start = 0, end;

    // Get the size of the array from user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++)
    {
        printf("Element %d : ", i+1);
        scanf("%d",&arr[i]);
    }

    end = n-1;

    while(start < end)
    {
        //swap elements
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        //Move the pointer toward centre
        start++;
        end--;
    }

    //print reversed array
    printf("Reversed array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}