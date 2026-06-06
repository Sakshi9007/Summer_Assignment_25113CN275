#include <stdio.h>
int main()
{
    int number, power, N, i;

    // Take the input from user
    printf("Enter the number:");
    scanf("%d",&number);
    printf("Enter the power to be calculated:");
    scanf("%d",&power);

    N=number;   //secure original number
    //calculate power
    for( i= 1; i < power; i++)
    {
        number *= N;
    }
    
    printf("Result= %d", number);
}