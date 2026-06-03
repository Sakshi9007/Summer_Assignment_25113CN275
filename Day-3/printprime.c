#include <stdio.h>
int main()
{
    int start, end, i, j, count=0;

    printf("Enter the starting point:");
    scanf("%d",&start);
    printf("Enter the ending point:",&end);
    scanf("%d",&end);
    for(i=start; i<=end; i++)
    {
        if(i<2)
        continue;
        count=0;

        for(j=1; j<=i; j++)
        {
            if(i%j == 0)
            count++;
        }
        if(count==2)
        printf("%d\n",i);
    }
    return 0;
}