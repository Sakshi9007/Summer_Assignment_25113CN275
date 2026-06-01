#include <stdio.h>
int main()
{
    int n, factorial=1, i;

    printf("Enter the number:");
    scanf("%d",&n);

    if (n==0)
    {
        printf("Factorial=1");
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            factorial *= i;
        }
    }
    printf("Facctorial of %d is %d.",n,factorial);
    return 0;
}