#include <stdio.h>
int main()
{
    int n, product=1, remainder, N;
    
    printf("Enter the number:");
    scanf("%d",&n);

    N=(n<0)? -n: n;
    while(N!=0)
    {
        remainder = N%10;
        product *= remainder;
        N = N/10;
    }

    printf("Product of digits is %d.",product);
    return 0;
}