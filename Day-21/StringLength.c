#include <stdio.h>

int main()
{
    int length = 0;
    char str[50];
    
    //Get the string from user
    printf("Enter the string: ");
    scanf("%s",str);

    for(int i = 0; str[i] != '\0';i++)
    {
        length++ ;
    }

    //print result
    printf("Length of the string is %d.",length);

    return 0;
}