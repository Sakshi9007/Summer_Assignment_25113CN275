#include <stdio.h>

int main() 
{
    int decimal, i = 0, temp;
    int binary[30]; // Array to store up to 30 bits

    // Take input from user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Handle the case for 0
    if (decimal == 0) 
    {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    temp = decimal;
    if (temp < 0) 
    {
        printf("This basic program supports non-negative integers.\n");
        return 1;
    }

    while (temp > 0) 
    {
        binary[i] = temp % 2; // Store remainder (0 or 1)
        temp = temp / 2;      
        i++;                  // Move to next array index
    }

    // Print the array in reverse order to display correct binary number
    printf("Binary equivalent: ");
    for (int j = i-1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
