#include <stdio.h>
#include <math.h>

// Function to check whether a number is an Armstrong number
int armstrong(int a)
{
    int n, remainder, result = 0, count = 0;

    //count number of digits
    n = a;
    while(n != 0)
    {
        n /= 10;
        ++count;
    }
    n = a;
    while(n != 0)
    {
        remainder = n % 10;
        result += pow(remainder, count);
        n /= 10;
    }

    return result == a;
}

int main()
{
    int num;

    //Take input from user
    printf("Enter a positive number:");
    scanf("%d", &num);

    //Validate the input
    if(num < 0)
    {
        printf("Please enter a positive integer.");
        return 1;
    }

    //Use armstrong function
    if(armstrong(num))
    {
        printf("%d is a armstrong number.",num);
    }
    else 
    {
        printf("%d is not a armstrong number.",num);
    }
    return 0;
}