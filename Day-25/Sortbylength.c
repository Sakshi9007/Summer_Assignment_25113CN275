#include <stdio.h>
#include <string.h>

int main() 
{
    // Array of words to be sorted
    char words[50][50] ;
    int n, i, j;

    //Input the number of names and validate it
    printf("Enter the number of names: ");
    scanf("%d", &n);
    if(n < 1)
    {
        printf("There should be atleast one names.");
        return 1;
    }

    //Read names from user
    printf("Enter the names:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s", words[i]);
    }
    
    char temp[50];

    // Sort the words based on lengths using Bubble Sort
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (strlen(words[j]) > strlen(words[j + 1])) 
            {
                // Swap words
                strcpy(temp, words[j]);
                strcpy(words[j], words[j+1]);
                strcpy(words[j+1], temp);
            }
        }
    }

    // Print the sorted list of words
    printf("Words sorted by length:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%s, ",words[i]);
    }
    return 0;
}
