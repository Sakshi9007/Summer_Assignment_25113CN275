#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    double num1, num2, result;

    do{
        printf("\n=================================\n");
        printf("      MENU-DRIVEN CALCULATOR       ");
        printf("\n=================================\n");
        printf("1: Addition (+)\n");
        printf("2: Subtraction (-)\n");
        printf("3: Multiplication (*)\n");
        printf("4: Division (/)\n");
        printf("5: Exit\n");
        printf("------------------------------------\n");
        printf("Enter your choice (1-5): ");

        //Validate input of choice
        if(scanf("%d", &choice)!= 1)
        {
            printf("Error: Invalid input.\n");
            break;
        }

        //Validate choice range
        if(choice < 1 || choice > 5)
        {
            printf("Invalid choice selection! Please choose a number between 1 and 5.");
            continue;
        }

        //Input operands
        printf("Enter first number: ");
        scanf("%lf",&num1);
        printf("Enter seccond number: ");
        scanf("%lf",&num2);

        // Direct operations using switch
        switch (choice)
        {
        case 1:
            result = num1 + num2;
            printf("Sum: %.2lf\n",result);
            break;
        case 2:
            result = num1 - num2;
            printf("Difference: %.2lf\n",result);
            break;
        case 3:
            result = num1 * num2;
            printf("Product: %.2lf\n",result);
            break;
        case 4: 
            if(num2 == 0.0)
            {
                printf("Error: Division by zero is mathematically undefined.");
            }
            else{
                result = num1 / num2;
                printf("Quotient: %.2lf\n",result);
            }
            break;
        default:
            printf("Unexpectedd error occured.\n");
            break;
        }
    }
    while(choice != 5);

    return 0;
}