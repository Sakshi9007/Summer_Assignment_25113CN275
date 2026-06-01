#include <stdio.h>
int main()
{
    int n, i, N;

    printf("Enter the number:");
    scanf("%d",&n);

    N=n;
    for(i=1; i<=10; i++)
    {
        N = n*i;
        printf("\n %d",N);
    }
    return 0;
}