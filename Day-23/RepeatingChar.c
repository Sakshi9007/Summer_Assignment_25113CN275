#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] ;
    int freq[256] = {0}, i, found = 0;
    
    // Input a string from user
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // loop to count the frequency of characters used in the string
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
    }

    // Loop to print the first repeating character
    for(i = 0; str[i] != '\0'; i++)
    {
        if(freq[(unsigned char)str[i]] > 1)
        {
            printf("%c",str[i]);
            found = 1;
            break;
        }
    }
    
    if(!found)
    {
        printf("No repeating character found.");
    }

    return 0;
}