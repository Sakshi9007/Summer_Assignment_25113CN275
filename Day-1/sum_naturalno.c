#include <stdio.h>
int main()
{
    int n,sum=0, i;

    printf("Enter the natural number:");
    scanf("%d", &n);

    for (i = 1; i<=n; ++i) 
        {
            sum += i;
        }
    printf("The sum of first %d natural numbers is %d.", n, sum);
    return 0;        
}