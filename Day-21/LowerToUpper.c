#include <stdio.h>
#include <ctype.h> 

int main() 
{
    char str[100];

    //Get string from user
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin); 

    //convert lowercase to uppercase
    for (int i = 0; str[i] != '\0'; i++) 
    {
        str[i] = toupper((unsigned char)str[i]);
    }

    //print result
    printf("Uppercase string: %s", str);

    return 0;
}
