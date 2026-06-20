#include <stdio.h>

int main()
{
    int rows1, cols1, rows2, cols2, i, j, k;

    //Get the dimensions of matrices from user
    printf("Enter the no. of rows and columns for first matrix: ");
    scanf("%d %d", &rows1, &cols1);


    printf("Enter the no. of rows and columns for second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    //validate dimensions
    if(cols1 != rows2)
    {
        printf("Multiplication not possible.");
        return 1;
    }

    int mat1[rows1][cols1];
    int mat2[rows2][cols2];

    //Input the elements of matrix
    printf("Enter the elements of matrix 1: \n");
    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < cols1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements of matrix 2: \n");
    for(i = 0; i < rows2; i++)
    {
        for(j = 0; j < cols2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    int product[rows1][cols2];

    //product logic
    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < cols2; j++)
        {
            product[i][j] = 0;
            for(k = 0; k < cols1; k++)
            {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    //Print result matrix
    printf("product of given matrices:\n ");
    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < cols2; j++)
        {
            printf("%d ", product[i][j]);
        }
    }
    return 0;
}