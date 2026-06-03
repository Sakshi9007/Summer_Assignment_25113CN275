#include <stdio.h>
int main()
{
    int num1, num2, lcm, i;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    i = 1;
    while((num1*i)%num2 != 0)
    {
        i++;
    }
    lcm = num1*i;
    printf("LCM=%d",lcm);
}