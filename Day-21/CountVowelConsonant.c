#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, vowel = 0, consonant = 0;

    //Get the string from user
    printf("Enter the string:");
    fgets(str, sizeof(str), stdin);

    //Loop for counting vowels and consonants
    for(i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];
        if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            if(ch == 'a' || ch == 'A'
                || ch == 'e' || ch == 'E' 
                || ch == 'i' || ch == 'I' 
                || ch == 'o' || ch == 'O' 
                || ch == 'u' || ch == 'U')
            {
                vowel++;
            }
            else if(ch == ' ')
            {
                continue;
            }
            else
            {
                consonant++;
            }
        }
    }

    //print result
    printf("Vowels: %d \n Consonants: %d",vowel, consonant);
    return 0;
}