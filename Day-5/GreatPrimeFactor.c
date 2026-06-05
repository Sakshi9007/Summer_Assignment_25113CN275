#include <stdio.h>
int main ()
{
    long long num, N, max_prime=-1, i;

    //Take the input
    printf("Enter a positive integer: ");
    scanf("%lld", &num); 
    N=num;
    //Validate the number
    if(num<=0)
    {
        printf("Error:Please enter a valide number.");
        return 1;
    }

    // Check odd numbers up to the square root of num
    while (num % 2 == 0)
    {
        max_prime = 2;
        num /= 2;
    }

    // Check odd numbers up to the square root of num
    for (i = 3; i * i <= num; i += 2) 
    {
        while (num % i == 0) {
            max_prime = i;
            num /= i;
        }
    }

    // If num is still greater than 2, the remaining num must be prime
    if (num > 2) 
    {
        max_prime = num;
    }

    printf("The largest prime factor of %lld is %lld.",N,max_prime);
    return 0;
}