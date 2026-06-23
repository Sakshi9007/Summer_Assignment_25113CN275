#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int freq[256] = {0}, i;

    //Input the first string from user
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    //Input the second string 
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if(strlen(str1) != strlen(str2))
    {
        printf("Not an anagram.");
        return 0;
    }

    //Increment count for str1 and decrement for str2
    for(i = 0;  str1[i] != '\0'; i++)
    {
        freq[(unsigned char)str1[i]]++;
        freq[(unsigned char)str2[i]]--;
    }

    //If all frequencies are 0, strings are anagram
    for(i = 0; i < 256; i++)
    {
        if (freq[i] !=0 )
        {
            printf("Not an anagram.");
            return 0;
        }
    }

    printf("Strings are an anagram.");

    return 0;
}