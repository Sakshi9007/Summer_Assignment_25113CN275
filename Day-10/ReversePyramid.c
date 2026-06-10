#include <stdio.h>

int main() 
{
    int rows;

    // Get the number of rows from user
    printf("Enter the number of rows:");
    scanf("%d", &rows);

    // Outer loop handles the number of rows
    for (int i = rows; i >= 1; i--) 
    {
        
        // First inner loop for leading spaces
        for (int j = 0; j < rows-i; j++) 
        {
            printf(" ");
        }

        // printing stars in each row
        for(int j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }

        // Move to the next line 
        printf("\n");
    }
    return 0;
}
