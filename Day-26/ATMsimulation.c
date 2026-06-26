#include <stdio.h>
#include <stdlib.h>

// Global variables to track state
float balance = 5000.0; // Initial simulated bank balance
int default_pin = 1234;  // Default pre-set ATM PIN

// Function prototypes
int authenticate_user();
void display_menu();
void check_balance();
void deposit_money();
void withdraw_money();

int main() {
    int choice;
    
    printf("===========================================\n");
    printf("    WELCOME TO THE STATE BANK OF INDIA      \n");
    printf("===========================================\n");

    // Step 1: Secure PIN entry before giving access
    if (!authenticate_user()) 
    {
        printf("\n[ERROR] Too many incorrect PIN attempts. Card blocked.\n");
        printf("Please contact customer service. Exiting system...\n");
        return 0; 
    }

    // Step 2: Main ATM operation loop
    while (1) 
    {
        display_menu();
        printf("Enter your choice (1-4): ");
        if (scanf("%d", &choice) != 1) {
            printf("\n[INVALID] Please enter a valid number.\n");
            while (getchar() != '\n'); 
            continue;
        }

        switch (choice) 
        {
            case 1:
                check_balance();
                break;
            case 2:
                deposit_money();
                break;
            case 3:
                withdraw_money();
                break;
            case 4:
                printf("\nThank you for choosing Emerald Bank. Goodbye!\n");
                exit(0);
            default:
                printf("\n[INVALID] Option out of range. Try again.\n");
        }
    }
    return 0;
}

// Function to handle secure PIN validation
int authenticate_user() 
{
    int entered_pin;
    int attempts = 3;

    while (attempts > 0) 
    {
        printf("\nPlease enter your 4-digit PIN: ");
        scanf("%d", &entered_pin);

        if (entered_pin == default_pin) {
            printf("\n[SUCCESS] PIN verified. Access granted.\n");
            return 1; // Authentication successful
        } else {
            attempts--;
            printf("[WARNING] Incorrect PIN. Attempts remaining: %d\n", attempts);
        }
    }
    return 0; // Authentication failed
}

// Function to print the ATM options
void display_menu() {
    printf("\n-------------------------------------------\n");
    printf("                ATM MAIN MENU              \n");
    printf("-------------------------------------------\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Funds\n");
    printf("3. Withdraw Cash\n");
    printf("4. Exit Session\n");
    printf("-------------------------------------------\n");
}

// Function to print current balance
void check_balance() 
{
    printf("\n>>> CURRENT BALANCE: $%.2f\n", balance);
}

// Function to add funds safely
void deposit_money() 
{
    float deposit_amount;
    printf("\nEnter the amount to deposit: $");
    scanf("%f", &deposit_amount);

    if (deposit_amount <= 0) {
        printf("[ERROR] Deposit amount must be positive.\n");
    } else {
        balance += deposit_amount;
        printf("[SUCCESS] $%.2f deposited successfully.\n", deposit_amount);
        printf("New Balance: $%.2f\n", balance);
    }
}

// Function to withdraw funds with rule checking
void withdraw_money() 
{
    float withdraw_amount;
    printf("\nEnter the amount to withdraw: $");
    scanf("%f", &withdraw_amount);

    if (withdraw_amount <= 0) {
        printf("[ERROR] Withdrawal amount must be positive.\n");
    } else if (withdraw_amount > balance) {
        printf("[ERROR] Insufficient funds! Your available balance is $%.2f\n", balance);
    } else {
        balance -= withdraw_amount;
        printf("[SUCCESS] Please collect your cash: $%.2f\n", withdraw_amount);
        printf("Remaining Balance: $%.2f\n", balance);
    }
}