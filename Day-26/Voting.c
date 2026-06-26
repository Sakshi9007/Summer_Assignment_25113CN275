#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int voter_age ;
    char is_citizen[5] ;

    printf("Voting critria\n");
    // Input age from user
    printf("Enter your age: ");
    scanf("%d", &voter_age);
    getchar();

    //Ask if citizen or not
    printf("Are you a citizen (Yes / No): ");
    fgets(is_citizen, sizeof(is_citizen), stdin);
    is_citizen[strcspn(is_citizen, "\n")] = '\0';

    //Convert user input to lower case
    for (int i = 0; is_citizen[i] != '\0'; i++)
    {
        is_citizen[i] = tolower((unsigned char)is_citizen[i]);
    }

    if(voter_age >= 18 && strcmp(is_citizen, "Yes") == 1)
    {
        printf("\nYou are elegible to vote.");
    }
    else
    {
        printf("\nYou are not elegible to vote.");
    }

    return 0;
}