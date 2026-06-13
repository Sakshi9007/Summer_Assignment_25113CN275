#include <stdio.h>

int main() 
{
    int n, i;

    // Get the number of elements from user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    //Validate the array
    if(n <= 0)
    {
        printf("Array size must be greater than 0.");
        return 1;
    }

    int arr[n];
    // Take array elements from the user
    for(i = 0; i < n; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the elements stored in the array
    printf("The elements in the array are:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
