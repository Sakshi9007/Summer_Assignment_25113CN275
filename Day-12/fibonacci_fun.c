#include <stdio.h>

//Function to print fibonacci series
void fibonacci(int n)
{
    int a = 0, b = 1, c;

    if(n >= 1)
        printf("%d ", a);

    if(n >= 2)
        printf("%d ", b);

    for(int i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}

int main()
{
    int terms;

    //Get number of terms from users
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    //Validate the input
    if(terms <= 0)
    {
        printf("Please enter a positive integer.");
        return 1;
    }
    //Print fibonacci series
    else
    {
        fibonacci(terms);
    }
    return 0;
}