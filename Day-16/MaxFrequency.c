#include <stdio.h>

int main()
{
    int size, i, j, count = 1;

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

    // Track visited elements to avoid recounting duplicates
    int visited[size];
    for (int i = 0; i < size; i++) 
    {
        visited[i] = 0;           //visited[]={0,0,0,0,0,0 ...}
    }

    int max_element = arr[0];          //Element of maximum frequency
    int max_count = 0;                 //Its frequency

    //Checking for duplicates
    for(i = 0; i < size; i++)
    {
        //skip if element is already visited
        if(visited[i] == 1)
        {
            continue;
        }
        for(j = i+1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;    //mark duplicate index as visited
            }
        }
        //Update element and its frequency
        if(count > max_count)
        {
        max_element = arr[i];
        max_count = count;
        }
    }
    //Print result
    printf("The element with maximum frequency is %d with frequency %d.",max_element, max_count);

    return 0;
}