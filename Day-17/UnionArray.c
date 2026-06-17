#include <stdio.h>

//Function to check for duplicates
int is_duplicate(int arr[], int size, int element)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == element)
        {
            return 1;    //Found duplicate
        }
    }
    return 0;    //Not a duplicate
}

int main()
{
    int size1, size2, size3, i;

    //Input the size and elements of first array
    printf("Enter the size of first array:");
    scanf("%d", &size1);

    int arr1[size1];
    printf("Enter the elements of first array:\n");
    for ( i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    //Input the size and elements of second array
    printf("Enter the size of second array:");
    scanf("%d", &size2);

    int arr2[size2];
    printf("Enter the elements of second array:\n");
    for ( i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int unionArr[size1 + size2];
    size3 = 0;

    //Add unique elements from arr1 in union array
    for(i = 0; i < size1; i++)
    {
        if(!is_duplicate(unionArr, size3, arr1[i]))
        {
            unionArr[size3] = arr1[i];
            size3++;
        }
    }

    //Add unique elements from arr2 in union array
    for(i = 0; i < size2; i++)
    {
        if(!is_duplicate(unionArr, size3, arr2[i]))
        {
            unionArr[size3] = arr2[i];
            size3++;
        }
    }

    //Print union array
    printf("Union array:" );
    for(i = 0; i < size3; i++)
    {
        printf("%d ", unionArr[i]);
    }

    return 0;
}