#include <stdio.h>

// Function to check a number fo palindrome
int palindrome(int a)
{
    int reverse = 0, remainder, n;

    n=a;
    while(n != 0)
    {
        remainder = n % 10;
        reverse = reverse*10 + remainder;
        n = n / 10;
    }
    
    return reverse == a;
}

int main()
{
    int num;
    //Get the number to be checked for palindrome from user
    printf("Enter the number: ");
    scanf("%d",&num);

    //validate the input
    if(num < 0)
    {
        printf("Please enter a positive integer.");
        return 1;
    }

    // Use function
    if(palindrome(num))
    {
        printf("%d is a palindrome.", num);
    }
    else
    {
        printf("%d is not a palindrome.", num);
    }
    return 0;
}