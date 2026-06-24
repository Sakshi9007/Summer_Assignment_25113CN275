#include <stdio.h>
#include <string.h> 

int main() 
{
    // Define the two strings to check
    char str1[100] ;
    char str2[100] ;
    
    //Input the first string from user
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    //Input the second string 
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    
    int len1 = 0;
    int len2 = 0;
    int isRotation = 0;

    // Manually calculate the length of str1
    while (str1[len1] != '\0') 
    {
        len1++;
    }

    // Manually calculate the length of str2
    while (str2[len2] != '\0') 
    {
        len2++;
    }

    // Check if lengths are equal or not, otherwise they can't be rotations of each other
    if (len1 == len2) 
    {
        // Edge case for two empty strings
        if (len1 == 0) 
        {
            isRotation = 1;
        } 
        else 
        {
            // Test every possible rotation starting index 'i' in str1
            for (int i = 0; i < len1; i++) 
            {
                int match = 1;
                
                // Compare str2 with str1 shifted by 'i' positions
                for (int j = 0; j < len1; j++) 
                {
                    if (str1[(i + j) % len1] != str2[j]) 
                    {
                        match = 0; // Character mismatch found
                        break;
                    }
                }
                
                // If a full matching rotation sequence is found, break early
                if (match == 1) 
                {
                    isRotation = 1;
                    break;
                }
            }
        }
    }

    // Output the final verification result
    if (isRotation) 
    {
        printf("The strings are rotations of each other.\n");
    } 
    else 
    {
        printf("The strings are not rotations of each other.\n");
    }

    return 0;
}
