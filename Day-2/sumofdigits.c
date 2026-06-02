#include <stdio.h>
int main()
{
    int n, N, sum=0, remainder;
    
    printf("Enter the number:");
    scanf("%d",&n);

    N=(n<0)? -n: n ;
    while (N!=0)
    {
        remainder = N%10;
        sum += remainder;
        N= N/10;
    }

    printf("Sum of digits of %d is %d.", n, sum);
    return 0;
}
