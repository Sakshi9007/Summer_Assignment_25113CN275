#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, longest = 0, letters = 0;
    int start = 0, longeststart = 0;

    //Input the string
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            if(letters > longest)
            {
                longest = letters;
                longeststart = start;
            }
        letters = 0;
        start = i + 1;
    }
    else
    {
        letters++;
    }
    }

    if(letters > longest)
    {
        longest = letters;
        longeststart = start;
    }
    
    // Print the result
    printf("%d\n", longest);
    for(i = longeststart; i < longeststart + longest; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}