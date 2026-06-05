#include <stdio.h>
int main()
{
    int num, i, sum=0;
    //take input from users
    printf("Enter a positive integer:");
    scanf("%d",&num);

    //check if number is valid
    if(num<=0)
    {
        printf("%d is not a perfect number.",num);
        return 1;
    }
    
    for(i=1; i<=(num/2); i++)
    {
        //check for factors
        if(num%i==0)
        {
            sum+=i;
        }
    }
    //final comparison and print output
    if(sum==num)
    {
        printf("%d is a perfect number.",num);
    }
    else
    {
        printf("%d is not a perfect number.",num); 
    }
    return 0;
}