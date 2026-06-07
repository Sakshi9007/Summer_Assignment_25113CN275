#include <stdio.h>

// Recursive function to calculate sum of digits
int sumOfDigits(int num) 
{
    // Base Case for 0: Stop recursion
    if (num == 0) 
    {
        return 0;
    }

    return (num % 10) + sumOfDigits(num / 10);
}

int main() 
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Handle negative numbers by converting them to positive
    if (number < 0) 
    {
        number = -number;
    }

    printf("Sum of digits of %d is %d.\n",number, sumOfDigits(number));

    return 0;
}


