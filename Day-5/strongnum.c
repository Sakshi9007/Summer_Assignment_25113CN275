#include <stdio.h>
int main()
{
    int num, N, lastdigit, sum=0, fact, i;
    //Take input from user
    printf("Enter the number to check:");
    scanf("%d",&num);
    //Save original number for final comparison
    N=num;

    while(N > 0)
    {
        lastdigit=N%10;
        fact=1;   //reset fact
        
        //calculate factorial of last digit
        for(i=1; i<=lastdigit; i++)
        {
            fact *= i;
        }
        //update the sum
        sum+=fact;
        //delete the lasst digit
        N/=10;
    }
    //final comparison and print output
    if(num==sum)
    {
        printf("%d is a strong number.",num);
    }
    else
    {
        printf("%d is not a strong number.",num);
    }
    return 0;
}