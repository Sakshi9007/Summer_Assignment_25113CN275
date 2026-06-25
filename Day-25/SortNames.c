#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;

    //Input the number of names and validate it
    printf("Enter the number of names: ");
    scanf("%d", &n);

    if(n < 1)
    {
        printf("There should be atleast one names.");
        return 1;
    }

    char names[100][50];  //2D array to hold 100 names with 49 characters
    char temp[50];

    //Read names from user
    printf("Enter the names:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }

    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            //If the current name is alphabetically greater than the next name, swap them
            if((strcmp(names[j], names[j+1])) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }

    //Display the sorted names
    printf("Sorted names are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%s, ", names[i]);
    }
    return 0;
}