#include <stdio.h>

int main()
{
    char str[100];
    int read = 0, write = 0;

    //Get the string from user
    printf("Enter the string:");
    fgets(str, sizeof(str), stdin);

    //Logic to remove space
    while(str[read] != '\0')
    {
        if(str[read] != ' ')
        {
            str[write] = str[read];
            write++;
        }
        read++;
    }
    str[write] = '\0';

    printf("Modified string: %s",str);

    return 0;
}