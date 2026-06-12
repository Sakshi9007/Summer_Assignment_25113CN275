#include <stdio.h>

// Function to check whether a number is a Perfect number
int PerfectNum(int a)
{
    int sum = 0;
    for(int i=1; i<=(a/2); i++)
    {
        //check for factors
        if(a % i == 0)
        {
            //add factors
            sum += i;
        }
    }    
    return sum == a;
}

int main()
{
    int num;

    //Get number from user
    printf("Enter a positive number: ");
    scanf("%d", &num);

    //check if number is valid
    if(num<=0)
    {
        printf("%d is not a perfect number.",num);
        return 1;
    }
    
    if(PerfectNum(num))
    {
        printf("%d is a perfect number.",num);
    }
    else
    {
        printf("%d is not a perfect number.",num);
    }
    return 0;
}