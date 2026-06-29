#include <stdio.h>
#include <stdlib.h>

#define MAX_CAPACITY 100

// Function Prototypes
void createArray(int arr[], int *size);
void displayArray(int arr[], int size);
void insertElement(int arr[], int *size);
void deleteElement(int arr[], int *size);
void searchElement(int arr[], int size);

int main() {
    int arr[MAX_CAPACITY];
    int size = 0; 
    int choice;

    while (1) {
        printf("\n=== ARRAY MENU ===\n");
        printf("1: Create Array\n");
        printf("2: Display Array\n");
        printf("3: Insert Element\n");
        printf("4: Delete Elemnet\n");
        printf("5: Search Element\n");
        printf("6: Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) 
        {
            printf("Invalid input!\n");
            break;
        }
        //Validate choice range
        if(choice < 1 || choice > 6)
        {
            printf("Invalid choice selection! Please choose a number between 1 and 6.");
            continue;
        }

        switch (choice) {
            case 1: createArray(arr, &size); break;
            case 2: displayArray(arr, size); break;
            case 3: insertElement(arr, &size); break;
            case 4: deleteElement(arr, &size); break;
            case 5: searchElement(arr, size); break;
            case 6: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}

// Create
void createArray(int arr[], int *size) 
{
    printf("Enter size (Max %d): ", MAX_CAPACITY);
    scanf("%d", size);
    if (*size < 0 || *size > MAX_CAPACITY) {
        printf("Invalid size!\n");
        *size = 0;
        return;
    }
    for (int i = 0; i < *size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
}

// Read
void displayArray(int arr[], int size) 
{
    if (size == 0) { 
        printf("Empty!\n"); 
        return; 
    }
    for (int i = 0; i < size; i++) 
        printf("%d ", arr[i]);
    printf("\n");
}

// Insert
void insertElement(int arr[], int *size) {
    if (*size >= MAX_CAPACITY) { 
        printf("Full!\n"); 
        return; 
    }
    int val, pos;
    printf("Value and Position (0-%d): ", *size);
    scanf("%d %d", &val, &pos);
    if (pos < 0 || pos > *size) { 
        printf("Invalid!\n"); 
        return; 
    }
    for (int i = *size; i > pos; i--) {
        arr[i] = arr[i - 1];
        arr[pos] = val;
        (*size)++;
    }
}

// Delete
void deleteElement(int arr[], int *size) {
    int pos;
    printf("Index to delete (0-%d): ", *size - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= *size) { printf("Invalid!\n"); return; }
    for (int i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
        (*size)--;
    }
}

// Search
void searchElement(int arr[], int size) {
    int target, found = 0;
    printf("Element to search: ");
    scanf("%d", &target);
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) { 
            printf("Found at %d\n", i); 
            found = 1; break;
        }
    }
    if (!found) printf("Not found.\n");
}
