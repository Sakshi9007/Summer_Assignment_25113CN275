#include <stdio.h>

//Recursive function to return reverse of a number
int reverse(int num, int reversed)
{
    //Base case for 0
    if(num==0)
    {
        return reversed;
    }
    int lastdigit = num % 10;
    reversed = reversed*10 + lastdigit;
    
    return reverse(num/10, reversed);
}

int main()
{
    int number;
    printf("Enter a positive number:");
    scanf("%d",&number);

    printf("Reversed number: %d",reverse(number,0));
    return 0;
}