#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp, reverse[100];
    int start, end;

    //Get the string from user
    printf("Enter the string :");
    fgets(str, sizeof(str), stdin);

    strcpy(reverse, str);
    // Swap characters from both ends until pointers meet
    start = 0;
    end = strlen(reverse)-1;
    while (start < end) 
    {
        temp = reverse[start];
        reverse[start] = reverse[end];
        reverse[end] = temp;

        start++; 
        end--;  
    }

    //check for palindrome
    if(strcmp(str, reverse) == 0)
    {
        printf("Given string is a palindrome string.");
    }
    else
    {
        printf("Given string is not a palindrome string.");
    }
    return 0;
}