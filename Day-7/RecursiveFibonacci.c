#include <stdio.h>

int fibonacci(int n)
{
    //Base case for 0 and 1
    if(n<=1)
    {
        return 1;
    }
    //Recursive case
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    int terms;
    
    //Take input from user
    printf("Enter the positive integer:");
    scanf("%d",&terms);

    //Validate the input
    if(terms < 0)
    {
        printf("Error: Please enter a positive integer.");
        return 1;
    }

    printf("Fibonacci series:\n");

    //Calculate fibonacci series
    for (int i = 0; i < terms; i++) 
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}