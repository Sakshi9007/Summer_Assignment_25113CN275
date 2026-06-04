#include <stdio.h>
int main()
{
    int a=0, b=1, c, i, n;

    printf("Enter the number of terms:");
    scanf("%d",&n);

    //Printing first two terms:
    printf("%d, ",a);
    printf("%d, ",b);
    for(i=1; i<(n-1); i++)
    {
        //calculating next term:
        c=a+b;
        a=b;
        b=c;
        //Printing rest of terms:
        printf("%d, ",c);
    }
    return 0;
}