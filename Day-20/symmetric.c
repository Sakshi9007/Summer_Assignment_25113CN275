#include <stdio.h>

int main()
{
    int rows, cols, i, j, issymmetric = 1;

    //Get the dimensions of matrix
    printf("Enter the rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    //Validate matrix: Non square matrix can't be symmetric
    if(rows != cols)
    {
        printf("Enter a square matrix.");
        return 1;
    }

    //Input matrix elements
    printf("Enter the elements of matrix : \n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    //Check for symmetric matrix 
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < i; j++)
        {
            if(matrix[i][j] != matrix[j][i])
            {
                issymmetric == 0;
                break;
            }
        }
    }

    //Print result
    if(issymmetric == 1)
    {
        printf("The given matrix is a symmetric matrix.");
    }
    else
    {
        printf("The given matrix is not a symmetric matrix.");
    }
    
    return 0;
}
