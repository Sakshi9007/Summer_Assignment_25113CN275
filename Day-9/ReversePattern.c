#include <stdio.h>
int main()
{
    int rows, i, j;
    
    //Take number of rows from user
    printf("Enter the number of rows:");
    scanf("%d",&rows);

    //Outer loop for handling rows
    for(i=rows; i >= 1; i--)
    {
        //Inner loop for printing stars in rows
        for(j=1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}