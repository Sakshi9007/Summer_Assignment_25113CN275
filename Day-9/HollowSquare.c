#include <stdio.h>

int main()
{
    int size, i, j;
    
    //Take size of square from user
    printf("Enter the size of square:");
    scanf("%d",&size);

    //Outer loop for rows
    for(i=0; i < size; i++)
    {
        //Inner loop for column
        for(j=0; j < size; j++)
        {
            //Print * if it is first row/column or last row/column
            if(i==0 || i==size-1 || j==0 || j==size-1 )
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}