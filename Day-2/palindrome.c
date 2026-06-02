#include <stdio.h>
int main()
{
    int n, N, reverse=0, remainder;

    printf("Enter the number:");
    scanf("%d",&n);

    N=n;
    while (N!=0)
    {
        remainder = N%10;
        reverse = reverse* 10 + remainder;
        N = N/10;
    }
    if (reverse==n)
    {
        printf("%d is palindrome.",n);
    }
    else
    {
        printf("%d is not palindrome.",n);
    }
    return 0;
}