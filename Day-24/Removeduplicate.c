#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];

    //Input the string from user
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int n = strlen(str);

    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (str[i] == str[j]) 
            {
                // Shift subsequent characters to the left
                for (int k = j; k < n; k++) 
                {
                    str[k] = str[k + 1];
                }
                n--; 
                j--; 
            }
        }
    }
    
    // Print result
    printf("String after removing duplicates: %s\n", str);

    return 0;
}
