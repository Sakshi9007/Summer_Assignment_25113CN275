#include <stdio.h>

int main()
{
    char str[100] ;
    int words = 0, i;

    //Get the string from user
    printf("Enter the string:");
    fgets(str, sizeof(str), stdin);

    // Logic to count words
    for(i = 0; str[i] != '\0'; i++)
    {
        
        if((i == 0 || str[i-1] == ' ' || str[i-1] == '\t' || str[i-1] == '\n') && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            words++;
        }
        else
        {
            continue;
        }
    }

    // Print the result
    printf("Given string contains %d words.",words);

    return 0;
}
