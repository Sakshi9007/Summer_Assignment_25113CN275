#include <stdio.h>

//Function to calculte factorial of a number
int factorial(int a)
{
    int fact = 1;
    //Base case for 0 and 1
    if(a==0 || a==1)
    {
        return 1;
    }

    for(int i=1; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num;

    //Get input from user
    printf("Enter a positive number:");
    scanf("%d", &num);

    //Validate input
    if(num < 0)
    {
        printf("Factorial for negative numbers is not defined.");
        return 1;
    }

    printf("Factorial of %d is %d.",num, factorial(num));

    return 0;
}