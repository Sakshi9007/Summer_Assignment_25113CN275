#include <stdio.h>
#include <string.h>

#define MAX_records 100

// define a structure to hold employees record
typedef struct{
    int Employee_ID;
    char name[50];
    int age;
    char department[100];
    int salary;
}Employee ;

Employee records[MAX_records];
int EmployeeCount = 0;

//Function prototypes
void addEmployee();
void displayrecords();
void searchEmployee();
void updateEmployee();
void deleteEmployee();

int main(){
    int choice;

    while(1){
        printf("\n ===Employee Record Management System===\n");
        printf("1: Add New Employee\n");
        printf("2: Display All records\n");
        printf("3: Search Employee\n");
        printf("4: Update Employee\n");
        printf("5: Delete Employee\n");
        printf("6: Exit\n");
        printf("Enter your choice(1-6): ");
        scanf("%d", &choice);
        
        switch (choice){
            case 1: addEmployee(); break;
            case 2: displayrecords(); break;
            case 3: searchEmployee(); break;
            case 4: updateEmployee(); break;
            case 5: deleteEmployee(); break;
            case 6:
                printf("Exiting system. Goodbye!\n");
                return 0;
            default :
                printf("Invalid choice! Please select between 1 and 6.\n");
        }
    }
    return 0;
}

//Create a new employee record
void addEmployee(){
    if (EmployeeCount >= MAX_records){
        printf("Error: Database full!\n");
        return;
    }
    printf("\nEnter employee ID: ");
    scanf("%d", &records[EmployeeCount].Employee_ID);

    //Check if ID already exists
    for(int i = 0; i < EmployeeCount; i++){
        if(records[i].Employee_ID == records[EmployeeCount].Employee_ID){
            printf("Error: A employee with ID %d already exists!\n",records[EmployeeCount].Employee_ID);
            return;
        }
    }

    printf("Enter employee name: ");
    getchar();
    fgets(records[EmployeeCount].name,sizeof(records[EmployeeCount].name),stdin);
    records[EmployeeCount].name[strcspn(records[EmployeeCount].name,"\n")] = 0;

    printf("Enter employee department: ");
    getchar();
    fgets(records[EmployeeCount].department,sizeof(records[EmployeeCount].department),stdin);
    records[EmployeeCount].department[strcspn(records[EmployeeCount].department,"\n")] = 0;

    printf("Enter employee age: ");
    scanf("%d",&records[EmployeeCount].age);

    printf("Enter employee salary: ");
    scanf("%d",&records[EmployeeCount].salary);

    EmployeeCount++;
    printf("Student record added successfully!\n");
}

//Display all records
void displayrecords(){
    if(EmployeeCount == 0){
        printf("\nNo record to display.\n");
        return;
    }
    printf("\n=========Employee Records=========");

    for(int i = 0; i < EmployeeCount; i++){
        printf("\nEmployee %d\n", i+1);
        printf("Employee ID : %d\n",records[i].Employee_ID);
        printf("Name        : %s\n",records[i].name);
        printf("Age         : %d\n",records[i].age);
        printf("Department  : %s\n",records[i].department);
        printf("Salary      : %.2f\n",records[i].salary);
    }
    printf("\n===================================\n");
}

//Read specific employee record
void searchEmployee(){
    if(EmployeeCount == 0){
        printf("\nNo record to search.\n");
        return;
    }

    int searchID;
    printf("\nEnter Employee ID to search: ");
    scanf("%d",&searchID);
    
    for(int i = 0; i < EmployeeCount; i++){
        if(records[i].Employee_ID == searchID){
            printf("\nRecord found:\n");
            printf("Employee ID: %d\n",records[i].Employee_ID);
            printf("Name: %s\n", records[i].name);
            printf("Age: %d\n", records[i].age);
            printf("Department: %s\n", records[i].department);
            printf("Salary: %d\n", records[i].salary);
            return;
        }
    }
    printf("Employee with ID %d not found.\n",searchID);
}

//Update record of existing employee
void updateEmployee(){
    if (EmployeeCount == 0) {
        printf("\nNo records to delete.\n");
        return;
    }
    int updateID;
    printf("Enter Employee ID to update: ");
    scanf("%d", &updateID);

    for (int i = 0; i < EmployeeCount; i++)
    {
        if (records[i].Employee_ID == updateID)
        {
            printf("\nEmployee found!\n");

            printf("Enter new name: ");
            getchar();
            fgets(records[i].name, sizeof(records[i].name), stdin);
            records[i].name[strcspn(records[i].name, "\n")] = '\0';

            printf("Enter new age: ");
            scanf("%d", &records[i].age);

            printf("Enter new department: ");
            getchar();
            fgets(records[i].department,sizeof(records[i].department), stdin);
            records[i].department[strcspn(records[i].department, "\n")] = '\0';

            printf("Enter new salary: ");
            scanf("%f", &records[i].salary);

            printf("\nEmployee record updated successfully!\n");
            return;
        }
    }

    printf("\nEmployee with ID %d not found.\n", updateID);
}
//delete an existing record
void deleteEmployee() {
    if (EmployeeCount == 0) {
        printf("\nNo records to delete.\n");
        return;
    }

    int deleteId;
    printf("\nEnter Employee ID to delete: ");
    scanf("%d", &deleteId);

    for (int i = 0; i < EmployeeCount; i++) {
        if (records[i].Employee_ID == deleteId) {
            for (int j = i; j < EmployeeCount - 1; j++) {
                records[j] = records[j + 1];
            }
            EmployeeCount--;
            printf("Employee record deleted successfully!\n");
            return;
        }
    }
    printf("Employee with ID %d not found.\n", deleteId);
}