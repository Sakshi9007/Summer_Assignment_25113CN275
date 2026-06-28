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
int studentcount = 0;

//Function prototypes
void addStudent();
void searchStudent();
void deleteStudent();

int main()
{
    int choice;

    while(1){
        printf("\n ===Student Record Management System===\n");
        printf("1: Add New Student\n");
        printf("2: Search Student by Admission ID\n");
        printf("3: Delete Student Record\n");
        printf("4: Exit\n");
        printf("Enter your choice(1-4): ");
        scanf("%d", &choice);
        
        switch (choice){
            case 1: addStudent(); break;
            case 2: searchStudent(); break;
            case 3: deleteStudent(); break;
            case 4:
                printf("Exiting system. Goodbye!\n");
                return 0;
            default :
                printf("Invalid choice! Please select between 1 and 4.\n");
        }
    }
    return 0;
}

//Create a new student record
void addStudent(){
    if (studentcount >= MAX_STUDENTS){
        printf("Error: Database full!\n");
        return;
    }
    printf("\nEnter student admission ID: ");
    scanf("%d", &records[studentcount].admission_id);

    //Check if ID already exists
    for(int i = 0; i < studentcount; i++){
        if(records[i].admission_id == records[studentcount].admission_id){
            printf("Error: A studentd with ID %d already exists!\n",records[studentcount].admission_id);
            return;
        }
    }

    printf("Enter student name: ");
    getchar();
    fgets(records[studentcount].name,sizeof(records[studentcount].name),stdin);
    records[studentcount].name[strcspn(records[studentcount].name,"\n")] = 0;

    printf("Enter student GPA: ");
    scanf("%f",&records[studentcount].gpa);

    studentcount++;
    printf("Student record added successfully!\n");
}

//Read specific student record
void searchStudent(){
    if(studentcount == 0){
        printf("\nNo record to search.\n");
        return;
    }

    int searchID;
    printf("\nEnter student admission ID to search: ");
    scanf("%d",&searchID);
    
    for(int i = 0; i < studentcount; i++){
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

//delete an existing record
void deleteStudent() {
    if (studentcount == 0) {
        printf("\nNo records to delete.\n");
        return;
    }

    int deleteId;
    printf("\nEnter Student ID to delete: ");
    scanf("%d", &deleteId);

    for (int i = 0; i < studentcount; i++) {
        if (records[i].admission_id == deleteId) {
            for (int j = i; j < studentcount - 1; j++) {
                records[j] = records[j + 1];
            }
            studentcount--;
            printf("Student record deleted successfully!\n");
            return;
        }
    }
    printf("Student with ID %d not found.\n", deleteId);
}    