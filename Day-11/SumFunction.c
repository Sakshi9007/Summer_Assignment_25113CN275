#include <stdio.h>

//Function to calculate sum of two numbers
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2;
    // Take the numbers from user
    printf("Enter two numbers:");
    scanf("%d %d",&num1, &num2);

    //Print the sum using sum() function
    printf("The sum of %d and %d is %d.",num1, num2, sum(num1, num2));

    return 0;
}