#include <stdio.h>
int main()
{
    int rows;
    char ch='A';

    //Get number of rows from users
    printf("Enter the number of rows:");
    scanf("%d",&rows);

    //Outer loop for number of rows
    for(int i=1; i <= rows; i++)
    {
        ch = 'A';
        
        //Inner loop for printing characters in rows
        for(int j=1; j <= i; j++)
        {
            printf("%c ",ch);
            ch = ch + 1;
        }   
        //Move to next row
        printf("\n");
    }
    return 0;
}