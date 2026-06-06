#include <stdio.h>
#include <math.h>

int main() 
{
    long long binary, n, decimalNum=0;
    int i=0, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    n=binary;   //Store the original number
    while (n != 0) 
    {
        // Extract the last digit
        remainder = n % 10;
        
        // Remove the last digit from the number
        n /= 10;
        
        decimalNum += remainder * pow(2, i);
        
        i++;
    }
    printf("Decimal form of %lld is %lld.", binary, decimalNum);
    return 0;
}
