#include <stdio.h>

//Function to find the maximum between two numbers
int maximum(int a, int b)
{
    if(a > b)
    {
        return a;
    } 
    else
    {
        return b;
    }
}

int main()
{
    int num1, num2;

    //Get the numbers to be compared from user
    printf("Enter num1 and num2:");
    scanf("%d %d",&num1, &num2);

    //Print the result
    printf("Maximum number = %d", maximum(num1, num2));

    return 0;
}