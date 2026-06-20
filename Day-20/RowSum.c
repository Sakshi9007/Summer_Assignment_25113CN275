#include <stdio.h>

int main()
{
    int rows, cols, i, j, row_sum;

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

    //Logic to calculate row wise sum
    printf("Row - wise sum of the matrix :\n" );
    for(i = 0; i < rows; i++)
    {
        row_sum = 0;
        for(j = 0; j < cols; j++)
        {
            row_sum += matrix[i][j];
        }
        printf("Sum of elements in row %d is %d.\n",i+1, row_sum);
    }
    return 0;
}