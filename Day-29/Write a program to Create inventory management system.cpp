#include <iostream>
#include <string>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    double price;
};

int main() {
    Item inventory[100];  
    int count = 0;        
    int choice;

    do {
        cout << "\n--- Inventory Management System ---\n";
        cout << "1. Add Item\n";
        cout << "2. Display All Items\n";
        cout << "3. Search Item by ID\n";
        cout << "4. Update Item\n";
        cout << "5. Delete Item\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter Item ID: ";
                cin >> inventory[count].id;
                cout << "Enter Item Name: ";
                cin.ignore();
                getline(cin, inventory[count].name);
                cout << "Enter Quantity: ";
                cin >> inventory[count].quantity;
                cout << "Enter Price: ";
                cin >> inventory[count].price;
                count++;
                cout << "Item added successfully!\n";
                break;
            }

            case 2: {
                cout << "\n--- Inventory List ---\n";
                for (int i = 0; i < count; i++) {
                    cout << "ID: " << inventory[i].id
                         << ", Name: " << inventory[i].name
                         << ", Quantity: " << inventory[i].quantity
                         << ", Price: " << inventory[i].price << endl;
                }
                break;
            }

            case 3: {
                int searchId;
                cout << "Enter Item ID to search: ";
                cin >> searchId;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (inventory[i].id == searchId) {
                        cout << "Found -> ID: " << inventory[i].id
                             << ", Name: " << inventory[i].name
                             << ", Quantity: " << inventory[i].quantity
                             << ", Price: " << inventory[i].price << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Item not found!\n";
                break;
            }

            case 4: {
                int updateId;
                cout << "Enter Item ID to update: ";
                cin >> updateId;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (inventory[i].id == updateId) {
                        cout << "Enter new name: ";
                        cin.ignore();
                        getline(cin, inventory[i].name);
                        cout << "Enter new quantity: ";
                        cin >> inventory[i].quantity;
                        cout << "Enter new price: ";
                        cin >> inventory[i].price;
                        cout << "Item updated successfully!\n";
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Item not found!\n";
                break;
            }

            case 5: {
                int deleteId;
                cout << "Enter Item ID to delete: ";
                cin >> deleteId;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (inventory[i].id == deleteId) {
                        for (int j = i; j < count - 1; j++) {
                            inventory[j] = inventory[j + 1];
                        }
                        count--;
                        cout << "Item deleted successfully!\n";
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Item not found!\n";
                break;
            }

            case 6:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 6);

    return 0;
}

/*
Logic Explanation
1. A struct 'Item' stores ID, name, quantity, and price.
2. An array 'inventory' holds up to 100 items, with 'count' tracking how many are stored.
3. A do-while loop shows the menu until the user chooses Exit.
4. Switch-case handles operations:
   - Case 1: Add new item details into the array.
   - Case 2: Display all items in inventory.
   - Case 3: Search item by ID using linear search.
   - Case 4: Update item details if ID matches.
   - Case 5: Delete item by shifting elements left.
   - Case 6: Exit program.
5. Default case handles invalid input.
*/
