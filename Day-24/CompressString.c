#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100] ;
    char compressed[100];
    
    int i = 0, j = 0;

    //Input the string from user
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    while (str[i] != '\0') 
    {
        int count = 1;
        
        // Count consecutive occurrences of the current character
        while (str[i] == str[i + 1]) 
        {
            count++;
            i++;
        }
        
        // Store the character in the compressed string
        compressed[j++] = str[i];
        
        // Convert the integer count into characters and store them
        if (count >= 10) 
        {
            // Handle two-digit counts 
            compressed[j++] = (count / 10) + '0';
            compressed[j++] = (count % 10) + '0';
        } 
        else 
        {
            // Handle single-digit counts
            compressed[j++] = count + '0';
        }
        
        i++; // Move to the next unique character
    }
    
    compressed[j] = '\0';
    
    // Print the results
    printf("Original String: %s\n", str);
    printf("Compressed String: %s\n", compressed);
    
    return 0;
}
