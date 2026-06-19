#include <stdio.h>

int main()
{
    int rows, cols, i, j, diagonal_sum = 0;

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

    //Diagonal sum
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            if(i == j)
            {
                diagonal_sum += matrix[i][j];
            }
        }
    }

    //print result
    printf("The sum of diagonal of matrix is %d.", diagonal_sum);

    return 0;
}
