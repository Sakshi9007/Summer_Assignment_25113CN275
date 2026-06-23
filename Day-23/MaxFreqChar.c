#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int freq[256] = {0}, i;
    int max_freq = 0;
    char max_char;

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

    // Find maximum occuring character
    for(i = 0; i < 256; i++) 
    {
        if(freq[i] > max_freq)
        {
            max_freq = freq[i];
            max_char = (char)i;
        }
    }

    // Print result
    printf("Maximum occurring character: '%c'\n", max_char);
    printf("Frequency: %d\n", max_freq);
    
    return 0;
}