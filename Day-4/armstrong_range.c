#include <stdio.h>
#include <math.h>
int main()
{
     int N, remainder, count, result,start,end,i;
    printf("Enter the start of range:");
    scanf("%d",&start);
    printf("Enter the end of range:");
    scanf("%d",&end);

    printf("Armstrong numbers between %d and %d : ",start, end);

    for(i=start; i<=end; i++)
    {
        count=0;
        result=0;

        N=i;

        while(N!=0)
        {
            N/=10;
            ++count;
        }

        N=i;

        while(N!=0)
        {
            remainder=N%10;
            result += pow(remainder,count);
            N/=10;
        }
        if(result==i)
        {
            printf("%d, ",i);
        }
    }
    return 0;
}