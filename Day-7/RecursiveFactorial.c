#include <stdio.h>
//Recursive function to calculate factorial 
unsigned long long factorial(int n)
{
    //handle the case for 0 and 1
    if (n==0 || n==1)
    {
        return 1;
    }   
    else
    {
        return n * factorial(n-1);
    }
}
int main()
{
    int number;
    //Take input from user
    printf("Enter a positive number:");
    scanf("%d",&number);
    
    //Validate the input for negative numbers
    if(number < 0)
    {
        printf("Factorial for negative numbers is not defined.");
    }
    else
    {
        printf("Factorial of %d is %llu. \n", number, factorial(number));
    }
    return 0;
}
