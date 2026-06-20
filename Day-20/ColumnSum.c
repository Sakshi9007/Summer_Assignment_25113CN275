#include <stdio.h>

int main()
{
    int rows, cols, i, j, col_sum;

    //Get the dimensions of matrix
    printf("Enter the rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    //Input matrix elements
    printf("Enter the elements of matrix : \n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    //Logic to calculate column wise sum
    printf("Column - wise sum of the matrix :\n" );
    for(j = 0; j < cols; j++)
    {
        col_sum = 0;
        for(i = 0; i < rows; i++)
        {
            col_sum += matrix[i][j];
        }
        printf("Sum of elements in column %d is %d.\n",j+1,col_sum);
    }
    return 0;
}