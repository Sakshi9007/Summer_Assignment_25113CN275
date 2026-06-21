#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp;
    int start, end;

    //Get the string from user
    printf("Enter the string :");
    scanf("%s",str);

    // Swap characters from both ends until pointers meet
    start = 0;
    end = strlen(str)-1;
    while (start < end) 
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++; 
        end--;  
    }

    //print result
    printf("Reversed string: %s",str);

    return 0;
}