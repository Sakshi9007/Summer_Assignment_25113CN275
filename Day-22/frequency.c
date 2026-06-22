#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int freq[256] = {0}, i;

    //Get the string from user
    printf("Enter the string:");
    fgets(str, sizeof(str), stdin);

    // Logic to check frequency of characters
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '\n')
        {
            continue;
        }

        freq[(unsigned char) str[i]]++;
    }

    // Print the result
    printf("\nCharacter Frequencies:\n");
    for(i = 0; i < 256; i++) 
    {
        if(freq[i] != 0) //to avoid unused characters
        {
            printf("'%c' occurs %d time(s)\n", i, freq[i]);
        }
    }

    return 0;
}