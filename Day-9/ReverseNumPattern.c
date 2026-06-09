#include <stdio.h>

int main()
{
    int rows, i, j;
    
    //Take number of rows from users
    printf("Enter the number of rows:");
    scanf("%d",&rows);

    //Outer loop for handeling nummber of rows
    for(i=rows; i >= 1; i--)
    {
        //Inner loop for printing numbers in rows
        for(j=1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}