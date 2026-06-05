#include <stdio.h>
int main()
{
    int num, i;
    
    //take input from users
    printf("Enter the number to find its factors:");
    scanf("%d",&num);

    //check if number is valid
    if (num <= 0) 
    {
        printf("Error: Please enter a number greater than 0.\n");
        return 1; 
    }

    printf("Factors of %d are: ",num);

    for(i=1; i<=num; i++)
    {
        //check for factors
        if(num%i==0)
        {
            printf("%d, ",i);
        }
    }
    return 0;
}