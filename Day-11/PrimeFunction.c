#include <stdio.h>

//Function to check whether a given number is prime or not
int prime(int a)
{
    int count = 0;

    //Base case for 0 and 1
    if(a == 0 || a == 1)
    {
        return 0;
    }
    if(a > 1)
    {
        for(int i=1; i <= a; i++)
        {
            // Count number of divisors
            if(a % i == 0)
            {
                count++;
            }
        }
        return count;
    }
    return 0;
}

int main()
{
    int num;
    
    //Take number from user
    printf("Enter a positive number:");
    scanf("%d",&num);
    
    //Validate input
    if(num < 0)
    {
        printf("Error: Plese enter a positive number.");
        return 1;
    }

    //If count == 2: divisors are  0 and number itself: Prime number
    if(prime(num) == 2)
    {
        printf("%d is prime.", num);
    }
    //If count > 2: Not a prime number
    else
    {
        printf("%d is not prime.", num);
    }

    return 0;
}