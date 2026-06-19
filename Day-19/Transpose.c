#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    //Get the dimensions of matrix
    printf("Enter the rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols], transpose[cols][rows];

    //Input matrix elements
    printf("Enter the elements of matrix : \n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    //Transpose logic
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    //print result
    printf("The transpose matrix: \n");
    for(i = 0; i < cols; i++)
    {
        for(j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }
    }
    return 0;
}
