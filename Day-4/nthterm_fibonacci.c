#include <stdio.h>
int main()
{
    int a=0, b=1, c=0, n, i;
    printf("Enter the position to find fibonacci number:");
    scanf("%d",&n);
    if(n==1)
    printf("0");
    if(n==2)
    printf("1");
    else{
    for(i=2; i<n; i++)
    {
        
        c=a+b;
        a=b;
        b=c;
    }   
    printf("%d",c);
    }
    return 0; 
}