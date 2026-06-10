#include <stdio.h>

int main() 
{
    int rows;
    char ch='A';

    // Get the number of rows from user
    printf("Enter the number of rows:");
    scanf("%d", &rows);

    // Outer loop handles the number of rows
    for (int i = 1; i <= rows; i++) 
    {
        
        // First inner loop for leading spaces
        for (int j = 1; j <= rows-i; j++) 
        {
            printf(" ");
        }

        ch = 'A';
        // Second inner loop to print characters in increasing order
        for(int j=1; j <= i; j++)
        {
            printf("%c",ch + j-1);
        }

        //Third inner loop to print characters in decreasing order
        for(int j = i-1; j >= 1; j--)
        {
            printf("%c",ch + j-1);
        }

        // Move to the next line 
        printf("\n");
    }
    return 0;
}