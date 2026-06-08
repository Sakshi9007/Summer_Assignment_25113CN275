#include <stdio.h>

int main()
{
    int rows;

    //Get number of rows from user
    printf("Enter the number of rows:");
    scanf("%d",&rows);

    //Outer loop for number of rows
    for(int i=1; i <= rows; i++)
    {
        //Inner loop for printing numbers in rows
        for(int j=1; j <= i; j++)
        {
            printf("%d ",j);
        }
        //Move to next row
        printf("\n");
    }
    return 0;
}