#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

//Define structure to hold student record
typedef struct {
    int admission_id ;
    char name[50] ;
    float gpa ;
}Student;

Student records[MAX_STUDENTS];
int studentCount = 0;

//Function prototypes
void addStudent();
void displayStudents();
void searchStudent();

int main()
{
    int choice;

    while(1){
        printf("\n ===Student Record System===\n");
        printf("1: Add Student\n");
        printf("2: Display Students\n");
        printf("3: Search Student\n");
        printf("4: Exit\n");
        printf("Enter your choice(1-4): ");
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input!\n");
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            continue;
        }
        
        switch (choice){
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4:
                printf("Exiting system. Goodbye!\n");
                return 0;
            default :
                printf("Invalid choice! Please select between 1 and 4.\n");
        }
    }
    return 0;
}

//Create student record
void addStudent(){
    if (studentCount >= MAX_STUDENTS){
        printf("Error: Database full!\n");
        return;
    }
    printf("\nEnter student admission ID: ");
    scanf("%d", &records[studentCount].admission_id);

    //Check if ID already exists
    for(int i = 0; i < studentCount; i++){
        if(records[i].admission_id == records[studentCount].admission_id){
            printf("Error: A student with ID %d already exists!\n",records[studentCount].admission_id);
            return;
        }
    }

    printf("Enter student name: ");
    getchar();
    fgets(records[studentCount].name,sizeof(records[studentCount].name),stdin);
    records[studentCount].name[strcspn(records[studentCount].name,"\n")] = '\0';

    printf("Enter student GPA: ");
    scanf("%f",&records[studentCount].gpa);
    if(records[studentCount].gpa < 0 || records[studentCount].gpa > 10)
    {
        printf("Invalid GPA!\n");
        return;
    }

    studentCount++;
    printf("Student record added successfully!\n");
}

//Display students
void displayStudents(){
    if(studentCount == 0){
        printf("\nNo record to display.\n");
        return;
    }
    printf("\n==============Student Records==============\n");

    printf("--------------------------------------------\n");
    printf("%-15s %-20s %-10s\n", "Admission ID", "Name", "GPA");
    printf("--------------------------------------------\n");
    for(int i = 0; i < studentCount; i++){
        printf("%-15d %-20s %-10.2f\n", records[i].admission_id, records[i].name, records[i].gpa);
    }
    printf("\n============================================\n");
}

//Read specific student record
void searchStudent(){
    if(studentCount == 0){
        printf("\nNo record to search.\n");
        return;
    }

    int searchID;
    printf("\nEnter student admission ID to search: ");
    scanf("%d",&searchID);
    
    for(int i = 0; i < studentCount; i++){
        if(records[i].admission_id == searchID){
            printf("\nRecord found:\n");
            printf("Admission ID: %d\n",records[i].admission_id);
            printf("Name: %s\n", records[i].name);
            printf("GPA: %.2f\n", records[i].gpa);
            return;
        }
    }
    printf("Student with ID %d not found.\n",searchID);
}