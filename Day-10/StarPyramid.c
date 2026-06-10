#include <stdio.h>

int main() 
{
    int rows;

    // Get the number of rows from user
    printf("Enter the number of rows:");
    scanf("%d", &rows);

    // Outer loop handles the number of rows
    for (int i = 0; i < rows; i++) 
    {
        
        // First inner loop for leading spaces
        for (int j = 0; j < rows-i-1; j++) 
        {
            printf(" ");
        }

        //nums1 : i+1
        for(int j=1; j<=i+1; j++)
        {
            printf("*");
        }

        //nums2: Backward loop
        for(int j=i; j>=1; j--)
        {
            printf("*");
        }

        // Move to the next line 
        printf("\n");
    }
    return 0;
}
