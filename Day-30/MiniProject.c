//A mini project featuring grocery billing system
#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 100

//Define structure to hold grocery list
typedef struct 
{
    int productID;
    char productName[50];
    float price;
    int quantitybought;
    float amount;
}Product;

typedef struct{
    float amount;
}bill;

//Global variables
Product products[MAX_PRODUCTS];
int productCount = 0;

//Function prototypes
void addProduct();
void displayProducts();
void searchProducts();
void updateProducts();
void deleteProduct();
void generateBill();

int main()
{
    int choice;

    while(1){
        printf("\n========Grocery Billing System========\n");
        printf("1: Add products\n");
        printf("2: Display Products\n");
        printf("3: Search Products\n");
        printf("4: Update products\n");
        printf("5: Delete product\n");
        printf("6: Generate Bill\n");
        printf("7: Exit\n");
        printf("Enter your choice(1-7): ");
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input!\n");
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            continue;
        }

        switch(choice){
            case 1: addProduct(); break;
            case 2: displayProducts(); break;
            case 3: searchProducts(); break;
            case 4: updateProducts(); break;
            case 5: deleteProduct(); break;
            case 6: generateBill(); break;
            case 7:
                printf("Exiting system. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please select between 1 and 7.\n");
        }
    }
    return 0;
}

//Add product
void addProduct(){
    if (productCount >= MAX_PRODUCTS){
        printf("Error: Reached max capacity! Can't add more!\n");
        return;
    }
    printf("\nEnter product ID: ");
    scanf("%d", &products[productCount].productID);

    //Check if product already exists
    for(int i = 0; i < productCount; i++){
        if(products[i].productID == products[productCount].productID){
            printf("Error: A product with ID %d already exists!\n",products[productCount].productID);
            return;
        }
    }

    printf("Enter Product name: ");
    getchar();
    fgets(products[productCount].productName, sizeof(products[productCount].productName), stdin);
    products[productCount].productName[strcspn(products[productCount].productName, "\n")] = '\0';

    printf("Enter the price of product: ");
    scanf("%f",&products[productCount].price);
    if(products[productCount].price < 0){
        printf("Invalid price!\n");
        return;
    }

    printf("Enter the quantitybought of product: ");
    scanf("%d",&products[productCount].quantitybought);
    if(products[productCount].quantitybought < 0){
        printf("Invali quantitybought!\n");
        return;
    }

    productCount++;
    printf("Product added successfully.\n");
}

//Display Products
void displayProducts(){
    if(productCount == 0){
        printf("No product added to list yet.\n");
        return;
    }
    printf("\n==============Grocery List==============\n");
    printf("--------------------------------------------\n");
    printf("%-15s %-20s %-10s %-5s\n", "Product ID", "Product Name", "Price", "Quantitybought");
    printf("--------------------------------------------\n");
    for(int i = 0; i < productCount; i++){
        printf("%-15d %-20s %-10.2f %-5d\n",
            products[productCount].productID, 
            products[productCount].productName,
            products[productCount].price, 
            products[productCount].quantitybought);
    }
    printf("\n============================================\n");
}

//Search fo specific product
void searchProducts(){
    if(productCount == 0){
        printf("\nNo product to search.\n");
        return;
    }

    int searchID;
    printf("\nEnter product ID to search: ");
    scanf("%d",&searchID);
    
    for(int i = 0; i < productCount; i++){
        if(products[i].productID == searchID){
            printf("\nproduct found:\n");
            printf("Product ID: %d\n",products[i].productID);
            printf("Product Name: %s\n", products[i].productName);
            printf("Price: %.2f\n", products[i].price);
            printf("Quantitybought: %d\n",products[i].quantitybought);
            return;
        }
    }
    printf("Product with ID %d not found.\n",searchID);
}

//Update Product
void updateProducts(){
    if(productCount == 0){
        printf("\nNo product to search.\n");
        return;
    }
    int updateID;
    printf("Enter product ID to update: ");
    scanf("%d", &updateID);

    for(int i = 0; i < productCount; i++){
        if(products[i].productID == updateID){
            printf("Product found!\n");
            
            printf("Enter Product's new name: ");
            getchar();
            fgets(products[productCount].productName, sizeof(products[productCount].productName), stdin);
            products[productCount].productName[strcspn(products[productCount].productName, "\n")] = '\0';

            printf("Enter the new price of product: ");
            scanf("%f",&products[productCount].price);
            if(products[productCount].price < 0){
                printf("Invalid price!\n");
                return;
            }

            printf("Enter the new quantitybought of product: ");
            scanf("%d",&products[productCount].quantitybought);
            if(products[productCount].quantitybought < 0){
                printf("Invalid quantitybought!\n");
                return;
            }
        }
    }
    printf("\nProduct with ID %d not found.",updateID);
}

//Delete product
void deleteProduct() {
    if (productCount == 0) {
        printf("\nNo product to delete.\n");
        return;
    }
    int deleteId;
    printf("\nEnter product ID to delete: ");
    scanf("%d", &deleteId);

    for (int i = 0; i < productCount; i++) {
        if (products[i].productID == deleteId) {
            for (int j = i; j < productCount - 1; j++) {
                products[j] = products[j + 1];
            }
            productCount--;
            printf("Product deleted successfully!\n");
            return;
        }
    }
    printf("product with ID %d not found.\n", deleteId);
}

void generateBill(){
    if(productCount == 0){
        printf("No product added to list yet.\n");
        return;
    }

    float total = 0;
    for(int i = 0; i < productCount; i++){
        products[i].amount = products[i].price * products[i].quantitybought;
        total +=products[i].amount; 
    }

    printf("--------------------------------------------------------------------------------\n");
    printf("%-15s %-20s %-10s %-15s %-20s\n", "Product ID", "Product Name", "Price", "Quantitybought", "Amount");
    printf("---------------------------------------------------------------------------------\n");
    for(int i = 0; i < productCount; i++){
        printf("%-15d %-20s %-10.2f %-15d %-20.2f\n",
            products[i].productID, 
            products[i].productName,
            products[i].price, 
            products[i].quantitybought,
            products[i].amount);
    }
    printf("\n=================================================================================\n");    
    printf("Total Payable Amount = %.2f ", total);
}