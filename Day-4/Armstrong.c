#include <stdio.h>
#include <math.h>
int main()
{
    int num, N, remainder, count = 0, result=0;
    printf("Enter the number:");
    scanf("%d",&num);
    N=num;
    while(N!=0)
    {
        N/=10;
        ++count;
    }
    N=num;
    while(N!=0)
    {
        remainder=N%10;
        result += pow(remainder,count);
        N/=10;
    }
    if(result==num)
    {
        printf("%d is an Armstrong number.",num);
    }
    else
    {
        printf("%d is not an Armstrong number.",num);
    }
    return 0;
}