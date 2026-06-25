#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int found = 0, i, j;

    //Input the first string 
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    //Input the second string 
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int str2_used[100] = {0};

    //Search for common characters
    for(i = 0; str1[i] != '\0'; i++)
    {
        for(j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j] && str2_used[j] == 0)
            {
                printf("%c ", str1[i]);    
                str2_used[j] = 1 ;   //mark as used
                found = 1;
            }
        }
    }

    //If no common character found
    if(found == 0)
    {
        printf("No common characters found.");
    }

    return 0;
}