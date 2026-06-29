#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

void getString(char *str, int size) 
{
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';
}

int main() 
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int choice;

    do {
        // Display Menu System
        printf("\n====================================");
        printf("\n    STRING OPERATIONS SYSTEM        ");
        printf("\n====================================");
        printf("\n1. Find Length of a String");
        printf("\n2. Copy String");
        printf("\n3. Concatenate Two Strings");
        printf("\n4. Compare Two Strings");
        printf("\n5. Reverse a String");
        printf("\n6. Exit");
        printf("\n-------------------------------------");
        printf("\nEnter your choice (1-6): ");
        // Read choice and check format validation
        if (scanf("%d", &choice) != 1) 
        {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }
        while (getchar() != '\n'); 

        switch (choice) {
            case 1:
                printf("\nEnter a string: ");
                getString(str1, MAX_SIZE);
                printf("Length of the string: %lu\n", strlen(str1));
                break;

            case 2:
                printf("\nEnter source string to copy: ");
                getString(str1, MAX_SIZE);
                strcpy(str2, str1);
                printf("Successfully Copied!\nDestination String: %s\n", str2);
                break;

            case 3:
                printf("\nEnter first string: ");
                getString(str1, MAX_SIZE);
                printf("Enter second string to append: ");
                getString(str2, MAX_SIZE);
                
                // Safety check for destination array buffer overflow
                if (strlen(str1) + strlen(str2) < MAX_SIZE) {
                    strcat(str1, str2);
                    printf("Concatenated String: %s\n", str1);
                } else {
                    printf("Error: Combined string size exceeds storage limit!\n");
                }
                break;

            case 4:
                printf("\nEnter first string: ");
                getString(str1, MAX_SIZE);
                printf("Enter second string: ");
                getString(str2, MAX_SIZE);
                
                int cmpResult = strcmp(str1, str2);
                if (cmpResult == 0) {
                    printf("Result: Both strings are exactly identical.\n");
                } else if (cmpResult > 0) {
                    printf("Result: First string is greater than second.\n");
                } else {
                    printf("Result: Second string is greater than first.\n");
                }
                break;

            case 5:
                printf("\nEnter a string to reverse: ");
                getString(str1, MAX_SIZE);
                
                int len = strlen(str1);
                printf("Reversed String: ");
                for (int i = len - 1; i >= 0; i--) {
                    putchar(str1[i]);
                }
                printf("\n");
                break;

            case 6:
                printf("\nExiting System. Goodbye!\n");
                break;

            default:
                printf("\nInvalid selection! Please choose an option between 1 and 6.\n");
        }
    } while (choice != 6);

    return 0;
}
