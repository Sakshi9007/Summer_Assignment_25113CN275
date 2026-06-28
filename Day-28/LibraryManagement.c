#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

// Define a structure to hold book records
typedef struct{
    int Book_ID ;
    char Title[50];
    char Author[50];
    char Category[50];
    int copies;
}Books ;

Books records[MAX_BOOKS];
int BookCount = 0;

//Function prototypes
void addBooks();
void displayBooks();
void searchBooks();
void updateBooks();
void issueBooks();
void returnBooks();

int main(){
    int choice;

    while(1){
        printf("\n=========Library Management System=========\n");
        printf("1: Add New Books\n");
        printf("2: Display books\n");
        printf("3: Search Books\n");
        printf("4: Update books\n");
        printf("5: Issue Books\n");
        printf("6: Return Books\n");
        printf("7: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1: addBooks(); break;
            case 2: displayBooks(); break;
            case 3: searchBooks(); break;
            case 4: updateBooks(); break;
            case 5: issueBooks(); break;
            case 6: returnBooks(); break;
            case 7:
                printf("Exiting system. Goodbye!\n");
                return 0;
            default :
                printf("Invalid choice! Please select between 1 and 7.\n");
        }
    }
    return 0;
}

// Add new books
void addBooks(){
    if(BookCount >= MAX_BOOKS){
        printf("Database full!\n");
        return;
    }
    printf("Enter book ID: ");
    scanf("%d",&records[BookCount].Book_ID);

    //Check if ID already exists
    for(int i = 0; i < BookCount; i++){
        if(records[i].Book_ID == records[BookCount].Book_ID){
            printf("Error: A employee with ID %d already exists!\n",records[BookCount].Book_ID);
            return;
        }
    }

    printf("Enter book title: ");
    getchar();
    fgets(records[BookCount].Title, sizeof(records[BookCount].Title),stdin);
    records[BookCount].Title[strcspn(records[BookCount].Title,"\n")] = 0;

    printf("Enter Author name: ");
    getchar();
    fgets(records[BookCount].Author, sizeof(records[BookCount].Author),stdin);
    records[BookCount].Author[strcspn(records[BookCount].Author,"\n")] = 0;

    printf("Enter category of book: ");
    getchar();
    fgets(records[BookCount].Category, sizeof(records[BookCount].Category),stdin);
    records[BookCount].Category[strcspn(records[BookCount].Category,"\n")] = 0;

    printf("Enter number of copies: ");
    scanf("%d",&records[BookCount].copies);

    BookCount++;
    printf("\nBook record addeed successfully.");
}

//Display all books
void displayBooks(){
    if(BookCount == 0){
        printf("No records to display.\n");
        return;
    }
    printf("\n----------Book Record----------\n");
    for(int i = 0; i < BookCount; i++){
        printf("\nBook %d\n",i+1);
        printf("\nBook ID   : %d",records[i].Book_ID);
        printf("\nTitle     : %s",records[i].Title);
        printf("\nAuthor    : %s",records[i].Author);
        printf("\nCategory  : %s",records[i].Category);
        printf("\nCopies    : %d",records[i].copies);
    }
    printf("\n---------------------------------\n");
}

//Search records
void searchBooks(){
    if(BookCount == 0){
        printf("No record to search.\n");
        return;
    }
    int searchID;
    printf("Enter Book ID to search: ");
    scanf("%d",&searchID);

    for(int i = 0; i < BookCount; i++){
        if(records[i].Book_ID == searchID){
            printf("\nBook ID   : %d",records[i].Book_ID);
            printf("\nTitle     : %s",records[i].Title);
            printf("\nAuthor    : %s",records[i].Author);
            printf("\nCategory  : %s",records[i].Category);
            printf("\nCopies    : %d",records[i].copies);
            return;
        }
    }
    printf("Book with ID %d not found.",searchID);
}

//update record
void updateBooks(){
    if(BookCount == 0){
        printf("No record to search.\n");
        return;
    }
    int updateID;
    printf("Enter book ID to update: ");
    scanf("%d", &updateID);

    for(int i = 0; i < BookCount; i++){
        if(records[i].Book_ID == updateID){
            printf("\nBook Found!\n");

            printf("Enter new book title: ");
            getchar();
            fgets(records[BookCount].Title, sizeof(records[BookCount].Title),stdin);
            records[BookCount].Title[strcspn(records[BookCount].Title,"\n")] = 0;

            printf("Enter new Author name: ");
            getchar();
            fgets(records[BookCount].Author, sizeof(records[BookCount].Author),stdin);
            records[BookCount].Author[strcspn(records[BookCount].Author,"\n")] = 0;

            printf("Enter new category of book: ");
            getchar();
            fgets(records[BookCount].Category, sizeof(records[BookCount].Category),stdin);
            records[BookCount].Category[strcspn(records[BookCount].Category,"\n")] = 0;

            printf("Enter new number of copies: ");
            scanf("%d",&records[BookCount].copies);

            printf("\nBook record updated successfully.\n");
            return;
        }
    }
    printf("\nBook with ID %d not found.",updateID);
}

//issue Books
void issueBooks(){
    if(BookCount == 0){
        printf("No book to issue.\n");
        return;
    }
    int returnID;
    printf("Enter the book ID to issue: ");
    scanf("%d",&returnID);

    for(int i = 0; i < BookCount; i++){
        if(records[i].Book_ID == returnID){
            if(records[i].copies > 0)
            {
                records[i].copies--;
                printf("\nBook issued successfully.\n");
            }
            else{
                printf("\nSorry! This book is currently unavailable.\n");
            }
        }
    }
    printf("\nBook with ID %d not found.\n",returnID);
}

//return book
void returnBooks(){
    if(BookCount == 0){
        printf("No book to issue.\n");
        return;
    }
    int returnID;
    printf("Enter the book ID to return: ");
    scanf("%d",&returnID);

    for(int i = 0; i < BookCount; i++){
        if(records[i].Book_ID == returnID){
            records[i].copies++;
            printf("\nBook returned successfully.\n");
        }
    }
    printf("\nBook with ID %d not found.\n",returnID);
}