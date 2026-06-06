#include <stdio.h>

int main() 
{
    unsigned int number, num ;
    int count=0;

    // Take input from user
    printf("Enter a positive integer: ");
    scanf("%u", &number);
    
    //set bits using Brian Kernighan's Algorithm
    num = number;
    while (num > 0) 
    {
        num &= (num - 1); // Clears the rightmost set bit
        count++;          
    }
    
    printf("The number of set bits in %u is: %d\n", number, count);

    return 0;
}
