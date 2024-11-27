#include <stdio.h>

// Define a structure named Item
struct Item {
    char ITEM_NAME[50];
    int QUANTITY;
    float PRICE;
    float AMOUNT;
};

// Function prototype to read item details and calculate amount
void read_item(struct Item *item);

int main() {
    // Declare a variable of type struct Item
    struct Item item;

    // Call the function to read item details and calculate amount
    read_item(&item);

    // Display the details of the item
    printf("\nItem Details:\n");
    printf("Item Name: %s\n", item.ITEM_NAME);
    printf("Quantity: %d\n", item.QUANTITY);
    printf("Price: %.2f\n", item.PRICE);
    printf("Amount: %.2f\n", item.AMOUNT);

    return 0;
}

// Function to read item details from the user and calculate amount
void read_item(struct Item *item) {
    // Read item name, quantity, and price from the user
    printf("Enter item name: ");
    scanf("%s", item->ITEM_NAME);  // Read the item name (string)
    
    printf("Enter quantity: ");
    scanf("%d", &item->QUANTITY);  // Read the quantity
    
    printf("Enter price: ");
    scanf("%f", &item->PRICE);  // Read the price
    
    // Calculate the amount
    item->AMOUNT = item->QUANTITY * item->PRICE;
}
